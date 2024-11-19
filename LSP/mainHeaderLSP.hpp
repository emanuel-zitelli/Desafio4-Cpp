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

//clases para LSP
#include "claseLSP_vehiculo.hpp"
#include "claseLSP_serviciosVehiculo.hpp"
#include "claseLSP_auto.hpp"
#include "claseLSP_moto.hpp"
#include "claseLSP_camion.hpp"

void limpieza(std::vector<Vehiculo*>& lista);
bool mostrarLista(std::vector<Vehiculo*>& lista);
short int mensaje_Bienvenida(std::string mensaje);

void agregarVehiculo(std::vector<Vehiculo*>& lista, Servicios* mantenimiento);

void moverVehiculo(std::vector<Vehiculo*>& lista);

#endif