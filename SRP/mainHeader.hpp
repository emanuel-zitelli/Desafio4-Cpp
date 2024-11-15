#ifndef MAINHEADER_HPP
#define MAINHEADER_HPP

#include <iostream>
#include <vector>


enum Opcion
{
    Agregar,
    Mostrar,
    Finalizar

};


//clases para SRP
#include "clase_vehiculo.hpp"
#include "clase_serviciosVehiculo.hpp"

void limpieza(std::vector<Vehiculo*>& lista);
bool mostrarLista(std::vector<Vehiculo*>& lista);
short int mensaje_Bienvenida();

void agregarVehiculo(std::vector<Vehiculo*>& lista, Servicios* mantenimiento);

#endif