#ifndef HABITACION_H
#define HABITACION_H

#include <string>

// Clase base abstracta para representar una habitación
class Habitacion {
public:
    // Constructor que inicializa los atributos de la habitación
    Habitacion(int numero, double tarifaBase);

    // Destructor virtual para permitir la destrucción adecuada de las clases derivadas
    virtual ~Habitacion();

    // Getter para obtener el número de la habitación
    int getNumero() const;

    // Getter para obtener la tarifa base de la habitación
    double getTarifaBase() const;

    // Getter para obtener el crédito de la habitación
    double getCredito() const;

    // Getter para obtener los cargos de la habitación
    double getCargos() const;

    // Comprueba si la habitación está ocupada
    bool isOcupada() const;

    // Método virtual puro que devuelve una representación en forma de cadena de la habitación
    virtual std::string toString() const = 0;

    // Método virtual puro que devuelve la capacidad máxima de la habitación
    virtual int capacidadMaxima() const = 0;

    // Método virtual para realizar el check-in en la habitación
    virtual bool checkin(const std::string& nombre, int adultos, int infantes, double credito);

    // Método virtual para realizar el check-out de la habitación
    virtual bool checkout();

    // Método virtual para realizar un cargo a la habitación
    virtual bool realizarCargo(double cantidad);

    // Método virtual para calcular la tarifa total de la habitación
    virtual double calcularTarifa() const;

protected:
    int numero;               // Número de la habitación
    double tarifaBase;        // Tarifa base de la habitación
    double credito;           // Crédito disponible en la habitación
    double cargos;            // Cargos realizados en la habitación
    bool ocupada;             // Indica si la habitación está ocupada
    std::string huesped;      // Nombre del huésped actual
    int adultos;              // Cantidad de adultos en la habitación
    int infantes;             // Cantidad de infantes en la habitación
};

#endif
