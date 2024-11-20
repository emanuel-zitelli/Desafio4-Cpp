#ifndef CLASEDIP_IVEHICULOBASE_HPP
#define CLASEDIP_IVEHICULOBASE_HPP

class iVehiculoBase
{
public:
    virtual double calcularCostos(double precioBase) = 0; //extiende las funcionalidades de vehiculo en sus hijas, sin modificar la estructura de vehiculo

    virtual std::string getMarca() = 0;
    virtual std::string getModelo() = 0;
    virtual double getCosto() = 0;
    

};
#endif