#ifndef CLASEOCP_SERVICIOSVEHICULO_HPP
#define CLASEOCP_SERVICIOSVEHICULO_HPP

class Servicios
{
public:

    void cargaCombustible(Vehiculo& vehiculo, double litros)
    {
        vehiculo.setNafta(litros);
    }
};

#endif //CLASEOCP_SERVICIOSVEHICULO_HPP