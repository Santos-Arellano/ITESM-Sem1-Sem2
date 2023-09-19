//2022-11-05 14:37:56
/*conversionCelsiusFarenheit.  Según  los  estándares  internacionales,  se  manejan  diferentes  unidades  
de medición para manejo de temperaturas. Familiarízate con las más comunes y soluciona el siguiente 
problema.  Se  requiere  convertir  grados  Celsius  a  grados  Farenheit.  El  programa  deberá  solicitar  al  
usuario:
• El valor inicial en Celsius.  
• El número de conversiones que se harán. 
• El incremento entre los valores Celsius. */
//F = (C × 9/5) + 32

#include<iostream>

using namespace std;

int main(void)
{
    float grados( float  celsius, float farenheit,float incremento);
    float celsius, farenheit;
    int numero, incremento;
    cout << "Introduzca el valor inicial en Celsius: ";
    cin >> celsius;
    cout << "Introduzca el numero de conversiones que se haran: ";
    cin >> numero;
    cout << "Introduzca el incremento entre los valores Celsius: ";
    cin >> incremento;
   cout <<  "\tConversión de grados Celsius a Farenheit " << endl; 
     cout <<  "CELSIUS\t\tFARENHEIT" << endl;
    for (int i = 0; i < numero; i++)
    
    {
        farenheit = (celsius * 9 / 5) + 32;
    
            cout <<celsius<< "  \t \t   " << farenheit<< endl;
        celsius = celsius + incremento;
    }
    return 0;
}