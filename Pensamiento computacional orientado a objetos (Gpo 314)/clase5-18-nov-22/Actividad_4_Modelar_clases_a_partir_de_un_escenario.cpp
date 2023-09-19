#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

class etiqueta {
    private:
        string nombre;
        int telefono;
        string direccion;
        string horario;
        int peso;
        int dimensiones;
    public:
    etiqueta();
    int getPeso();
    int getDimensiones();

    string getNombre();
     int getTelefono();
     string getDireccion();
    string getHorario();
    void setPeso(int);
    void setDimensiones(int);
    void setNombre(string);
    void setTelefono(int);
     void setDireccion(string);
     void setHorario(string);
     void imprimeEtiqueta();
};

etiqueta::etiqueta(){
    
}
int etiqueta::getPeso(){
    return peso;
}
int etiqueta::getDimensiones(){
    return dimensiones;
}
string etiqueta::getNombre(){
    return nombre;
}
int etiqueta::getTelefono(){
    return telefono;
}
string etiqueta::getDireccion(){
    return direccion;
}
string etiqueta::getHorario(){
    return horario;
}
void etiqueta::setPeso(int pes){
    peso=pes;
}
void etiqueta::setDimensiones(int dim){
    dimensiones=dim;
}
void etiqueta::setNombre(string nom){
    nombre=nom;
}
void etiqueta::setTelefono(int tel){
    telefono=tel;
}
void etiqueta::setDireccion(string dir){
    direccion=dir;
}
void etiqueta::setHorario(string hor){
    horario=hor;
}
void etiqueta::imprimeEtiqueta(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Telefono: "<<telefono<<endl;
    cout<<"Direccion: "<<direccion<<endl;
    cout<<"Horario: "<<horario<<endl;
   cout<<"Peso: "<<peso<<endl;
    cout<<"Dimensiones: "<<dimensiones<<endl;

}

int main(){
    string nombre;
    int telefono;
    string direccion;
    string horario;
    int peso;
    int dimensiones;
    etiqueta e1;
     cout << "Ingrese el nombre: ";
    cin >> nombre;
    e1.setNombre(nombre);
    cout << "Ingrese el telefono: ";
    cin >> telefono;
    e1.setTelefono(telefono);
    cout << "Ingrese la direccion: ";
    cin >> direccion;
        e1.setDireccion(direccion);

    cout << "Ingrese el horario: ";
    cin >> horario;
     e1.setHorario( horario);

    cout << "Ingrese el peso: ";
    cin >> peso;
        e1.setPeso(peso);

    cout << "Ingrese las dimensiones: ";
    cin >> dimensiones;
        e1.setDimensiones(dimensiones);
    e1.imprimeEtiqueta();
    return 0;
}
  
        