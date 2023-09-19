#ifndef CREDIT_CARD_H // Incluye la definición de la clase Credit_card
#define CREDIT_CARD_H  // si no está definida, la define

#pragma once // Evita que se incluya más de una vez
#include <string> 

class Credit_card { // Clase Credit_card
private:
	std::string NumeroTarjeta; 
	std::string cvv;
	std::string Expiracion;
	float Dinero;

public:
	//constructores 
	Credit_card() : NumeroTarjeta(), cvv(), Expiracion(), Dinero(){}  

	Credit_card(std::string _NumeroTarjeta, std::string _cvv, std::string _Expiracion, float _Dinero) : //constructor con parametros
		NumeroTarjeta(_NumeroTarjeta), cvv(_cvv), Expiracion(_Expiracion), Dinero(_Dinero){} //inicializa los atributos

	//Setters
	void set_Dinero(float); //setea el dinero de la tarjeta

	//Getters
	float get_Dinero(); //obtiene el dinero de la tarjeta
};

//Setters
void Credit_card::set_Dinero(float _Dinero) { //setea el dinero de la tarjeta
	Dinero = _Dinero;
}

//Getters
float Credit_card::get_Dinero() { //obtiene el dinero de la tarjeta
	return Dinero;
}
#endif