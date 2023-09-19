#include "Rectangular.h"
#include "Polar.h"
#include <iostream>
#include <math.h>

using namespace std;

// Constructor con parámetros
Rectangular::Rectangular(double x, double y) {
    this->x = x;
    this->y = y;
}

// Constructor por defecto
Rectangular::Rectangular() {
    this->x = 0.0;
    this->y = 0.0;
}

// Métodos de acceso a los atributos
double Rectangular::getX() {
    return this->x;
}

double Rectangular::getY() {
    return this->y;
}

// Sobrecarga de operadores para sumar dos números complejos
Rectangular Rectangular::Suma(Rectangular a) {
    return Rectangular(this->x + a.x, this->y + a.y);
}

// Sobrecarga del operador de división (/) para dividir dos números complejos
Rectangular Rectangular::operator*(Rectangular a) {
    return (this->toPolar() * a.toPolar()).toRectangular();
}

// Sobrecarga del operador de división (/) para dividir dos números complejos
Rectangular Rectangular::operator/(Rectangular a) {
    return (this->toPolar() / a.toPolar()).toRectangular();
}



// Método para convertir el número complejo a polar
Polar Rectangular::toPolar() {
    double r = sqrt(this->x * this->x + this->y * this->y);
    double a = atan2(this->y, this->x);
    return Polar(r, a);
}

ostream& operator<<(ostream& os, const Rectangular& rec) {
    os << "(" << rec.x << ", " << rec.y << ")";
    return os;
}

// Sobrecarga del operador de suma (+) para sumar dos números complejos
Rectangular Rectangular::operator+(Rectangular a) {
    return Rectangular(this->x + a.x, this->y + a.y);
}

// Suma de coordenada polar y rectangular
Rectangular Rectangular::operator+(Polar p) {
    // Si se suma un número polar con un número rectangular
    return *this + p.toRectangular();
}

// Sobrecarga del operador de resta (-) para restar dos números complejos
Rectangular Rectangular::operator-(Rectangular a) {
    return Rectangular(this->x - a.x, this->y - a.y);
}

// Método para convertir el número complejo a string
string Rectangular::toString() {
    return "(" + to_string(this->x) + ", " + to_string(this->y) + ")";
}
