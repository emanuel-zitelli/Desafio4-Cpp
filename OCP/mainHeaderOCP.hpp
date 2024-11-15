#ifndef MAINHEADEROCP_HPP
#define MAINHEADEROCP_HPP

#include <iostream>
#include <vector>

enum Opcion
{
    Agregar,
    Mostrar,
    Finalizar

};

enum tipoVehiculo
{
    tAuto=1,
    tMoto,
    tCamion
};

//clases para OCP
#include "claseOCP_vehiculo.hpp"
#include "claseOCP_serviciosVehiculo.hpp"
#include "claseOCP_auto.hpp"
#include "claseOCP_moto.hpp"
#include "claseOCP_camion.hpp"

void limpieza(std::vector<Vehiculo*>& lista);
bool mostrarLista(std::vector<Vehiculo*>& lista);
short int mensaje_Bienvenida(std::string mensaje);

void agregarVehiculo(std::vector<Vehiculo*>& lista, Servicios* mantenimiento);

#endif