// Santos Alejandro Arellano Olarte A01643742
#ifndef MATERIA_H
#define MATERIA_H

#include <string>

class Materia {
protected:
    std::string clave;
    std::string nombre;
    std::string dia;
    int hora;
    int calif;

public:
    Materia(const std::string& clave, const std::string& nombre, const std::string& dia, int hora, int calif);
    Materia(const std::string& clave, const std::string& nombre);
    std::string getDia() const;
    int getHora() const;
    int getCalif() const;
    double getCosto() const;
    std::string toString() const;
};

#endif
