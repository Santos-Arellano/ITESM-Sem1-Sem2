#ifndef HABITACION_DELUXE_H
#define HABITACION_DELUXE_H

#include "Habitacion.h"

class HabitacionDeluxe : public Habitacion {
public:
    HabitacionDeluxe(int numero);
    // Constructor de la HabitacionDeluxe.
    // Inicializa la habitación deluxe con el número de habitación proporcionado y una tarifa base de 0.0.

    std::string toString() const override;
    // Devuelve una representación en forma de cadena de la habitación deluxe.
    // La cadena contiene el número de habitación, el nombre del huésped, la tarifa base, el crédito y los cargos de la habitación deluxe.
    // Retorna:
    //   - Una cadena que representa la habitación deluxe.

    int capacidadMaxima() const override;
    // Devuelve la capacidad máxima de la habitación deluxe.
    // Retorna:
    //   - La capacidad máxima de la habitación deluxe.

    double calcularTarifa() const override;
    // Calcula la tarifa total de la habitación deluxe.
    // La tarifa total se obtiene multiplicando la tarifa base por 1.1.
    // Retorna:
    //   - La tarifa total de la habitación deluxe.
};

#endif
