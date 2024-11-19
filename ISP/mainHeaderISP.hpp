#ifndef MAINHEADERLSP_HPP
#define MAINHEADERLSP_HPP

#include <iostream>
#include <vector>

enum Opcion
{
    Agregar,
    Mostrar,
    Finalizar,
    Mover

};

enum tipoVehiculo
{
    tAuto=1,
    tMoto,
    tCamion
};

//clases para ISP
#include "claseISP_vehiculo.hpp"
#include "claseISP_serviciosVehiculo.hpp"
#include "claseISP_auto.hpp"
#include "claseISP_moto.hpp"
#include "claseISP_camion.hpp"

void limpieza(std::vector<Vehiculo*>& lista);
bool mostrarLista(std::vector<Vehiculo*>& lista);
short int mensaje_Bienvenida(std::string mensaje);

void agregarVehiculo(std::vector<Vehiculo*>& lista, Servicios* mantenimiento);

void moverVehiculo(std::vector<Vehiculo*>& lista);

#endif