#ifndef MAINHEADER_HPP
#define MAINHEADER_HPP

#include <iostream>
#include <vector>

//clases para SRP
#include "SRP/clase_vehiculo.hpp"
#include "SRP/clase_serviciosVehiculo.hpp"


//clases para OCP
#include "OCP/claseOCP_vehiculo.hpp"
#include "OCP/claseOCP_serviciosVehiculo.hpp"
#include "OCP/claseOCP_caza.hpp"
#include "OCP/claseOCP_helicoptero.hpp"
#include "OCP/claseOCP_camioneta.hpp"

void limpieza(std::vector<Vehiculo*>& lista);
bool mostrarLista(std::vector<Vehiculo*>& lista);

#endif