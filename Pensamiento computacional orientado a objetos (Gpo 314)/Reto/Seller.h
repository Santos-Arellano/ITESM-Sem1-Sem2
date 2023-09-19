#ifndef SELLER_H // Incluye la definición de la clase Seller
#define SELLER_H // si no está definida, la define

#pragma once // Evita que se incluya más de una vez
#include <string>
#include "Users.h"
#include "Product.h"

class Seller : public Users { //Clase Seller hereda de la clase Users
private:
	Product products[100]; //arreglo de productos
	int index = 0; //indice del arreglo de productos
	std::string store_Direccion; //direccion de la tienda
	float earnings; //ganancias de la tienda
	bool license = false; //licencia de la tienda
public:

	//constructores
	Seller(): Users(), store_Direccion(), earnings(), license(){}

	Seller(std::string _Correo, std::string _Contraseña, std::string _name, std::string _Apellido, std::string _store_Direccion, float _earnings, bool _license) :   //constructor con parametros
		Users(_Correo, _Contraseña, _name, _Apellido) 
	{
		store_Direccion = _store_Direccion;
		earnings = _earnings;
		license = _license;
	}

	//Setters
	void set_license(bool);
	void set_earnings(float);
	void set_amount(int, int);

	//Getters 
	float get_earnings(); //obtiene las ganancias de la tienda
	Product get_product(int); //obtiene el producto
	std::string get_name(); //obtiene el nombre del producto

	//Metodos
	void add_product(int, std::string, std::string, float, int); //agrega un producto al arreglo de productos
	void show_products();  //muestra los productos de la tienda
};

//Setters
void Seller::set_license(bool _license) { //setea la licencia de la tienda
	license = _license;
}

void Seller::set_earnings(float _earnings) { //setea las ganancias de la tienda
	earnings += _earnings; //suma las ganancias
}

void Seller::set_amount(int _id, int _amount) { //setea la cantidad de un producto
	for (int i = 0; i < index; i++) { //recorre el arreglo de productos
		if (products[i].get_id() == _id) { //si el id del producto es igual al id del producto que se quiere modificar
			products[i].set_amount(products[i].get_amount() - _amount); //se le resta la cantidad que se quiere comprar
		}
	}
}

//Getters

float Seller::get_earnings() { //obtiene las ganancias de la tienda
	return earnings;
}

Product Seller::get_product(int _id) { //obtiene el producto
	Product p; //crea un producto
	for (int i = 0; i < index; i++) { //recorre el arreglo de productos 
		if (products[i].get_id() == _id) { //si el id del producto es igual al id del producto que se quiere obtener
			return products[i]; //retorna el producto
		}
	}
	return p;
}

std::string Seller::get_name() { //obtiene el nombre del producto
	return name;
}

//Metodos

void Seller::add_product(int _id, std::string _category, std::string _name, float _price, int _amount) { //agrega un producto al arreglo de productos
	Product p(_id, _category, _name, _price, _amount); //crea un producto
	products[index] = p;  //agrega el producto al arreglo de productos
	index += 1; //aumenta el indice
}

void Seller::show_products() { //muestra los productos de la tienda
	for (int i = 0; i < index; i++) { //recorre el arreglo de productos
		std::cout << "ID: " << products[i].get_id() << " Producto: " << products[i].get_name() <<  //muestra el id y el nombre del producto
			" Cantidad: " << products[i].get_amount() << " Precio: " << products[i].get_price() << "\n"; //muestra la cantidad y el precio del producto
	}
}
#endif //es el final de la definición de la clase Seller