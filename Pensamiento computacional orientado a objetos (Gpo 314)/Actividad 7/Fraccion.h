#ifndef Fraccion_H // incluye la definición de la clase ShoppingCart
#define Fraccion_H // si no está definida, la define
 
#pragma once
#include <string>
#include <iostream>

class Fraccion { // Clase Fraccion
private:
    int numerador; //numerador
    int denominador; //denominador
public:
    //constructores
    Fraccion() : numerador(0), denominador(0){} //constructor por defecto
    Fraccion(int _numerador, int _denominador) : numerador(_numerador), denominador(_denominador){} //constructor con parametros

    //Setters
    void setNumerador(int); //añade el numerador
    void setDenominador(int); //añade el denominador

    //Getters
    int getNumerador(); //obtiene el numerador
    int getDenominador(); //obtiene el denominador

    //Metodos
    Fraccion suma(Fraccion); //suma dos fracciones
    Fraccion resta(Fraccion); //resta dos fracciones
    Fraccion multiplicacion(Fraccion); //multiplica dos fracciones
    Fraccion division(Fraccion); //divide dos fracciones
    Fraccion simplifica(); //simplifica una fraccion
    void imprimeFraccion(); //imprime una fraccion
};

//Setters
void Fraccion::setNumerador(int _numerador) { //añade el numerador
    numerador = _numerador;
}

void Fraccion::setDenominador(int _denominador) { //añade el denominador
    denominador = _denominador;
}

//Getters
int Fraccion::getNumerador() { //obtiene el numerador
    return numerador;
}

int Fraccion::getDenominador() { //obtiene el denominador
    return denominador;
}

//Metodos
Fraccion Fraccion::suma(Fraccion fraccion) { //suma dos fracciones
    Fraccion resultado; //resultado de la suma
    resultado.setNumerador((numerador * fraccion.getDenominador()) + (fraccion.getNumerador() * denominador)); //suma los numeradores
    resultado.setDenominador(denominador * fraccion.getDenominador()); //multiplica los denominadores
    return resultado; //retorna el resultado
}

Fraccion Fraccion::resta(Fraccion fraccion) { //resta dos fracciones
    Fraccion resultado; //resultado de la resta
    resultado.setNumerador((numerador * fraccion.getDenominador()) - (fraccion.getNumerador() * denominador)); //resta los numeradores
    resultado.setDenominador(denominador * fraccion.getDenominador()); //multiplica los denominadores
    return resultado; //retorna el resultado
}

Fraccion Fraccion::multiplicacion(Fraccion fraccion) { //multiplica dos fracciones
    Fraccion resultado; //resultado de la multiplicacion
    resultado.setNumerador(numerador * fraccion.getNumerador()); //multiplica los numeradores
    resultado.setDenominador(denominador * fraccion.getDenominador()); //multiplica los denominadores
    return resultado; //retorna el resultado
}

Fraccion Fraccion::division(Fraccion fraccion) { //divide dos fracciones
    Fraccion resultado; //resultado de la division
    resultado.setNumerador(numerador * fraccion.getDenominador()); //multiplica el numerador de la primera fraccion por el denominador de la segunda
    resultado.setDenominador(denominador * fraccion.getNumerador()); //multiplica el denominador de la primera fraccion por el numerador de la segunda
    return resultado; //retorna el resultado
}

Fraccion Fraccion::simplifica() { //simplifica una fraccion
    int mcd = 1; //mcd de la fraccion
    int minimo = numerador < denominador ? numerador : denominador; //obtiene el minimo entre el numerador y el denominador
    for (int i = 1; i <= minimo; i++) { //recorre los numeros desde 1 hasta el minimo
        if (numerador % i == 0 && denominador % i == 0) { //si el numerador y el denominador son divisibles entre i
            mcd = i; //el mcd es i
        }
    }
    Fraccion resultado; //resultado de la simplificacion
    resultado.setNumerador(numerador / mcd); //divide el numerador entre el mcd
    resultado.setDenominador(denominador / mcd); //divide el denominador entre el mcd
    return resultado; //retorna el resultado
}

void Fraccion::imprimeFraccion() { //imprime una fraccion
    std::cout << numerador << "/" << denominador << std::endl;




}

#endif




//fraccion.h