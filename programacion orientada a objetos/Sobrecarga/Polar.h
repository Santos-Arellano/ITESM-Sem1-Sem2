#ifndef POLAR_H
#define POLAR_H

#include <iostream>
#include "Rectangular.h"

using namespace std;

class Rectangular; // Declaración anticipada de la clase Rectangular

class Polar {
private:
    double r;
    double a;

public:
    Polar(); // Constructor por defecto (sin parámetros)
    Polar(double r, double a);
    double getR() const;
    double getA() const;

    Rectangular toRectangular();

    // Sobrecarga del operador de suma (+)
    Polar operator+(Polar p);
    Polar operator+(Rectangular r);

    // Sobrecarga del operador de resta (-)
    Polar operator-(Polar p);

    // Sobrecarga del operador de multiplicación (*)
    Polar operator*(Polar p);

    // Sobrecarga del operador de división (/)
    Polar operator/(Polar p);

    // Sobrecarga del operador de salida (<<) para imprimir un número complejo
    friend ostream& operator<<(ostream& os, const Polar& p);
};

#endif
