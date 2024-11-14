#ifndef CLASEOCP_SERVICIOSVEHICULO_HPP
#define CLASEOCP_SERVICIOSVEHICULO_HPP

class Servicios
{
public:

    Servicios(const std::string& marca, const std::string& modelo, const int year, double kilometraje)
    : marca(marca), modelo(modelo), year(year), kilometraje(kilometraje) {} //constructor de vehiculos

    virtual void conducir(double km) = 0; //camioneta
    virtual void volar() = 0; //caza y helicoptero
    
protected: 

    std::string marca;
    std::string modelo;
    int year;
    double kilometraje=0;

};

#endif //CLASEOCP_SERVICIOSVEHICULO_HPP