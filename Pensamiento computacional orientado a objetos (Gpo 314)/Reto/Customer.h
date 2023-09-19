#ifndef CUSTOMER_H // Incluye la definición de la clase Customer
#define CUSTOMER_H

#pragma once // Evita que se incluya más de una vez
#include <string>
#include <iostream>
#include "Users.h"
#include "Credit_card.h"
#include "Shopping_cart.h"

class Customer: public Users{ // Clase Customer
private:
	std::string Direccion; //atributo de la clase Customer
	Credit_card credit_card; //atributo de la clase Customer
	Shopping_cart shopping_cart; //atributo de la clase Customer
	int index = 0; 
public:
	//constructores	
	Customer() : Users(), Direccion(), credit_card() {} 

	Customer(std::string _Correo, std::string _Contraseña, std::string _name, std::string _Apellido, std::string _Direccion,  //constructor con parametros
		std::string _NumeroTarjeta, std::string _cvv, std::string _Expiracion, float _Dinero) :
		Users(_Correo, _Contraseña, _name, _Apellido), Direccion(_Direccion), 
		credit_card(_NumeroTarjeta, _cvv, _Expiracion, _Dinero), shopping_cart() {}

	//Getters
	Shopping_cart get_shopping();
	std::string get_Correo();
	std::string get_Contraseña();

	//Functions
	void add_to_cart(Product, int); //añade un producto al carrito de compras
	void show_shopping(); //muestra el carrito de compras
	float check_out(); //muestra el carrito de compras y devuelve el total a pagar
};

//Getters
Shopping_cart Customer::get_shopping() { //obtiene el carrito de compras
	return shopping_cart; //retorna el carrito de compras
}

std::string Customer::get_Correo() { //obtiene el correo del usuario
	return Correo;
}

std::string Customer::get_Contraseña() { //obtiene la contraseña del usuario
	return Contraseña; 
}

//Functions
void Customer::add_to_cart(Product product, int _quantity) { //añade un producto al carrito de compras
	if (_quantity <= product.get_amount() && product.get_amount() > 0) { //si la cantidad es menor o igual a la cantidad de productos en stock y la cantidad de productos en stock es mayor a 0
		shopping_cart.set_products(product.get_name(), index); //añade el nombre del producto al carrito de compras
		shopping_cart.set_cost(product.get_price(), index); //añade el precio del producto al carrito de compras
		shopping_cart.set_quantity(_quantity, index); //añade la cantidad del producto al carrito de compras
		index += 1; //aumenta el indice
		shopping_cart.set_index(index); //añade el indice al carrito de compras
	}
	else {
		std::cout << "No hay productos disponibles"; //si no hay productos disponibles
	}
}

void Customer::show_shopping() { //muestra el carrito de compras
	for (int i = 0; i < index; i++) { //recorre el carrito de compras
		std::cout << "Producto: " << shopping_cart.get_products(i) << " Cantidad: "
			<< shopping_cart.get_quantity(i) << " Precio: " << shopping_cart.get_cost(i) << "\n"; //muestra el producto, la cantidad y el precio
	}
	std::cout << "Total: " << shopping_cart.get_final() << "\n"; //muestra el total
}

float Customer::check_out() { //muestra el carrito de compras y devuelve el total a pagar
	float total = shopping_cart.get_final(); //obtiene el total
	credit_card.set_Dinero(credit_card.get_Dinero() - total); //resta el total al dinero de la tarjeta de credito
	return total; 
}

#endif