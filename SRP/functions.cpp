#include "mainHeader.hpp"

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
                << "Litros de nafta: " << (*lista[i]).getNafta() << "\n";
            std::cout << "\n";
    }   }
        return true;
}


void limpieza(std::vector<Vehiculo*>& lista) // para liberar la memoria. De paso limpiamos los punteros que no apuntan a nada
{   system("cls");
    for (size_t i = 0; i < lista.size(); ++i)
    {
        delete lista[i];    // Libera la memoria de cada objeto
        lista[i] = nullptr; // Establece el puntero en nullptr
    }
    std::cout << "Memoria Liberada. Finalizando programa.";
}

short int mensaje_Bienvenida()
{
    short int opcion;

    std::cout 
        << "Bienvenido! Ingrese la operacion que desea hacer: \n"
        << "Ingresar Vehiculo: " << Opcion::Agregar << "\n"
        << "Ingresar Mostrar Vehiculos: " << Opcion::Mostrar << "\n"
        << "Finalizar: " << Opcion::Finalizar << "\n";

        std::cin >> opcion;

        return opcion;
}

void agregarVehiculo(std::vector<Vehiculo*>& listadoVehiculos, Servicios* mantenimiento)
{
    std::string marca, modelo;
    double litrosNafta; 
    short int opcion;

    std::cout << "Ingrese la marca:";
    std::getline(std::cin, marca);

    std::cout << "Ingrese el modelo:";
    std::getline(std::cin, modelo);

    listadoVehiculos.push_back(new Vehiculo(marca, modelo));

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
}

/*
bool mostrarLista(std::vector<Vehiculo*>& lista) // Devuelve un bool para saber si hay vehiculos. Si no hay no quiero habilitar los inputs
{   
    char quiereRecargar;
    double bateria;

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
            Vehiculo* vehiculo = lista[i];
            Electricidad* vehiculoElectrico = dynamic_cast<Electricidad*>(vehiculo); // Verificar si el vehículo es eléctrico usando dynamic_cast

            if (vehiculoElectrico) // Se cumple la condicion con un puntero no nulo, o sea, vehiculo electrico
            {
                // Se cumple la condicion si vehiculo (puntero del elemento i) es un tipo de puntero Electricidad (un puntero derivado)
                std::cout << "El siguiente vehiculo es electrico:\n" << i+1 << ". ";
                
                (*lista[i]).mostrarInfo();
                std::cout << "\n";

                std::cout << "Desea recargarlo? (Y/N): ";
                std::cin >> quiereRecargar;
                std::tolower(quiereRecargar);

                if(quiereRecargar == 'y')
                {
                    bateria=validarCarga((*vehiculoElectrico).getBateria());
                    if(bateria!=-1)
                        (*vehiculoElectrico).cargarBateria(bateria);
                    else
                        std::cout << "Operacion Fallida. Vuelva a intentarlo despues. \n";
                }
            }
            else
            {
                // solo mostramos la info del vehiculo
                std::cout << i+1 << ". ";
                (*lista[i]).mostrarInfo();
                std::cout << "\n";
            }
        }
        return true;
    }
}
*/