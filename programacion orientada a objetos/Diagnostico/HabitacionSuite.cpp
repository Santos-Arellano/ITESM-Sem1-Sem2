#include "HabitacionSuite.h"

HabitacionSuite::HabitacionSuite(int numero) : Habitacion(numero, 450.0) {
    // Constructor de la HabitacionSuite.
    // Inicializa la habitación suite con el número de habitación proporcionado y una tarifa base de 450.0.
}

std::string HabitacionSuite::toString() const {
    // Devuelve una representación en forma de cadena de la habitación suite.
    // La cadena contiene el número de habitación, el nombre del huésped, la tarifa base, el crédito y los cargos de la habitación suite.
    // Retorna:
    //   - Una cadena que representa la habitación suite.
    return "#" + std::to_string(numero) + ", Huesped: " + huesped + ", Tarifa Base: " + std::to_string(tarifaBase) + ", Credito: " + std::to_string(credito) + ", Cargos: " + std::to_string(cargos) + ", Habitación Suite";
}

int HabitacionSuite::capacidadMaxima() const {
    // Devuelve la capacidad máxima de la habitación suite.
    // Retorna:
    //   - La capacidad máxima de la habitación suite.
    return 6;
}

double HabitacionSuite::calcularTarifa() const {
    // Calcula la tarifa total de la habitación suite.
    // La tarifa total se obtiene multiplicando la tarifa base por un factor de 1.3.
    // Retorna:
    //   - La tarifa total de la habitación suite.
    return tarifaBase * 1.3;
}
