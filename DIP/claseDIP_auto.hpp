#ifndef CLASEDIP_AUTO_HPP
#define CLASEDIP_AUTO_HPP

class Auto : public flotaControl, public iMovil, public iMantenimiento
{
public: 

    Auto(const std::string& marca, const std::string& modelo) 
    : flotaControl(marca, modelo) {};

    double calcularCostos(double precioBase) override
    {
        double impuestoAutos = 0.2; //porcentajes
        double impuestoPorRueda = 0.05;
        costoCalculado = (precioBase + (precioBase*impuestoAutos) + (precioBase*impuestoPorRueda*4));

        return costoCalculado;
    }

    void mover(double kilometros) override 
    {
        (litrosNafta -= (kilometros/10)); //cada 10 kilometros se pierde 1 litro de nafta
    }

    void cargaCombustible(int litros) override
    {
        setCombustible(litros);
    }

    void setCombustible(int nafta) override
    {
        litrosNafta = nafta;
    }
    

    int getCombustible() override
    {
        return litrosNafta;
    }

protected:

    int litrosNafta = 0;
    
};
#endif 