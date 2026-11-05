#include <stdio.h>
#include <string>
#include <iostream>
#include <random>


class sensor 
{
    public: 
    std::string nombre; 
    std::string unidad; 
    float valor; 
    float minimo;
    float maximo; 
    int timeout; 

};


int main()
{
    sensor sen_temp; 

    sen_temp.nombre = "Sensor de temperatura";
    sen_temp.unidad = "°C";
    sen_temp.valor = 130; 
    sen_temp.minimo = -60;
    sen_temp.maximo = 340;
    sen_temp.timeout = 400; 


    std::cout<<sen_temp.nombre <<std::endl; 
     


    return 1;
}