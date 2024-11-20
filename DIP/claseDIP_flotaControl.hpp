#ifndef CLASEDIP_FLOTACONTROL_HPP
#define CLASEDIP_FLOTACONTROL_HPP

class flotaControl : public iVehiculoBase
{
public:

    flotaControl(const std::string& marca, const std::string& modelo)
    : marca(marca), modelo(modelo) {}; //constructor de vehiculos

    virtual double calcularCostos(double precioBase) = 0; //extiende las funcionalidades de vehiculo en sus hijas, sin modificar la estructura de vehiculo
    
    //getters

    std::string getMarca() override
    {
        return marca;
    }

    std::string getModelo() override
    {
        return modelo;
    }

    double getCosto() override
    {
        return costoCalculado;
    }

protected: 

    std::string marca;
    std::string modelo;
    
    double costoCalculado;

};
#endif