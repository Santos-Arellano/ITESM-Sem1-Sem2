#include "Rectangular.h"
#include <iostream>
#include "Polar.h"

using namespace std;

int main() {
    // se crean los objetos de tipo Rectangular
    Rectangular rec1(2.0, 3.0);
    Rectangular rec2(1.0, 4.0);
    Rectangular rec3(5.0, 6.0);

    // se crea un objeto de tipo Rectangular que recibe la suma de los objetos rec1 y rec2
    Rectangular rec4 = rec1 + rec2;

    // se crea un objeto de tipo Rectangular que recibe la suma de los objetos rec1, rec2 y rec3
    Rectangular rec5 = rec1 + rec2 + rec3;

    // se imprimen los valores de los objetos creados 
    cout << "Rectangular 1: " << rec1.toString() << endl;
    cout << "Rectangular 2: " << rec2.toString() << endl;
    cout << "Rectangular 3: " << rec3.toString() << endl;
    cout << "Rectangular 4 (rec1 + rec2): " << rec4.toString() << endl;
    cout << "Rectangular 5 (rec1 + rec2 + rec3): " << rec5.toString() << endl;

    Polar pol1(4, 30);
    Polar pol2(3, 45);

    cout << "Coordenada Polar 1: " << pol1 << endl;
    cout << "Coordenada Polar 2: " << pol2 << endl;
    cout << "El resultado de la multiplicación es: " << (pol1 * pol2) << endl;

    return 0;
}


// g++ main.cpp Rectangular.cpp Polar.cpp -o main

// ./main