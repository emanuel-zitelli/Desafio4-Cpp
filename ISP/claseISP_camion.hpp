#ifndef CLASEISP_CAMION_HPP
#define CLASEISP_CAMION_HPP

class Camion : public Vehiculo, public iMovil, public iMantenimiento
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

    void mover(double kilometros) override 
    {
        (diesel -= (kilometros/5)); //cada 5 kilometros se pierde 1 litro de nafta
    }

    void cargaCombustible(int litros) override
    {
        setCombustible(litros);
    }

    void setCombustible(int nafta) override
    {
        diesel = nafta;
    }
    

    int getCombustible() override
    {
        return diesel;
    }

protected:

    int diesel = 0;
};
#endif //CLASE_CAMIONETA_HPPC