#ifndef HABITACION_SUITE_H
#define HABITACION_SUITE_H

#include "Habitacion.h"

class HabitacionSuite : public Habitacion {
public:
    // Constructor de la HabitacionSuite
    // Parametros:
    //   - numero: número de la habitación
    HabitacionSuite(int numero);

    // Devuelve una representación en forma de cadena de la habitación suite.
    // Retorna:
    //   - Una cadena que representa la habitación suite.
    std::string toString() const override;

    // Devuelve la capacidad máxima de la habitación suite.
    // Retorna:
    //   - La capacidad máxima de la habitación suite.
    int capacidadMaxima() const override;

    // Calcula la tarifa total de la habitación suite.
    // Retorna:
    //   - La tarifa total de la habitación suite.
    double calcularTarifa() const override;
};

#endif
