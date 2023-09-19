#include <iostream>
 
using namespace std;
 
int main()
{
    int largo = 0;
    cout << "Dame la catidad de numeros: \n";
    cin >> largo;
    int par = 0, impar = 0;
    int numeros[largo];
    int pares[largo];
    int impares[largo];
 
    cout << "\nIntroducir datos:" << endl;
    for (int i = 0; i < largo; i++)
    {
        cout << "(" << i + 1 << "/largo): ";
        cin >> numeros[i];
 
        if (numeros[i] % 2 == 0)
            pares[par++] = numeros[i];
        else
            impares[impar++] = numeros[i];
    }
 
    cout << "\nNumeros Pares: ";
    for (int i = 0; i < par; i++)
        cout << pares[i] << " ";
 
    cout << "\nNumeros Impares: ";
    for (int i = 0; i < impar; i++)
        cout << impares[i] << " ";
 
    cout << endl;
 
    return 0;
}