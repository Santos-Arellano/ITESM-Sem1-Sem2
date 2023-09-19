#include <iostream>
#include <stdlib.h>
#include <string>
#include "Fraccion.h"
using namespace std;



int main(){
    cout << "Dame la cantidad de fracciones que vas a ingresar: ";
    int n;
    cin >> n;
    Fraccion f[n];
    for(int i=0; i<n; i++){
        cout << "Dame el numerador de la fraccion " << i+1 << ": ";
        int num;
        cin >> num;
        cout << "Dame el denominador de la fraccion " << i+1 << ": ";
        int den;
        cin >> den;
        f[i].setNumerador(num);
        f[i].setDenominador(den);

    }

    Fraccion f3;
    f3=f[0].suma(f[1]);
    f3=f3.simplifica();
    cout << "La suma de las fracciones es: ";
    f3.imprimeFraccion();
    cout << "La fraccion en decimal  " << (float)f3.getNumerador()/f3.getDenominador() << endl;
    f3.imprimeFraccion();
    f3=f[0].resta(f[1]);
    f3=f3.simplifica();
    cout << "La resta de las fracciones es: ";
    f3.imprimeFraccion();
    cout << "La fraccion en decimal  " << (float)f3.getNumerador()/f3.getDenominador() << endl;
    f3.imprimeFraccion();
    
    f3=f[0].multiplicacion(f[1]);
    f3=f3.simplifica();
    cout << "La multiplicacion de las fracciones es: ";
    f3.imprimeFraccion();
    cout << "La fraccion en decimal  " << (float)f3.getNumerador()/f3.getDenominador() << endl;
    f3.imprimeFraccion();
    f3=f[0].division(f[1]);
    f3=f3.simplifica();
    cout << "La division de las fracciones es: ";
    f3.imprimeFraccion();
    cout << "La fraccion en decimal  " << (float)f3.getNumerador()/f3.getDenominador() << endl;
    f3.imprimeFraccion();
    
    cout << "La fraccion en decimal de la suma es: " << (float)f3.getNumerador()/f3.getDenominador() << endl;

    return 0;
}
