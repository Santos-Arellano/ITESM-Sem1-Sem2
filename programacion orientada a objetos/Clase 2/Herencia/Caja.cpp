#include "Caja.h"
#include <iostream>

using namespace std;

// Constructor con parámetros


Caja::Caja(double largo, double ancho, double alto) : Rectangulo(largo, ancho) {
    this->alto = alto;
}

// Constructor predeterminado
Caja::Caja() : Caja(2.0, 3.0, 4.0) {
  
}

double Caja::perimetro() {
    return 8.0 * this->alto + 4.0 * this->largo + 2.0 * this->ancho;
}

double Caja::area() {
    return 2.0 * (Rectangulo::area() + this->largo * this->alto + this->ancho * this->alto);
}

double Caja::volumen() {
    return Rectangulo::area() * this->alto;
}

void Caja::imprimir() {
    cout << "Soy una caja con largo " << this->largo << ", ancho " << this->ancho << ", y alto " << this->alto << endl;
}
