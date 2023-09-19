#include <iostream>
#include <string.h>
using namespace std;

class Empleado{    // Clase base
    private:
        string nombre;
        float sueldo;
        string nivel;
        int dia;
        int mes;
    public: 
        Empleado(string, float, string, int, int); //Constructor
        string getNombre(); //Metodo para obtener el nombre
        float getSueldo();
        string getNivel();
        int getDia();
        int getMes();
        void setNombre();
        void setSueldo();
        void setNivel();
        void setDia();
        void setMes();
        void promoverEmpleado();
};
class Fecha{ //Clase Fecha
    private:
        int dia;
        int mes;
    public:
        Fecha(int, int); //Constructor
        int getDia();
        int getMes();
        void setDia();
        void setMes();
};
Empleado::Empleado(string _nombre, float _sueldo, string _nivel, int _dia, int _mes){ //Constructor
    nombre = _nombre;
    sueldo = _sueldo;
    nivel = _nivel;
    dia = _dia;
    mes = _mes;
};
string Empleado::getNombre(){ //Metodo para obtener el nombre
    return nombre;
};
float Empleado::getSueldo(){
    return sueldo;
};
string Empleado::getNivel(){
    return nivel;
};
int Empleado::getDia(){
    return dia+mes;
};
int Empleado::getMes(){
    return mes;
};
void Empleado::setNombre(){
    cout<<"Nombre: "<<nombre<<"\t";
};
void Empleado::setSueldo(){
    cout<<"Sueldo: "<<sueldo<<"\t";
};
void Empleado::setNivel(){
    cout<<"Nivel: "<<nivel<<"\t";
};
void Empleado::setDia(){
    cout<<"Dia de nacimiento: "<<dia<<"\t";
};
void Empleado::setMes(){
    cout<<"Mes de nacimiento: "<<mes<<endl;
};
void Empleado::promoverEmpleado(){ //Metodo para promover al empleado
    if(nivel == "A"){
        nivel = "B";
        sueldo = sueldo + 0.05*sueldo;
    }
    else if(nivel == "B"){
        nivel = "C";
        sueldo = sueldo + 0.05*sueldo;
    }
    else if(nivel == "C"){
        nivel = "D";
        sueldo = sueldo + 0.075*sueldo;
    }
    cout<<"El empleado "<<nombre<<" ha sido promovido a nivel "<<nivel<<" con un sueldo de "<<sueldo<<endl; 
};
int main(){ //Funcion principal
    Empleado emp1("Pepe", 10000.0, "A", 19, 03);
    Empleado emp2("Rocio",12000.0, "B", 01, 01);
    emp1.setNombre();
    emp1.setSueldo();
    emp1.setNivel();
    emp1.setDia();
    emp1.setMes();
    emp1.getNombre();
    emp1.getSueldo();
    emp1.getNivel();
    emp1.getDia();
    emp1.getMes();
    emp1.promoverEmpleado();

    emp2.setNombre();
    emp2.setSueldo();
    emp2.setNivel();
    emp2.setDia();
    emp2.setMes();
    emp2.getNombre();
    emp2.getSueldo();
    emp2.getNivel();
    emp2.getDia();
    emp2.getMes();
    emp2.promoverEmpleado();
    return 0;
}