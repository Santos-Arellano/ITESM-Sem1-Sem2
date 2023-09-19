//2022-11-05 13:19:41
/*numeroImpar. Función que lea un número impar por teclado. Si el usuario no introduce un número 
impar, debe repetirse el proceso hasta que lo introduzca correctamente. */

#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
float numero(int numero); 
{
    int numero;
    cout << "Introduzca un numero : ";
    cin >> numero;
    while (numero % 2 == 0)
    {
        cout << "Introduzca un numero : ";
        cin >> numero;
    }
    cout << "El numero es impar";
    return 0;
}
}