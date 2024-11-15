#ifndef CLASE_SERVICIOSVEHICULO_HPP
#define CLASE_SERVICIOSVEHICULO_HPP

class Servicios
{
public:

    void cargaCombustible(Vehiculo& vehiculo, double litros)
    {
        vehiculo.setNafta(litros);
    }
};
#endif //CLASE_SERVICIOSVEHICULO_HPP