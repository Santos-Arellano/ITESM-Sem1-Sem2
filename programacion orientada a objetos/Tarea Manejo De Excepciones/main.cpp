#include "MyException.h"
#include <iostream>


void metodoD() {
   bool errorEx= true;
   if (errorEx) {
         throw MyException("Error en metodo D");
   }
}

void metodoC() {
    metodoD();
}


void metodoB() {
   metodoC();
}

void metodoA() {
    metodoB();
}


int main() {
    try {
    cout << " Iniciando ejecucion " << endl;
    metodoA();
    cout << " exito en la finalizacion " << endl;
}catch(MyException& ex){
    cout<<" Ocurrrio un erro inesperado, Intenta despues " << endl;
    cout << ex.what() << endl; //Imprime el mensaje de la excepcion que se arrojo
}
    return 0;
}
