#ifndef CLASELSP_VEHICULO_HPP
#define CLASELSP_VEHICULO_HPP

class Vehiculo
{
public:

    Vehiculo(const std::string& marca, const std::string& modelo)
    : marca(marca), modelo(modelo) {} //constructor de vehiculos

    virtual double calcularCostos(double precioBase) = 0; //extiende las funcionalidades de vehiculo en sus hijas, sin modificar la estructura de vehiculo
    
    //metodo implementado directamente en la clase
    void mover(double kilometros)
    {
        litrosNafta -= (kilometros/20); //cada 20 kilometros se pierde 1 litro de nafta
    }

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

    double getCosto() 
    {
        return costoCalculado;
    }
protected: 

    std::string marca;
    std::string modelo;
    double litrosNafta=0;

    double costoCalculado;

};
#endif