#ifndef HABITACION_JUNIOR_H
#define HABITACION_JUNIOR_H

#include "Habitacion.h"

class HabitacionJunior : public Habitacion {
public:
    // Constructor de la clase HabitacionJunior.
    // Recibe el número de habitación y establece la tarifa base correspondiente.
    HabitacionJunior(int numero);

    // Devuelve una representación en forma de cadena de la habitación junior.
    std::string toString() const override;

    // Devuelve la capacidad máxima de la habitación junior.
    int capacidadMaxima() const override;

    // Calcula la tarifa total de la habitación junior.
    double calcularTarifa() const override;
};

#endif
