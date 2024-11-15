#ifndef CLASEOCP_VEHICULO_HPP
#define CLASEOCP_VEHICULO_HPP

class Vehiculo
{
public:

    Vehiculo(const std::string& marca, const std::string& modelo)
    : marca(marca), modelo(modelo) {} //constructor de vehiculos

    virtual double calcularCostos(double precioBase) = 0; //extiende las funcionalidades de vehiculo en sus hijas, sin modificar la estructura de vehiculo
    //setter
    void setNafta(double nafta)
    {
        litrosNafta = nafta;
    }
    //getters
    double getNafta()
    {
        return litrosNafta;
    }

    std::string getMarca()
    {
        return marca;
    }

    std::string getModelo()
    {
        return modelo;
    }
protected: 

    std::string marca;
    std::string modelo;
    double litrosNafta=0;

};
#endif