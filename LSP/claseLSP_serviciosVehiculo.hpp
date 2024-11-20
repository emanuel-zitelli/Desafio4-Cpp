#ifndef CLASELSP_SERVICIOSVEHICULO_HPP
#define CLASELSP_SERVICIOSVEHICULO_HPP

class Servicios
{
public:

    void cargaCombustible(Vehiculo& vehiculo, double litros)
    {
        vehiculo.setNafta(litros);
    }
};

#endif 