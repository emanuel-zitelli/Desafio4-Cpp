#ifndef CLASEOCP_CAMIONETA_HPP
#define CLASEOCP_CAMIONETA_HPP

class Camion : public Vehiculo, public Servicios
{
public:

    Camion(const std::string& marca, const std::string& modelo) 
    : Vehiculo(marca, modelo) {};
    
    virtual double calcularCostos(double precioBase) override
    {
        double impuestoCamion = 0.15; //porcentajes
        double impuestoPorRueda = 0.02;

        return (precioBase*impuestoCamion*impuestoPorRueda*6);
    }

private:
   
};
#endif //CLASE_CAMIONETA_HPPC