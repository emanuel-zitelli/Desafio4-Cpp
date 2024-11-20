#ifndef CLASEDIP_MOTO_HPP
#define CLASEDIP_MOTO_HPP

class Moto : public flotaControl, public iMovil, public iMantenimiento
{
public:
    Moto(const std::string& marca, const std::string& modelo) 
    : flotaControl(marca, modelo) {};

    double calcularCostos(double precioBase) override
    {
        double impuestoMoto = 0.5; //porcentajes
        double impuestoPorRueda = 0.1;

        costoCalculado = (precioBase + (precioBase*impuestoMoto) + (precioBase*impuestoPorRueda*2));

        return costoCalculado;
    }

    void mover(double kilometros) override 
    {
        (queroseno -= (kilometros/20)); //cada 5 kilometros se pierde 1 litro de nafta
    }

    void cargaCombustible(int litros) override
    {
        setCombustible(litros);
    }

    void setCombustible(int nafta) override
    {
        queroseno = nafta;
    }
    

    int getCombustible() override
    {
        return queroseno;
    }

protected:

    int queroseno = 0;
};
#endif 