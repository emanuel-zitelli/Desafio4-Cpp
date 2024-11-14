#ifndef CLASE_SERVICIOSVEHICULO_HPP
#define CLASE_SERVICIOSVEHICULO_HPP

class Servicios
{
public:

    void cargaCombustible()
    {
        int opcion;

        switch (cargado)
        {
            case false:
                std::cout << "Desea cargar el combustible? (0: no | 1: si)";
                std::cin >> opcion;

                if (opcion)
                {
                    std::cout << "Combustible cargado";
                    cargado = true;
                }
                break;

        case true:
            std::cout << "Ya ha cargado el combustible. No puede repetirlo";
            break;
        }
        
    }
    

   
    
protected:

    Vehiculo objeto;
    
    bool cargado=false;
};
#endif //CLASE_SERVICIOSVEHICULO_HPP