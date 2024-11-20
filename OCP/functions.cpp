#include "mainHeaderOCP.hpp"

bool mostrarLista(std::vector<Vehiculo*>& lista) // Devuelve un bool para saber si hay vehiculos. Si no hay no quiero habilitar los inputs
{   
    system("cls");

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
                << "Litros de nafta: " << (*lista[i]).getNafta() << "\n"
                << "Costo Calculado del vehiculo: " << (*lista[i]).getCosto() << "\n";
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
        << "Ingresar Mostrar Vehiculos: " << Opcion::Mostrar << "\n"
        << "Finalizar: " << Opcion::Finalizar << "\n";

        std::cin >> opcion;

        return opcion;
}

void agregarVehiculo(std::vector<Vehiculo*>& listadoVehiculos, Servicios* mantenimiento)
{
    std::string marca, modelo;
    double litrosNafta, costoBase; 
    short int opcion;

    std::cout 
        << "Que vehiculo quiere ingresar?: \n"
        << "Auto: " << tipoVehiculo::tAuto << "\n"
        << "Moto: " << tipoVehiculo::tMoto << "\n"
        << "Camion: " << tipoVehiculo::tCamion << "\n";

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
    }

    std::cout << "Desea cargar el combustible? (0: no | 1: si): ";
    std::cin >> opcion;

    if (opcion)
    {
        do
        {
            std::cout << "Cuantos litros desea?: ";
            std::cin >> litrosNafta;
        } while (litrosNafta < 0);
        (*mantenimiento).cargaCombustible(*(listadoVehiculos.back()), litrosNafta);
    }

    
    do
    {
        std::cout << "Ingrese el costo base del vehiculo: ";
        std::cin >> costoBase;
    } while (costoBase < 0);

    std::cout << "El costo base del vehiculo es: " << (*(listadoVehiculos.back())).calcularCostos(costoBase) << "\n" ;
    

    
}