#include <iostream> 
#include "Seller.h"
#include "Customer.h"

using namespace std;

Seller sellers[100]; //un array de vendedores con 100 posiciones maximo  
int index_sellers = 0; //un indice para saber cuantos vendedores hay en el array

Customer customers[100]; //un array de clientes con 100 posiciones maximo 
int index_customers = 0; //un indice para saber cuantos clientes hay en el array

int customer_id = -1; //un id para saber que cliente esta comprando

// Sirve para agregar un cliente a la variable customers[]
void add_customer(string Correo, string Contraseña, string name, //funcion para agregar un cliente
	string Apellido, string Direccion, string NumeroTarjeta, string cvv, string Expiracion, float Dinero) {  
	Customer c(Correo, Contraseña, name, Apellido, Direccion, NumeroTarjeta, cvv, Expiracion, Dinero);
	customers[index_customers] = c; //agrega el cliente al array
	index_customers += 1; //aumenta el indice para saber cuantos clientes hay en el array 
}

// Sirve para registrarse como cliente
void sign_in() { //funcion para 1registrarse como cliente 
	int num = 0; //variable para saber si el correo ya esta registrado
	string Correo, Contraseña, name, Apellido, Direccion, NumeroTarjeta, cvv, Expiracion; //variables para guardar los datos del cliente
	float Dinero; // Dinero en la tarjeta de credito
	

	cout << "Correo: " << "\n";
	cin >> Correo; 
	cout << "Contraseña: " << "\n";
	cin >> Contraseña;
	cout << "Nombre: " << "\n";
	cin >> name;
	cout << "Apellido: " << "\n";
	cin >> Apellido;
	cout << "Dirección: " << "\n";
	cin >> Direccion;
	cout << "Numero de tarjeta de credito: " << "\n";
	cin >> NumeroTarjeta;
	cout << "cvv: " << "\n";
	cin >> cvv;
	cout << "Expiración: " << "\n";
	cin >> Expiracion;
	cout << "Dinero en la cuenta: " << "\n";
	cin >> Dinero;

	add_customer(Correo, Contraseña, name, Apellido, Direccion, NumeroTarjeta, cvv, Expiracion, Dinero); //agrega el cliente al array

	cout << "Te has registrado!" << "\n\n"; 
}

// Sirve para imprimir todos los productos por vendedor
void print_products() {  //`funcion para imprimir todos los productos por vendedor
	for (int i = 0; i < index_sellers; i++) { //recorre todos los vendedores
		cout << sellers[i].get_name() << "\n"; //imprime el nombre del vendedor
		sellers[i].show_products(); //imprime los productos del vendedor
		cout << "\n";
	}
}

int main() { 

	// Cliente predeterminado para pruebas Correo: admin@gmail.com contraseña: admin

	int num = 0; //variable para saber si el correo ya esta registrado

	Seller seller_1("apple@gmail.com", "Apple123", "Apple", "", "Ohio", 0.0, true);  //vendedor predeterminado para mostrar

	sellers[index_sellers] = seller_1; //agrega el vendedor al array
	sellers[index_sellers].add_product(1, "electronicos", "Mac Mini", 17999, 23); //agrega un producto al vendedor
	sellers[index_sellers].add_product(2, "electronicos", "Iphone 14 pro", 23999, 15); //agrega un producto al vendedor

	index_sellers += 1;

	Seller seller_2("BestBuy@gmail.com", "BestBuy123", "BestBuy", "", "California", 0.0, true); //vendedor predeterminado para mostrar

	sellers[index_sellers] = seller_2;
	sellers[index_sellers].add_product(3, "electronicos", "Apple watch Ultra", 9999, 30); //agrega un producto al vendedor
	sellers[index_sellers].add_product(4, "electronicos", "Airpods pro 2", 5999, 38); //agrega un producto al vendedor

	index_sellers += 1; //aumenta el indice para saber cuantos vendedores hay en el array

	while (num != 6) { //mientras el usuario no quiera salir del programa
		cout << "(1) Registrarse " << "\n";  
		cout << "(2) Ingresar " << "\n";
		cout << "(3) Ver productos " << "\n";
		cout << "(4) Agregar al carrito " << "\n";
		cout << "(5) Ver carrito" << "\n";
		cout << "(9) Cerrar sesion" << "\n";
		cin >> num;

		switch(num) { //dependiendo de la opcion que elija el usuario
			// Registrarse
			case 1: {
				sign_in(); //llama a la funcion sign_in()
				break;
				
			}
			// Ingresar
			case 2: {
				string Correo;
				string Contraseña;

				if (index_customers == 0) { //si no hay clientes registrados 
					cout << "No se encuentra nadie registrado!" << "\n\n";
					break;
				}

				cout << "Proporciona tu Correo" << "\n";
				cin >> Correo;
				cout << "Proporciona tu contraseña: " << "\n";
				cin >> Contraseña;

				for (int i = 0; i < index_customers; i++) { //recorre el array de clientes
					if (customers[i].get_Correo() == Correo) {
						if (customers[i].get_Contraseña() == Contraseña) {
							customers[i].set_login(true);
							customer_id = i;
							cout << "Has iniciado sesion!" << "\n\n";
						}
						else {
							cout << "Contraseña incorrecta!" << "\n\n";
						}
					}
				}
				break;
			}
			// Ver productos
			case 3: {
				print_products(); //llama a la funcion print_products()
				break;
			}
			// Agregar al carrito
			case 4: {
				if (!customers[customer_id].get_login()) { //si el cliente no ha iniciado sesion
					cout << "Debes de iniciar sesion!" << "\n\n";
					break;
				}
				int id = 0;
				int quantity = 0;
				string name;

				print_products(); //llama a la funcion print_products()

				cout << "Proporciona el nombre del vendedor: " << "\n";
				cin >> name;

				for (int i = 0; i < index_sellers; i++) { //recorre el array de vendedores
					if (name == sellers[i].get_name()) {
						cout << "Proporciona el ID del producto a comprar: " << "\n";
						cin >> id;
						cout << "Porporciona la cantidad del producto a comprar: " << "\n";
						cin >> quantity;

						customers[customer_id].add_to_cart(sellers[i].get_product(id), quantity); //agrega el producto al carrito del cliente
						sellers[i].set_amount(id, quantity);
					}
				}
				break;
			}
			// Ver carrito
			case 5: {
				if (customers[customer_id].get_login()) { //si el cliente ha iniciado sesion
					customers[customer_id].show_shopping(); //llama a la funcion show_shopping()
				}
				break;
			}
			// Cerrar sesion
			case 9: {
				customers[customer_id].set_login(false); //cierra la sesion del cliente
				cout << "Has cerrado sesion!" << "\n\n";
				break;
			}
		}
	}
	return 0;
}