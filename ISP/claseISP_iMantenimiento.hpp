#ifndef CLASEISP_IMANTENIMIENTO_HPP
#define CLASEISP_IMANTENIMIENTO_HPP

class iMantenimiento
{
public:
    //metodo implementado directamente en la clase
    virtual void cargaCombustible(int litros) = 0;
    virtual void setCombustible(int nafta) = 0;
    virtual int getCombustible() = 0;
    
};

#endif 