#ifndef MAINHEADERDIP_HPP
#define MAINHEADERDIP_HPP

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

//clases para DIP
#include "claseDIP_iVehiculoBase.hpp"
#include "claseDIP_flotaControl.hpp"

#include "claseDIP_iMovil.hpp"
#include "claseDIP_iMantenimiento.hpp"

#include "claseDIP_auto.hpp"
#include "claseDIP_moto.hpp"
#include "claseDIP_camion.hpp"
#include "claseDIP_remolque.hpp"

void limpieza(std::vector<iVehiculoBase*>& lista);
bool mostrarLista(std::vector<iVehiculoBase*>& lista);
short int mensaje_Bienvenida(std::string mensaje);

void agregarVehiculo(std::vector<iVehiculoBase*>& lista); //, iMantenimiento* mantenimiento

void moverVehiculo(std::vector<iVehiculoBase*>& lista);

#endif