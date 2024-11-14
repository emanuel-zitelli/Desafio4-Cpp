#ifndef CLASEOCP_VEHICULO_HPP
#define CLASEOCP_VEHICULO_HPP

class Vehiculo
{
public:

    Vehiculo(const std::string& marca, const std::string& modelo, const int year, bool seguroAlDia, int accidentesRegistrados)
    : marca(marca), modelo(modelo), year(year), seguroAlDia(seguroAlDia), accidentesRegistrados(accidentesRegistrados) {} //constructor de vehiculos

    void mostrarInfo() const
    {

    }
    void pedirInfo(double km)
    {

    }
    

protected: 

    std::string marca;
    std::string modelo;
    int year;
    bool seguroAlDia;
    int accidentesRegistrados;

};
#endif