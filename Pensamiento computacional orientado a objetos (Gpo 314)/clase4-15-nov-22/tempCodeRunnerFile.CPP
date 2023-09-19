#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

class alumno{
private:   //Atributos
    string nombre;
    int edad;
    string carrera;
    int semestre;
    string matricula;


public:  //Metodos
    alumno();//constructor
    string getMatricula();

    void setEdad(int);
    void setCarrera(string);
    void imprimeAlumno();
    string getNombre();
    int getEdad();
    string getCarrera();
    void setMatricula(string);
    void setNombre(string);   

};
alumno::alumno(){

}
string alumno::getMatricula(){
    return matricula;
}
string alumno::getNombre(){
    return nombre;
}
int alumno::getEdad(){
    return edad;
}
string alumno::getCarrera(){
    return carrera;
}
void alumno::setMatricula(string mat){
    matricula=mat;
}
void alumno::setNombre(string nom){
    nombre=nom;
}
void alumno::setEdad(int ed){
    edad=ed;
}
void alumno::setCarrera(string carr){
    carrera=carr;
}
void alumno::imprimeAlumno(){
    cout<<"Matricula: "<<matricula<<endl;
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
    cout<<"Carrera: "<<carrera<<endl;
}


int main (){
    string mat;
    string nom;
    int ed;
    string carr;
    alumno a1;
    cout << "Ingrese la matricula: ";
    cin >> mat;
    a1.setMatricula(mat);
    cout << "Ingrese el nombre: ";
    cin >> nom;
    a1.setNombre(nom);
    cout << "Ingrese la edad: ";
    cin >> ed;
    a1.setEdad(ed);
    cout << "Ingrese la carrera: ";
    cin >> carr;
    a1.setCarrera(carr);
    int opcion,num;
    
   float numero,cubo; 
   
   cout<<"\t Menú"<<endl;
    cout<<"1) Mostrar sus datos"<<endl;
    
    cout<<"2) Sumarle 1 a su edad"<<endl;
    
    cout<<"3) Salir"<<endl;
    
    cout<<"Teclea para la opción deseada"; cin>>opcion;
    
    switch(opcion){
        
        case 1: 
        a1.imprimeAlumno();      
        break;
        
        case 2:
        cout<<"Teclea tu edad: "; cin>>num;
        cout<<"Tu edad es: "<<num+1<<endl;
        break;
        
        case 3:
        cout<<"Gracias por usar el programa"<<endl;
        break;
        
        default:
        cout<<"Opción no válida"<<endl;
        break;

    }
    return 0;
}
    