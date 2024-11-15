#ifndef CLASEOCP_CAZA_HPP
#define CLASEOCP_CAZA_HPP

class Moto : public Vehiculo, public Servicios
{
public:
    Moto(const std::string& marca, const std::string& modelo) 
    : Vehiculo(marca, modelo) {};

    virtual double calcularCostos(double precioBase) override
    {
        double impuestoMoto = 0.3; //porcentajes
        double impuestoPorRueda = 0.02;

        return (precioBase*impuestoMoto*impuestoPorRueda*2);
    }
    
};

#endif 