#ifndef CLASEOCP_MOTO_HPP
#define CLASEOCP_MOTO_HPP

class Moto : public Vehiculo, public Servicios
{
public:
    Moto(const std::string& marca, const std::string& modelo) 
    : Vehiculo(marca, modelo) {};

    double calcularCostos(double precioBase) override
    {
        double impuestoMoto = 0.5; //porcentajes
        double impuestoPorRueda = 0.1;

        costoCalculado = (precioBase + (precioBase*impuestoMoto) + (precioBase*impuestoPorRueda*2));

        return costoCalculado;
    }
};

#endif 