#include "Habitacion.h"

Habitacion::Habitacion(int numero, double tarifaBase)
    : numero(numero), tarifaBase(tarifaBase), credito(0.0), cargos(0.0), ocupada(false), adultos(0), infantes(0) {
    // Constructor de la clase Habitacion.
    // Inicializa los atributos con los valores proporcionados.
    // Por defecto, la habitación no está ocupada y no tiene huésped.
}

Habitacion::~Habitacion() {
    // Destructor de la clase Habitacion.
}

int Habitacion::getNumero() const {
    // Getter para obtener el número de la habitación.
    return numero;
}

double Habitacion::getTarifaBase() const {
    // Getter para obtener la tarifa base de la habitación.
    return tarifaBase;
}

double Habitacion::getCredito() const {
    // Getter para obtener el crédito de la habitación.
    return credito;
}

double Habitacion::getCargos() const {
    // Getter para obtener los cargos de la habitación.
    return cargos;
}

bool Habitacion::isOcupada() const {
    // Comprueba si la habitación está ocupada.
    return ocupada;
}

bool Habitacion::checkin(const std::string& nombre, int adultos, int infantes, double credito) {
    // Realiza el check-in en la habitación con los datos proporcionados.
    // Verifica que la habitación no esté ocupada y que la cantidad de adultos e infantes no supere la capacidad máxima.
    if (!ocupada && adultos + infantes <= capacidadMaxima()) {
        this->huesped = nombre;
        this->adultos = adultos;
        this->infantes = infantes;
        this->credito = credito;
        ocupada = true;
        return true;
    }
    return false;
}

bool Habitacion::checkout() {
    // Realiza el check-out de la habitación.
    // Verifica que la habitación esté ocupada y realiza la liberación de los atributos relacionados.
    if (ocupada) {
        ocupada = false;
        huesped.clear();
        adultos = 0;
        infantes = 0;
        return true;
    }
    return false;
}

bool Habitacion::realizarCargo(double cantidad) {
    // Realiza un cargo a la habitación.
    // Verifica que la habitación esté ocupada y que la cantidad no supere el crédito disponible.
    if (ocupada && cantidad <= credito) {
        cargos += cantidad;
        credito -= cantidad;
        return true;
    }
    return false;
}

double Habitacion::calcularTarifa() const {
    // Calcula la tarifa total de la habitación.
    return tarifaBase;
}
