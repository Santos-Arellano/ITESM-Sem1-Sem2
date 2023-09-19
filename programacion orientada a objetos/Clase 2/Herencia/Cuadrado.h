#ifndef CUADRADO_H
#define CUADRADO_H
#include "Rectangulo.h"

class Cuadrado : public Rectangulo {
public:
   // Constructores
   Cuadrado(double lado);
   Cuadrado();
   void imprimir();

   // Métodos específicos de Cuadrado
   double lado();
   void setLado(double lado);

   void saludar();
   
};


#endif
