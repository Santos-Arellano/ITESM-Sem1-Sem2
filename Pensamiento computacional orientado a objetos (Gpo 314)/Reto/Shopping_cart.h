#ifndef SHOPPING_CART_H // incluye la definición de la clase ShoppingCart
#define SHOPPING_CART_H // si no está definida, la define
 
#pragma once
#include <string>
#include <iostream>
#include "Seller.h"

class Shopping_cart { // Clase Shopping_cart
private:
	std::string products[100]; //Arreglo de productos
	float cost[100]; //Arreglo de costos
	int quantity[100]; //Arreglo de cantidades
	int index = 0; //indice
public:
	//constructores
	Shopping_cart() : products(), cost(), quantity(){} //constructor por defecto

	//Setters
	void set_cost(float, int); //añade el costo del producto al carrito de compras
	void set_quantity(int, int);  //añade la cantidad del producto al carrito de compras
	void set_products(std::string, int); //añade el nombre del producto al carrito de compras
	void set_index(int); //añade el indice al carrito de compras

	//Getters
	float get_final(); //obtiene el costo final
	std::string get_products(int); //obtiene el nombre del producto
	int get_quantity(int); //obtiene la cantidad del producto
	float get_cost(int); //obtiene el costo del producto
};

//Setters
void Shopping_cart::set_cost(float _cost, int index) { //añade el costo del producto al carrito de compras
	cost[index] = _cost;
}

void Shopping_cart::set_quantity(int _quantity, int index) { //añade la cantidad del producto al carrito de compras
	quantity[index] = _quantity;
}

void Shopping_cart::set_products(std::string _product, int index) { //añade el nombre del producto al carrito de compras
	products[index] = _product;
}

void Shopping_cart::set_index(int _index) { //añade el indice al carrito de compras
	index = _index;
}

//Getters
float Shopping_cart::get_final() { //obtiene el costo final
	float final_cost = 0.0;  //costo final
	for (int i = 0; i < index; i++) { //recorre el arreglo de costos
		final_cost += quantity[i] * cost[i]; //suma el costo de cada producto
	}

	return final_cost; 
}

std::string Shopping_cart::get_products(int index) { //obtiene el nombre del producto
	return products[index]; //retorna el nombre del producto
}

int Shopping_cart::get_quantity(int index) { //obtiene la cantidad del producto
	return quantity[index];
}

float Shopping_cart::get_cost(int index) { //obtiene el costo del producto
	return cost[index]; //retorna el costo del producto
}
#endif 