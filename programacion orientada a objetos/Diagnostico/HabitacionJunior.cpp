#include "HabitacionJunior.h"

HabitacionJunior::HabitacionJunior(int numero) : Habitacion(numero, 450.0) {
    // Llama al constructor de la clase base (Habitacion) para establecer el número de habitación y la tarifa base.
    // La tarifa base para una habitación junior es de 450.0.
}

std::string HabitacionJunior::toString() const {
    // Devuelve una representación en forma de cadena de la habitación junior.
    return "#" + std::to_string(numero) + ", Huesped: " + huesped + ", Tarifa Base: " + std::to_string(tarifaBase) + ", Credito: " + std::to_string(credito) + ", Cargos: " + std::to_string(cargos) + ", Habitación Junior";
}

int HabitacionJunior::capacidadMaxima() const {
    // Devuelve la capacidad máxima de la habitación junior.
    // La capacidad máxima para una habitación junior es de 4 personas.
    return 4;
}

double HabitacionJunior::calcularTarifa() const {
    // Calcula la tarifa total de la habitación junior.
    // La tarifa se calcula multiplicando la tarifa base por un factor de 1.2.
    return tarifaBase * 1.2;
}
