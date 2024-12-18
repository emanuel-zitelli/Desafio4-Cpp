#ifndef CLASELSP_CAMION_HPP
#define CLASELSP_CAMION_HPP

class Camion : public Vehiculo, public Servicios
{
public:

    Camion(const std::string& marca, const std::string& modelo) 
    : Vehiculo(marca, modelo) {};
    
    double calcularCostos(double precioBase) override
    {
        double impuestoCamion = 0.15; //porcentajes
        double impuestoPorRueda = 0.2;

        costoCalculado = (precioBase + (precioBase*impuestoCamion) + (precioBase*impuestoPorRueda*6));

        return costoCalculado;
    }
};
#endif 