#include "Figura.h"
#include "Rectangulo.h"
#include "Cuadrado.h"
#include "Caja.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Vector de figuras (punteros) para almacenar figuras de distintos tipos (polimorfismo) 
    vector<Figura*> figuras;
    figuras.push_back(new Rectangulo());
    figuras.push_back(new Rectangulo(5.0, 7.0));
    figuras.push_back(new Cuadrado());
    figuras.push_back(new Cuadrado(8.0));
    figuras.push_back(new Caja());
    figuras.push_back(new Caja(3.0, 4.0, 6.0));

    // Imprimir todas las figuras
    for (int i = 0; i < figuras.size(); i++) {
        // Imprimir la figura
        figuras[i]->imprimir();
        // Imprimir el perímetro, área y volumen de la figura
        cout << "Perímetro: " << figuras[i]->perimetro() << endl;
        cout << "Área: " << figuras[i]->area() << endl;
        cout << "Volumen: " << figuras[i]->volumen() << endl;

        // Imprimir el saludo de la figura si es un cuadrado 
        if (Cuadrado* c = dynamic_cast<Cuadrado*>(figuras[i])) {
            c->saludar();
        }
        cout << endl;
    }



    return 0;
}



/*
    Figura fig1;
    fig1.imprimir();
    cout << "Perímetro: " << fig1.perimetro() << endl;
    cout << "Área: " << fig1.area() << endl;
    cout << "Volumen: " << fig1.volumen() << endl;
    cout << endl;

    Rectangulo rec1;
    rec1.imprimir();
    cout << "Perímetro: " << rec1.perimetro() << endl;
    cout << "Área: " << rec1.area() << endl;
    cout << "Volumen: " << rec1.volumen() << endl;

    Rectangulo rec2(5.0, 7.0);
    rec2.imprimir();
    cout << "Perímetro: " << rec2.perimetro() << endl;
    cout << "Área: " << rec2.area() << endl;
    cout << "Volumen: " << rec2.volumen() << endl;
    cout << endl;

    Cuadrado cuad1(4.0);
    cuad1.imprimir();
    cout << "Perímetro: " << cuad1.perimetro() << endl;
    cout << "Área: " << cuad1.area() << endl;
    cout << "Volumen: " << cuad1.volumen() << endl;

    Cuadrado cuad2(8.0);
    cuad2.imprimir();
    cout << "Perímetro: " << cuad2.perimetro() << endl;
    cout << "Área: " << cuad2.area() << endl;
    cout << "Volumen: " << cuad2.volumen() << endl;

    Caja caja1(4.0, 4.0, 4.0);
    caja1.imprimir();
    cout << "Perímetro: " << caja1.perimetro() << endl;
    cout << "Área: " << caja1.area() << endl;
    cout << "Volumen: " << caja1.volumen() << endl;
*/


//g++ -std=c++11 main.cpp Rectangulo.cpp Cuadrado.cpp Caja.cpp -o main

//  ./main

//g++ -std=c++11 *.c