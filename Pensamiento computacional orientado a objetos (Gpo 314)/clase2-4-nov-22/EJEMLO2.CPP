#import <iostream>

using namespace std;

int main(){
    int arreglo[5];
    //metodo para llenar el arreglo
    for (int i=0;i<5;i++){
        cout>>"Dame el valor de la posicion # "<<i+1<< ":";
        cint>> arreglo[i];

    }
    //Metodo para recorrer el arreglo
    for (int i=0; i<5;i++){
        cout <<"El valor en la posicion # "<<i+1 "es : "<<arreglo[i];
    }


return 0;

}