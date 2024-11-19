#ifndef CLASEOCP_HELICOPTERO_HPP
#define CLASEOCP_HELICOPTERO_HPP

class Auto : public Vehiculo, public Servicios
{
public:

    Auto(const std::string& marca, const std::string& modelo) 
    : Vehiculo(marca, modelo) {};

    double calcularCostos(double precioBase) override
    {
        double impuestoAutos = 0.2; //porcentajes
        double impuestoPorRueda = 0.05;
        costoCalculado = (precioBase + (precioBase*impuestoAutos) + (precioBase*impuestoPorRueda*4));

        return costoCalculado;
    }
};
#endif 