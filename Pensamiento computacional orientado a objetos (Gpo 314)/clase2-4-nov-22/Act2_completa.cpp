//2022-11-05 22:45:03
/*Arturo Ramos Martínez, Santos Arellano Olarte*/
#include <iostream>
#include <cstdlib>
#include <math.h>
#include <cmath>
using namespace std;

int operaNumeros(){
    cout<<"Introduce dos números\n";
    int a;
    int b;
    int resultado;
    cin>>a;
    cin>>b;
    cout<<"Elige una opcion \nSuma: S\nResta: R\nMultiplicación: M\n";
    string respuesta;
    cin>>respuesta;
    while(respuesta != "S" && respuesta != "R" && respuesta != "M"){
        cout<<"Error (Introduce un valor valido)\n";
        cin>>respuesta;
    }
    if (respuesta=="S"){
        resultado=a+b;
        cout<<"La respuesta es: "<<resultado;
    }
    else if (respuesta=="R"){
        resultado=a-b;
        cout<<"El resultado es: "<<resultado;
    }
    else if (respuesta=="M"){
        resultado=a*b;
        cout<<"El resultado es: "<<resultado;
    }
    return resultado;
}

int numeroImpar(){
    int numero;
    cout << "Introduzca un numero impar : ";
    cin >> numero;
    while (numero % 2 == 0)
    {
        cout << "Introduzca un numero impar : ";
        cin >> numero;
    }
    cout << "El numero es "<<numero<<" impar";
    return 0;
}


int sumaPares(){
    int suma=0;
    for (int i=0;i<=100;i++){
        if (i%2==0){
            suma=suma+i;
        }
    }
    cout<<"El resultado es: "<<suma;
    return suma;
}

int mediaAritmetica(){
    int numero, suma = 0, contador = 0;
    float media;
    cout << "Introduzca cuantos números quiere introducir: ";
    cin >> numero;
    while (contador < numero)
    {
        int numero;
        cout << "Introduzca un numero: ";
        cin >> numero;
        suma = suma + numero;
        contador++;
    }
    media = (suma+0.0) / numero;
    cout << "La media aritmetica es: " << media;
    return 0;
}

int numeroMagico(){
    int num_Usuario;
    int intentos=0;
    cout<<"Adivina entre un numero del 1 al 100"<<endl;
    int i = rand() % 100 + 1;
    cout<<"Prueba con un numero (1-100)"<<endl;
    cin>>num_Usuario;
    if (num_Usuario==i){
        cout<<"Eres un genio, adivinaste a la primera"<<endl;
    }
    else{
    while(num_Usuario != i){
        if (num_Usuario>i){
            cout<<"MENOS"<<endl;
            intentos=intentos+1;
            cin>>num_Usuario;
        }
        else{
            cout<<"MAS"<<endl;
            intentos=intentos+1;
            cin>>num_Usuario;
        }

    }
    }
    cout<<"Muy bien, acertaste el valor magico "<<i<<" en "<<"intentos "<<intentos;
    return 0;
}

float conversion_Celsius_Farenheit(){
    float celsius, farenheit;
    int numero, incremento;
    cout << "Introduzca el valor inicial en Celsius: ";
    cin >> celsius;
    cout << "Introduzca el numero de conversiones que se harán: ";
    cin >> numero;
    cout << "Introduzca el incremento entre los valores Celsius: ";
    cin >> incremento;
   cout <<  "\tConversion de grados Celsius a Farenheit " << endl; 
     cout <<  "CELSIUS\t\tFARENHEIT" << endl;
    for (int i = 0; i < numero; i++)
    {
        farenheit = (celsius * 9 / 5) + 32;
    
            cout <<celsius<< "  \t \t   " << farenheit<< endl;
        celsius = celsius + incremento;
    }
    return 0;
} 

int serie_Aritmetica(){
    int a=1;
    int d=3;
    int n=25;
    int suma=0;
    for (int i=0;i<n;i++){
        suma=suma+(a+(n-1)*d);
        cout<<"Termino "<<i+1<<" es "<<suma<<endl;
    }
    cout<<"Valor total de la serie: "<<suma;
    return 0;
}

float mediasGeometricaArmonica(){
        int N, numero, contador=0, producto = 1;
    cout<<"Ingrese los elementos:\n";
    cin>>N;
    while(N!=0){
    producto=producto*N;
    contador=contador+1;
    cin>>N;
}
 
    cout << "\nLa media geometrica es: " << pow(producto,((1+0.0)/contador)) << endl;

int n, contadorDos=0;
float s=0,ma;
cout<<"Ingrese los elementos:\n";
cin>>n;
while(n!=0){
    contadorDos=contadorDos+1;
    s=s+(1+0.0)/n;
    cin>>n;
}

ma=(contadorDos+0.0)/s;//haciendo toda la operacion de media armonica
cout<<"La Media armonica es "<<ma<<endl;//imprimiendo el resultado
return 0;
}

int main(){
    string continuar="s";
    while (continuar=="s"){
        cout<<"Menu de opciones"<<endl;
       cout<<"1.Operacion entre numeros \n2.Programa que valida que le des un numero impar \n3.Resultado de sumar los numeros enteros entre 0 y 100 \n4.Programa que calcula la media aritmetica \n5.Programa que te ayuda a adivinar un numero entre 1 y 100 \n6.Convertor de celsius a farenheit \n7.Programa que te muestra el resultado de una sumatoria de una serie aritmetica a+(a+(n-1)d)n\n8.Programa que calcula la media geometrica y armonica \nSalir (Teclea 'n')\n";
        string resp;
        cin>>resp;
        while(resp != "1" && resp != "2" && resp != "3" && resp != "4" && resp != "5" && resp != "6" && resp != "7" && resp != "8" && resp != "s" && resp != "n"){
        cout<<"Error (Introduce un valor valido)\n";
        cin>>resp;
        }
        if (resp=="1"){
            operaNumeros();
        }
        else if (resp=="2"){
            numeroImpar();
        }
        else if (resp=="3"){
            sumaPares();
        }
        else if (resp=="4"){
            cout<<"El resultado es:"; 
            cout<<mediaAritmetica();
        }
        else if (resp=="5"){
            numeroMagico();
        }
        else if (resp=="6"){
            conversion_Celsius_Farenheit();
        }
        else if (resp=="7"){
            serie_Aritmetica();
        }
        else if (resp=="8"){
            mediasGeometricaArmonica();
        }
        else if (resp=="n"){
            break;
        }
        
        cout<<"\nQuieres continuar (s/n)? ";
        cin>>continuar;
        while(continuar != "s" && continuar != "n"){
            cout<<"Error (Introduce un valor valido(s/n))\n";
            cin>>continuar;  
        }
}
return 0;
}
