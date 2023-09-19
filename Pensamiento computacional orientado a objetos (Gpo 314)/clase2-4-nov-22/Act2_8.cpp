//2022-11-05 18:06:04
/*mediasGeometricaArmonica. Además del promedio aritmético de un conjunto de números, se puede 
calcular  una  media  geométrica  y  una  media  armónica.  Este  es  otra  medida  que  permite  calcular  
aspectos de rendimiento. La media geométrica de un conjunto de n números x1, x2, ..., xn se define 
como: */
#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;
float media_geometrica( float numero);
int main(void)
{
    int N, numero, producto = 1;
 
    cout << "\nN: "; cin >> N;
 
    cout << endl;
    for (int i = 1; i <= N; i++)
    {
        cout << "Numero " << i << ": ";
        cin >> numero;
 
        producto *= numero;
    }
 
    cout << "\nLa media geometrica es: " << sqrt(producto) << endl;

float media_armonica( float numero);
{
int n,i;
float x[100],s=0,ma;
cout<<"Ingrese numero de elementos:";
cin>>n;
cout<<"Ingrese los elementos:\n";
for(i=1;i<=n;i++){//ingresando los numeros para la media armonica 
cout<<"Numero "<<i<<" : ";
cin>>x[i];//almacenando cada numero en una posicion del array
}
for(i=1;i<=n;i++){//realizando las sumas del denominador
s=s+1/x[i];
}
ma=1/(s/n);//haciendo toda la operacion de media armonica
cout<<"La Media armonica es "<<ma<<endl;//imprimiendo el resultado
system("pause");
return 0;
}