#ifndef CLASE_VEHICULO_HPP
#define CLASE_VEHICULO_HPP

class Vehiculo
{
public:

    Vehiculo(const std::string& marca, const std::string& modelo)
    : marca(marca), modelo(modelo) {} //constructor de vehiculos

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

#endif //CLASE_VEHICULO_HPP