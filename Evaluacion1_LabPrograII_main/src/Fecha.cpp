#include "Fecha.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

Fecha::Fecha(int d, int m, int a){
    this->dia = d;
    this->mes = m;
    this->anio = a;
}
void Fecha::mostrarFecha(){
            cout << this->dia << "/" << this->mes << "/" << this->anio;
        }
Fecha::~Fecha()
{
    //dtor
}
