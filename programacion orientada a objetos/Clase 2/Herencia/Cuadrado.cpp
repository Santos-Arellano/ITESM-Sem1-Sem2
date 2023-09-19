#include "Cuadrado.h"
#include <iostream>

using namespace std;

Cuadrado::Cuadrado(double lado) {
    this->largo = this->ancho = lado;
}

Cuadrado::Cuadrado() : Cuadrado(9.0) {}

void Cuadrado::imprimir() {
    cout << "Soy un cuadrado de lado " << this->ancho << endl;
}

void Cuadrado::saludar() {
    cout << "Buenas tardes, soy el cuadrado con el lado " << this->ancho << endl;
}
