#include <iostream>
#include <string>
#include <random>
#pragma once

// Creación de una clase que genere señales de ruido acorde a parametros de entrada
// Personalizados para cada sensor

class simulator
{
    public: 
    int min; 
    int max;
    
    int generar_valor();
    
};
