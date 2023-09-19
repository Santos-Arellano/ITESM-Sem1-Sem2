#ifndef CAJA_H
#define CAJA_H

#include "Rectangulo.h"

class Caja : public Rectangulo {
private:
    double alto;OK a ver un rapidísimo

public:
    // Constructores
    Caja();
    Caja(double largo, double ancho, double alto);
    double perimetro();
    double area();
    double volumen();
    void imprimir();
};

#endif
