#include "mainHeaderISP.hpp"

int validar(int li, int ls, std::string mensaje)
{
    int valor;

    do
    {
        std::cout << mensaje;
        std::cin >> valor;
    } while (valor < li || valor > ls);

    return valor;
}

int validar(int li, std::string mensaje)
{
    int valor;

    do
    {
        std::cout << mensaje;
        std::cin >> valor;
    } while (valor < li);

    return valor;
}

bool mostrarLista(std::vector<Vehiculo*>& lista) // Devuelve un bool para saber si hay vehiculos. Si no hay no quiero habilitar los inputs
{   
    system("cls");
    iMantenimiento* vehiculoConMantenimiento;

    if (lista.size() == 0)
    {
        std::cout << "No hay vehiculos ingresados\n";
        return false;
    }
    else
    {
        std::cout << "\nLista de Vehiculos:" << "\n";
        for (int i = 0; i < lista.size(); i++)
        {
            
                
            
            // solo mostramos la info del vehiculo
            std::cout << i+1 << ". ";
            std::cout
                << "Marca: " << (*lista[i]).getMarca() << "\n"
                << "Modelo: " << (*lista[i]).getModelo() << "\n"
                << "Costo Calculado del vehiculo: " << (*lista[i]).getCosto() << "\n";
            
            if(vehiculoConMantenimiento = dynamic_cast<iMantenimiento*>(lista[i]))
                std::cout << "Litros de nafta: " << (*vehiculoConMantenimiento).getCombustible() << "\n";
            
            std::cout << "\n";
    }   }
        return true;
}


void limpieza(std::vector<Vehiculo*>& lista) // para liberar la memoria. De paso limpiamos los punteros que no apuntan a nada
{   
    for (size_t i = 0; i < lista.size(); ++i)
    {
        delete lista[i];    // Libera la memoria de cada objeto
        lista[i] = nullptr; // Establece el puntero en nullptr
    }
    std::cout << "Memoria Liberada. Finalizando programa.";
}

short int mensaje_Bienvenida(std::string mensaje)
{
    short int opcion;

    std::cout 
        << mensaje << ": \n"
        << "Ingresar Vehiculo: " << Opcion::Agregar << "\n"
        << "Mostrar Vehiculos: " << Opcion::Mostrar << "\n"
        << "Mover Vehiculos: " << Opcion::Mover << "\n"
        << "Finalizar: " << Opcion::Finalizar << "\n";

        std::cin >> opcion;

        return opcion;
}

void agregarVehiculo(std::vector<Vehiculo*>& listadoVehiculos) //, iMantenimiento* mantenimiento
{
    std::string marca, modelo;
    double litrosNafta, costoBase; 
    short int opcion;
    iMantenimiento* vehiculoConMantenimiento=nullptr;

    std::cout 
        << "Que vehiculo quiere ingresar?: \n"
        << "Auto: " << tipoVehiculo::tAuto << "\n"
        << "Moto: " << tipoVehiculo::tMoto << "\n"
        << "Camion: " << tipoVehiculo::tCamion << "\n"
        << "Remolque: " << tipoVehiculo::tRemolque << "\n";

    std::cin >> opcion;
    std::cin.ignore();

    std::cout << "Ingrese la marca:";
    std::getline(std::cin, marca);

    std::cout << "Ingrese el modelo:";
    std::getline(std::cin, modelo);

    switch(opcion)
    {
        case tipoVehiculo::tAuto :
            listadoVehiculos.push_back(new Auto(marca, modelo));
            break;

        case tipoVehiculo::tMoto :
            listadoVehiculos.push_back(new Moto(marca, modelo));
            break;
        
        case tipoVehiculo::tCamion :
            listadoVehiculos.push_back(new Camion(marca, modelo));
            break;
        
        case tipoVehiculo::tRemolque :
            listadoVehiculos.push_back(new Remolque(marca, modelo));
            break;
    }

    vehiculoConMantenimiento = dynamic_cast<iMantenimiento*>(listadoVehiculos.back());
    if(vehiculoConMantenimiento)
    {
        std::cout << "Desea cargar el combustible? (0: no | 1: si): ";
        std::cin >> opcion;
    }
    

    if (opcion && vehiculoConMantenimiento)
    {
        
        litrosNafta = validar(0, "Cuantos litros desea?: ");
        (*vehiculoConMantenimiento).cargaCombustible(litrosNafta); //(*mantenimiento).cargaCombustible(*(listadoVehiculos.back()),litrosNafta);
    }
    costoBase = validar(0, "Ingrese el costo base del vehiculo: ");
    

    std::cout << "El costo base del vehiculo es: " << (*(listadoVehiculos.back())).calcularCostos(costoBase) << "\n" ;
}

void moverVehiculo(std::vector<Vehiculo*>& lista)
{
    short int numVehiculo;
    double kilometraje;
    iMovil* vehiculoConMovil;
    iMantenimiento* vehiculoConMantenimiento;

    system("cls");
    

    switch (lista.size())
    {
    case 0:

        std::cout << "No hay vehiculos cargados para moverlo\n";
        break;

    default:

        mostrarLista(lista);

        numVehiculo = validar(1, lista.size(),"Ingrese el numero de vehiculo que desea mover: " );

        vehiculoConMovil = dynamic_cast<iMovil*>(lista[numVehiculo - 1]); //devuelve un puntero si el vehiculo  hereda iMovil
        vehiculoConMantenimiento = dynamic_cast<iMantenimiento*>(lista[numVehiculo - 1]); //lo mismo pero con mantenimiento

        if (vehiculoConMovil)
        {
            kilometraje = validar(0, "Ingrese los kilometros que lo quiere mover: ");

            if (vehiculoConMantenimiento && (*vehiculoConMantenimiento).getCombustible() - (kilometraje / 20) < 0 )
                std::cout << "No hay suficiente nafta para recorrer esos kilometros ";
            else
                (*vehiculoConMovil).mover(kilometraje);
        }
        else
            std::cout << "El vehiculo no tiene la funcionalidad de moverse";

        break;
    }
}
