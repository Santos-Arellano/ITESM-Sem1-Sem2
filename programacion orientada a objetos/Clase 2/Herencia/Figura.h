#ifndef FIGURA_H
#define FIGURA_H

class Figura {
public:
   // Constructores y destructor virtual (para que se llame al destructor de la clase derivada) 
   virtual double perimetro()= 0;
    virtual double area() = 0;
    virtual double volumen() = 0;
    virtual void imprimir() = 0;
};

#endif
