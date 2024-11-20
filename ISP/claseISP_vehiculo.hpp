#ifndef CLASEISP_VEHICULO_HPP
#define CLASEISP_VEHICULO_HPP

class Vehiculo
{
public:

    Vehiculo(const std::string& marca, const std::string& modelo)
    : marca(marca), modelo(modelo) {} //constructor de vehiculos

    virtual double calcularCostos(double precioBase) = 0; //extiende las funcionalidades de vehiculo en sus hijas, sin modificar la estructura de vehiculo
    
    //getters

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
    

    double costoCalculado;

};
#endif