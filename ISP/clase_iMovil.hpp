#ifndef CLASE_IMOVIL_HPP
#define CLASE_IMOVIL_HPP

class iMovil
{
public:
    //metodo implementado directamente en la clase
    void mover(double kilometros)
    {
        litrosNafta -= (kilometros/20); //cada 20 kilometros se pierde 1 litro de nafta
    }

    void setNafta(double nafta)
    {
        litrosNafta = nafta;
    }

    

protected:

    double litrosNafta=0;
};

#endif 