#include <iostream>
#include <stdexcept> // Para usar la clase invalid_argument de las excepciones

using namespace std;

double divide(double num, double den) {
    // Si el denominador es 0, arrojar una instancia de invalid_argument y poner como mensaje que el denominador no puede ser 0.
    if (den == 0) {
        throw invalid_argument("El denominador no puede ser 0"); // Arrojar una excepción de tipo invalid_argument
    }
    return num / den;
}

int main() {
    double num, den, res;
    bool datosCorrectos = false; // Variable para controlar si los datos son correctos o no

    while (!datosCorrectos) {
        try {
            // Intentará realizar la división pero si se pasa un valor no numérico como numerador o denominador,
            // o si el denominador es cero, volverá a pedir los datos hasta que sean correctos.
            cin.exceptions(ios::failbit | ios::badbit); // Aquí activamos que si hay una excepción con el cin, la arroje

            cout << "Escribe el numerador: ";
            cin >> num;
            cout << "Escribe el denominador: ";
            cin >> den;

            res = divide(num, den);
            cout << "La division de " << num << "/" << den << " es: " << res << endl;

            datosCorrectos = true; // Si no hay excepciones, los datos son correctos y se sale del bucle
        } catch (const invalid_argument& ex) {
            // Capturar la excepción de tipo invalid_argument, que ocurre cuando se pasa 0 como denominador.
            cout << ex.what() << endl; // Mostrar el mensaje de error correspondiente.
        } catch (const ios_base::failure& ex) {
            // Capturar la excepción de tipo ios_base::failure, que ocurre cuando se introduce un valor no numérico en el cin.
            cin.clear(); // Restablecer el estado del cin para seguir leyendo correctamente.
            cin.ignore(1000, '\n'); // Ignorar los caracteres que puedan quedar en el buffer.
            cout << "El numerador y denominador deben ser numéricos" << endl; // Mostrar un mensaje de error.
        }
    }

    return 0;
}
