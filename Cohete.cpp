#include "Cohete.hpp"
#include <stdio.h>
#include <stdlib.h>
#include "Director.hpp"
#include "Torre.hpp"



float depositos[3];
float capacidades[3] = {150000.0, 50000.0, 10000.0};
float combustiblePerdido = 0.0;


void iniciaCohete()
{
    capacidades[0] = 0.0;
    capacidades[1] = 0.0;
    capacidades[2] = 0.0;
  
}


void recibeCombustibleCohete(int e, float c)
{

    depositos[e] = depositos[e] + c;
    combustiblePerdido = rand() % 10;
    c = combustiblePerdido;
}

int EstaDepositoLlenoCohete(int e){
    if(capacidades[e] == depositos[e])
    {
        return 1;
    }

    else
    {
        return 0;
    }
}


void informaCohete()
{
    printf("combustible: ", combustiblePerdido);
}