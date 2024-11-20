#ifndef MAINHEADERISP_HPP
#define MAINHEADERISP_HPP

#include <iostream>
#include <vector>

enum Opcion
{
    Agregar=1,
    Mostrar,
    Mover,
    Finalizar

};

enum tipoVehiculo
{
    tAuto=1,
    tMoto,
    tCamion,
    tRemolque
};

//clases para ISP
#include "claseISP_vehiculo.hpp"
#include "claseISP_iMovil.hpp"
#include "claseISP_iMantenimiento.hpp"

#include "claseISP_auto.hpp"
#include "claseISP_moto.hpp"
#include "claseISP_camion.hpp"

#include "claseISP_remolque.hpp"

void limpieza(std::vector<Vehiculo*>& lista);
bool mostrarLista(std::vector<Vehiculo*>& lista);
short int mensaje_Bienvenida(std::string mensaje);

void agregarVehiculo(std::vector<Vehiculo*>& lista); //, iMantenimiento* mantenimiento

void moverVehiculo(std::vector<Vehiculo*>& lista);

#endif