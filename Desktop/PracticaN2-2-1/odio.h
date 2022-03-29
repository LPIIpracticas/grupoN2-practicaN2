

#pragma once

#include <string>

using namespace std;
#include "fecha.h"
class Odio
{
    string *razon;
    string quienoQue;
    int grado;
    fecha fechaInicio;
    fecha fechaFin;
    int nroRazones;
public:
    void inicio();
    void final();
    void agredir();
    void ignorar();
    void despreciar();
    void detenerAgresion();
};
