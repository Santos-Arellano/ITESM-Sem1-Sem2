#include "HabitacionDeluxe.h"

HabitacionDeluxe::HabitacionDeluxe(int numero) : Habitacion(numero, 450.0) {
    // Constructor de la HabitacionDeluxe.
    // Inicializa la habitación deluxe con el número de habitación proporcionado y una tarifa base de 450.0.
    // Los demás atributos se inicializan con sus valores predeterminados.
}

std::string HabitacionDeluxe::toString() const {
    // Devuelve una representación en forma de cadena de la habitación deluxe.
    // La cadena contiene el número de habitación, el nombre del huésped, la tarifa base, el crédito y los cargos de la habitación deluxe.
    // Retorna:
    //   - Una cadena que representa la habitación deluxe.
    return "#" + std::to_string(numero) + ", Huesped: " + huesped + ", Tarifa Base: " + std::to_string(tarifaBase) + ", Credito: " + std::to_string(credito) + ", Cargos: " + std::to_string(cargos) + ", Habitación Deluxe";
}

int HabitacionDeluxe::capacidadMaxima() const {
    // Devuelve la capacidad máxima de la habitación deluxe.
    // Retorna:
    //   - La capacidad máxima de la habitación deluxe.
    return 8;
}

double HabitacionDeluxe::calcularTarifa() const {
    // Calcula la tarifa total de la habitación deluxe.
    // La tarifa total se obtiene multiplicando la tarifa base por 1.5.
    // Retorna:
    //   - La tarifa total de la habitación deluxe.
    return tarifaBase * 1.5;
}
