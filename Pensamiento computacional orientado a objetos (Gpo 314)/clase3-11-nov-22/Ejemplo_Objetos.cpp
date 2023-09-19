#import <iostream>
#import <stdlib.h>
#import <string.h>

using namespace std;

class persona {
    private:
    int edad;
    string nombre;
    public:
    persona(int, string); //constructor
    void correr ();
    void leer();
};
persona::persona(int age, string name) { //inicializacion de valores mediante el constructor
    edad = age;
    nombre = name;
}
void persona::leer(){
    cout << "Soy " << nombre << " y me gusta leer "<< endl;
}
void persona::correr(){
    cout << "Soy " << nombre << " y  estoy corriendo un maraton "<<  " y tengo  "<<  edad<< " años"<< endl;
}
int main() {
    persona p1=persona(35, "Diego");
    persona p2(24, "Ely");
    p1.leer();
    p2.correr();
    return 0;
}