#include "Polar.h"
#include <math.h>

// Constructor con parámetros 
Polar::Polar(double r, double a) {
    this->r = r;
    this->a = a;
}

Polar::Polar() {
    this->r = 0.0;
    this->a = 0.0;
}

double Polar::getR() const {
    return this->r;
}

double Polar::getA() const {
    return this->a;
}

Rectangular Polar::toRectangular() {
    double x = this->r * cos(this->a);
    double y = this->r * sin(this->a);
    return Rectangular(x, y);
}

// Sobrecarga del operador de suma (+)
Polar Polar::operator+(Polar p) {
    return (this -> toRectangular() + p.toRectangular()).toPolar();
}


//suma polar con rectangular
Polar Polar::operator+(Rectangular r) {
    return (*this + r.toPolar());
}


// Sobrecarga del operador de resta (-)
Polar Polar::operator-(Polar p) {
    return (this -> toRectangular() - p.toRectangular()).toPolar();
}


// Sobrecarga del operador de multiplicación (*)
Polar Polar::operator*(Polar p) {
    double r = this->r * p.r;
    double a = this->a + p.a;
    return Polar(r, a);
}

// Sobrecarga del operador de división (/)
Polar Polar::operator/(Polar p) {
    double r = this->r / p.r;
    double a = this->a - p.a;
    return Polar(r, a);
}

std::ostream& operator<<(std::ostream& os, const Polar& pol) {
    os << "Polar(r: " << pol.r << ", a: " << pol.a << ")";
    return os;
}
