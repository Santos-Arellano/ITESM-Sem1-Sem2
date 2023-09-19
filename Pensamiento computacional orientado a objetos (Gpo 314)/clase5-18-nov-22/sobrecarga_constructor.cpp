#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

class Tiempo {
    private:
int horas,minutos,segundos; public:
Tiempo (int,int,int); 
Tiempo (int);
void muestraTiempo();
};
//constructor con 3 argumentos
Tiempo::Tiempo(int h, int m, int s) { //inicializacion de valores mediante el constructor
    horas = h;
    minutos = m;
    segundos = s;
}
//constructor con 1 argumentos
Tiempo::Tiempo(int tiempoSeg){
    horas=tiempoSeg/3600;
     tiempoSeg%=3600;
      minutos=tiempoSeg/60; 
      segundos=tiempoSeg%60;
}
void Tiempo::muestraTiempo(){
    cout << "Son las " << horas << ":" << minutos << ":" << segundos << endl;
}
int main(){
    Tiempo t1(9,35,50);
     t1.muestraTiempo();

     Tiempo t2(15650);
      t2.muestraTiempo();
       return 0;
}