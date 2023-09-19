#ifndef RECTANGULO_H
#define RECTANGULO_H

#include "Figura.h"

class Rectangulo : public Figura {
protected:  //Protected para Usar esta clase en Cuadrado
   double largo;
   double ancho;

public:
   // Constructores
   Rectangulo(double largo, double ancho);
   Rectangulo();
   
   double perimetro();
   double area();
   double volumen();
   void imprimir();
};

#endif
