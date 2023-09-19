// Santos Alejandro Arellano Olarte A01643742
#include "Materia.h"

Materia::Materia(const std::string& clave, const std::string& nombre, const std::string& dia, int hora, int calif)
    : clave(clave), nombre(nombre), dia(dia), hora(hora), calif(calif) {
    if (hora < 7 || hora > 19) {
        this->hora = 7;
    }
    if (calif < 1 || calif > 100) {
        this->calif = 1;
    }
}

Materia::Materia(const std::string& clave, const std::string& nombre) : Materia(clave, nombre, "Lunes", 7, 1) {}

std::string Materia::getDia() const {
    return dia;
}

int Materia::getHora() const {
    return hora;
}

int Materia::getCalif() const {
    return calif;
}

double Materia::getCosto() const {
    return 0.0;
}

std::string Materia::toString() const {
    return "[" + clave + "], " + nombre + ", " + dia + ", " + std::to_string(hora) + ":00, " + std::to_string(calif);
}
