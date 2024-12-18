#include "mainHeader.hpp"


int main()
{
    short int opcion;
    Servicios* mantenimiento = new Servicios();
    std::vector<Vehiculo*> listadoVehiculos;
    
    opcion=mensaje_Bienvenida();
    while(opcion!=Opcion::Finalizar)
    {
        std::cin.ignore();

        switch(opcion)
        {
            case Opcion::Agregar :
                agregarVehiculo(listadoVehiculos, mantenimiento);
                break;

            case Opcion::Mostrar :
                mostrarLista(listadoVehiculos);
                break;

            default :
                std::cout << "Opcion invalida. Vuelva a intentarlo";
                break;
        }
        
        opcion=mensaje_Bienvenida();
    }

    //liberamos memoria dinamica del heap. sino al finalizar el programa no se libera, y en algunas ejecuciones se crashea el programa
    limpieza(listadoVehiculos);
    delete mantenimiento;

    return 0;
}