#include "Rectangulo.h"
#include <iostream>

using namespace std;

Rectangulo::Rectangulo(double l, double a) {
   this->largo = l;
   this->ancho = a;
}

Rectangulo::Rectangulo() {
    this->largo = 2.0;
    this->ancho = 3.0;
}

double Rectangulo::perimetro() {
    return 2 * (this->largo + this->ancho);
}

double Rectangulo::area() {
    return this->largo * this->ancho;
}

void Rectangulo::imprimir() {
    cout << "Soy un rectángulo de largo " << largo << " y ancho " << ancho << endl;
}

double Rectangulo::volumen() {
    return 0.0;
}