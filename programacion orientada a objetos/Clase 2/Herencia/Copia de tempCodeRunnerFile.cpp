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
    return 2 * (largo + ancho) + 4 * alto;
}

double Caja::area() {
    return 2 * (largo * ancho + largo * alto + ancho * alto);
}

double Caja::volumen() {
    return largo * ancho * alto;
}

void Caja::imprimir() {
    cout << "Soy una caja de largo " << largo << ", ancho " << ancho << " y alto " << alto << endl;
}
