//2022-11-05 13:21:08
/*mediaAritmetica. Función que pida al usuario cuantos números quiere introducir. Luego lea todos los 
números y realice una media aritmética. */



#include <iostream>
using namespace std;
int main(void)

{
    int media_aritmerica( int numero);
    int numero, suma = 0, contador = 0;
    float media;
    cout << "Introduzca cuantos numeros quiere introducir: ";
    cin >> numero;
    while (contador < numero)
    {
        int numero;
        cout << "Introduzca un numero: ";
        cin >> numero;
        suma = suma + numero;
        contador++;
    }
    media = suma / numero;
    cout << "La media aritmetica es: " << media;
    return 0;
}
