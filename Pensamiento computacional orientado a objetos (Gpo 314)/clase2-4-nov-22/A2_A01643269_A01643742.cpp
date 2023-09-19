/*Arturo Ramos Martínez, Santos Arellano Olarte*/
#include <iostream>
#include <cstdlib>
#include <math.h>
#include <cmath>

using namespace std;

/*
Pséudocodigo
SubProceso OPERANUMEROS()
cout<<"Introduce dos numeros\n"
cin>>a
cin>>b
cout<<"Elige una opcion \nSuma: S\nResta: R\nMultiplicación: M\n"
string respuesta
cin>>respuesta
Mientras respuesta != S && respuesta != R && respuesta != M
cout<<"Error Introduce un valor valido\n"
cin>>respuesta
FinMientras
Si  (respuesta==S)
resultado=a+b
cout<<"La respuesta es: "<<resultado
SiNo Si  (respuesta==R)
resultado=a-b
cout<<"El resultado es: "<<resultado
SiNo Si  (respuesta==M)
resultado=a*b
cout<<"El resultado es: "<<resultado
FinSi
FinSi
FinSubProceso
*/

int operaNumeros(){
    cout<<"Introduce dos numeros\n";
    int a;
    int b;
    int resultado;
    cin>>a;
    cin>>b;
    cout<<"Elige una opcion \nSuma: S\nResta: R\nMultiplicacion: M\n";
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

/*
Pséudocodigo
SubProceso NUMEROIMPAR()
cout << "Introduzca un numero impar : "
cin >> numero
Mientras  numero % 2 == 0
cout << "Introduzca un numero impar : "
cin >> numero
FinMientras
cout << "El numero es "<<numero<<" impar"
FinSubProceso
*/

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

/*
Pséudocodigo
SubProceso SUMAPARES()
Para  int i=0 Hasta 10 Con Paso 1
Si  (i%2==0)
suma=suma+i
FinSi
FinPara
cout<<"El resultado es: "<<suma
FinSubProceso
*/

int mediaAritmetica(){
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
    media = (suma+0.0) / numero;
    cout << "La media aritmetica es: " << media;
    return 0;
}

/*
Pséudocodigo
SubProceso MEDIAARITMETICA()
cout << "Introduzca cuantos numeros quiere introducir: "
cin >> numero
Mientras  contador < numero
cout << "Introduzca un numero: "
cin >> numero
suma = suma + numero
contador=contador+1
FinMientras
media = suma+0.0 / numero
cout << "La media aritmetica es: " << media
FinSubProceso
*/

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
    cout<<"Muy bien, acertaste el valor magico "<<i<<" en "<<intentos<<"intentos ";
    return 0;
}

/*
Pséudocodigo
SubProceso NUMEROMAGICO()
cout<<"Adivina entre un numero del 1 al 100"<<endl
cout<<"Prueba con un numero 1-100"<<endl
cin>>num_Usuario
Si  (num_Usuario==i)
cout<<"Eres un genio, adivinaste a la primera"<<endl
SiNo
Mientras num_Usuario != i
Si  (num_Usuario>i)
cout<<"MENOS"<<endl
intentos=intentos+1
cin>>num_Usuario
SiNo
cout<<"MAS"<<endl
intentos=intentos+1
cin>>num_Usuario
FinSi
FinMientras
FinSi
cout<<"Muy bien, acertaste el valor magico "<<i<<" en "<<"intentos "<<intentos
FinSubProceso
*/

float conversion_Celsius_Farenheit(){
    float celsius, farenheit;
    int numero, incremento;
    cout << "Introduzca el valor inicial en Celsius: ";
    cin >> celsius;
    cout << "Introduzca el numero de conversiones que se haran: ";
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

/*
Pséudocodigo
SubProceso CONVERVARIABLERESERVADAON_CELVARIABLERESERVADAUS_FARENHEIT()
cout << "Introduzca el valor inicial en CelvariableReservadaus: "
cin >> celvariableReservadaus
cout << "Introduzca el numero de convervariableReservadaones que se haran: "
cin >> numero
cout << "Introduzca el incremento entre los valores CelvariableReservadaus: "
cin >> incremento
cout <<  "\tConvervariableReservadaon de grados CelvariableReservadaus a Farenheit " << endl
cout <<  "CELvariableReservadaUS\t\tFARENHEIT" << endl
Para  int i = 0 Hasta numero Con Paso 1
farenheit = celvariableReservadaus * 9 / 5 + 32
cout <<celvariableReservadaus<< "  \t \t   " << farenheit<< endl
celvariableReservadaus = celvariableReservadaus + incremento
FinPara
FinSubProceso
SubProceso SERIE_ARITMETICA()
Para  int i=0 Hasta n Con Paso 1
suma=suma+a+(n-1)*d
cout<<"Termino "<<i+1<<" es "<<suma<<endl
FinPara
cout<<"Valor total de la serie: "<<suma
FinSubProceso
*/

int serie_Aritmetica(){
    int a=1;
    int d=3;
    int n=25;
    int suma=0;
    for (int i=0;i<n;i++){
        suma=suma+(a+(n-i)*d);
        cout<<"Termino "<<i+1<<" es "<<suma<<endl;
    }
    cout<<"Valor total de la serie: "<<suma;
    return 0;
}

/*
Pséudoocodigo
SubProceso SERIE_ARITMETICA()
Para  int i=0 Hasta n Con Paso 1
suma=suma+a+(n-1)*d
cout<<"Termino "<<i+1<<" es "<<suma<<endl
FinPara
cout<<"Valor total de la serie: "<<suma
FinSubProceso
*/

float mediasGeometricaArmonica(){
        int contador=0;
        float N, producto = 1.0;
    cout<<"Ingrese los elementos:\n";
    cin>>N;
    while(N!=0){
    producto=producto*N;
    contador=contador+1;
    cin>>N;
}
 
    cout << "\nLa media geometrica es: " << pow(producto,((1+0.0)/contador)) << endl;
    cout<<((1+0.0)/contador);
    cout<<(producto);

int contadorDos=0;
float s=0,ma,n;
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

/*
Pséodocodigo
SubProceso MEDIASGEOMETRICAARMONICA()
cout<<"Ingrese los elementos:\n"
cin>>N
Mientras N!=0
producto=producto*N
contador=contador+1
cin>>N
FinMientras
cout << "\nLa media geometrica es: " << powproducto,((1+0.0)/contador) << endl
cout<<"Ingrese los elementos:\n"
cin>>n
Mientras n!=0
contadorDos=contadorDos+1
s=s+1+0.0/n
cin>>n
FinMientras
ma=contadorDos+0.0/s
//haciendo toda la operacion de media armonica
cout<<"La Media armonica es "<<ma<<endl
//imprimiendo el resultado
FinSubProceso
*/

int main(){
    string continuar="s";
    while (continuar=="s"){
        cout<<"Menu de opciones"<<endl;
        cout<<"Operacion entre numeros (teclea 1)\nPrograma que valida que le des un numero impar (teclea 2)\nResultado de sumar los numeros enteros entre 0 y 100 (teclea 3)\nPrograma que calcula la media aritmetica (teclea 4)\nPrograma que te ayuda a adivinar un numero entre 1 y 100 (teclea 5)\nConvertor de celsius a farenheit (teclea 6)\nPrograma que te muestra el resultado de una sumatoria de una serie aritmetica a+(a+(n-1)d) (teclea 7)\nPrograma que calcula la media geometrica y armonica (teclea 8)\nSalir (Teclea 'n')\n";
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



