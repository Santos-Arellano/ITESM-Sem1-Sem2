#ifndef RECTANGULAR_H
#define RECTANGULAR_H

#include <string>
#include <iostream>

using namespace std;

class Polar;

class Rectangular {
    private:
        double x, y;

    public:
        // Constructor por defecto
        Rectangular();

        // Constructor con parámetros
        Rectangular(double x, double y);

        // Métodos de acceso a los atributos
        double getX();
        double getY();

        // Sobrecarga de operadores para sumar dos números complejos
        Rectangular Suma(Rectangular a);

        // Método para convertir el número complejo a string
        std::string toString();

        // Sobrecarga del operador de suma (+)
        Rectangular operator+(Rectangular b);

        //suma de coordenada polar y rectangular
        Rectangular operator+(Polar p);

        // Sobrecarga del operador de resta (-)
        Rectangular operator-(Rectangular b);
        
        // Sobrecarga del operador de multiplicación (*)
        Rectangular operator*(Rectangular b);

        // Sobrecarga del operador de división (/)
        Rectangular operator/(Rectangular b);
        

        Polar toPolar();

        // Sobrecarga del operador de salida (<<) para imprimir un número complejo
        friend std::ostream& operator<<(std::ostream& os, const Rectangular& rec);
};

#endif
