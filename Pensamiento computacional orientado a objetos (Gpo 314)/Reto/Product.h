#ifndef PRODUCT_H // Incluye la definición de la clase Product
#define PRODUCT_H // si no está definida, la define

#pragma once // Evita que se incluya más de una vez
#include <string> 

class Product { // Clase Product
private:
	int id = 0;
	std::string category = ""; //categoria del producto
	std::string name = ""; //nombre del producto
	float price = 0.0; //precio del producto
	int amount = 0;
public:
	//constructores
	Product() : id(), category(), name(), price(), amount() {} 

	Product(int _id, std::string _category, std::string _name, float _price, int _amount):  //constructor con parametros
		id(_id), category(_category), name(_name), price(_price), amount(_amount){}

	//Setters
	void set_id(int);
	void set_category(std::string); 
	void set_name(std::string);
	void set_price(float);
	void set_amount(int);

	//Getters
	int get_id();
	std::string get_category();
	std::string get_name();
	float get_price();
	int get_amount();
};

//Setters
void Product::set_id(int _id) { //setea el id del producto
	id = _id;
}

void Product::set_category(std::string _category) { //setea la categoria del producto
	category = _category;
}

void Product::set_name(std::string _name) { //setea el nombre del producto
	name = _name;
}

void Product::set_price(float _price) { //setea el precio del producto
	price = _price;
}

void Product::set_amount(int _amount) { //setea la cantidad del producto
	amount = _amount;
}

//Getters

int Product::get_id() { //obtiene el id del producto
	return id;
}

std::string Product::get_category() { //obtiene la categoria del producto
	return category;
}

std::string Product::get_name() { //obtiene el nombre del producto
	return name;
}

float Product::get_price() { //obtiene el precio del producto
	return price;
}

int Product::get_amount() { //obtiene la cantidad del producto
	return amount;
}
#endif 
