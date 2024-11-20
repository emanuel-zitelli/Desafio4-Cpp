#ifndef CLASEDIP_REMOLQUE_HPP
#define CLASEDIP_REMOLQUE_HPP

class Remolque : public flotaControl, public iMovil
{
public:
    Remolque(const std::string& marca, const std::string& modelo) 
    : flotaControl(marca, modelo) {};

    double calcularCostos(double precioBase) override
    {
        double impuestoRemolque = 0.5; //porcentajes
        double impuestoTraslado = 0.5;

        costoCalculado = (precioBase + (precioBase*impuestoRemolque) + (precioBase*impuestoTraslado));

        return costoCalculado;
    }

    void mover(double kilometros) override 
    {
        kilometrosMovidos+=kilometros;
    }

protected:
    double kilometrosMovidos;
};
#endif 