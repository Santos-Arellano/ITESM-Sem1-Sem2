#import <iostream>
#import <stdlib.h>
#import <string>

using namespace std;

class rectangulo  {
    private:
    int largo;
    int ancho;
    
    public:
    rectangulo(int, int); //constructor
    void area();
    void perimetro();
};

rectangulo::rectangulo(int l, int a) { //inicializacion de valores mediante el constructor
    largo = l;
    ancho = a;
}
void rectangulo::area(){
    cout << "El area del rectangulo es: " << largo*ancho << endl;
}
void rectangulo::perimetro(){
    cout << "El perimetro del rectangulo es: " << 2*(largo+ancho) << endl;
}
int main () {
    float l,a;
    float l2,a2;
    cout << "Ingrese el largo del rectangulo: ";
    cin >> l;
    cout << "Ingrese el ancho del rectangulo: ";
    cin >> a;
    cout << ".... rectangulo 2.... \n";
    cout << "Ingrese el largo del rectangulo 2: ";
    cin >> l2;
    cout << "Ingrese el ancho del rectangulo 2: ";
    cin >> a2;
    rectangulo r1=rectangulo(l, a);
    rectangulo r2=rectangulo(l2, a2);
    cout << "*****Rectangulo 1 *****  " << endl;
    r1.area();
    r1.perimetro();

cout << "*****Rectangulo 2 ***** " << endl;   
    r2.area();
    r2.perimetro();
    return 0;
}