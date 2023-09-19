#ifndef USERS_H // Incluye la definición de la clase Users
#define USERS_H // si no está definida, la define

#pragma once // Evita que se incluya más de una vez
#include <string> 

class Users
{
protected: //Atributos protegidos
	std::string Correo;  
	std::string Contraseña;
	std::string name;
	std::string Apellido;
	bool login = false; //inicializa el atributo login en false
public:

	//Builders
	Users() : Correo(), Contraseña(), name(), Apellido() {} //constructor por defecto

	Users(std::string _Correo, std::string _Contraseña, std::string _name, std::string _Apellido) { //constructor con parametros
		Correo = _Correo;
		Contraseña = _Contraseña;
		name = _name;
		Apellido = _Apellido;
	}

	 //Setters
	 void set_login(bool); //setea el login

	 //Getters
	 bool get_login(); //obtiene el login
};

//Setters
void Users::set_login(bool _login) { //setea el login
	login = _login;
}

//Getters
bool Users::get_login() {   //obtiene el login
	return login;
}

#endif