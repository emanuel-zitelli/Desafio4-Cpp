#include "../mainHeader.hpp"

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
            (*lista[i]).mostrarInfo();
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