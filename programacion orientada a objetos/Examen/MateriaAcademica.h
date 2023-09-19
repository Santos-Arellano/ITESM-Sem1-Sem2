// Santos Alejandro Arellano Olarte A01643742
#ifndef MATERIAACADEMICA_H
#define MATERIAACADEMICA_H

#include "Materia.h"

class MateriaAcademica : public Materia {
private:
    int unidadesAcademicas;
    static const double costoUdAcademica;

public:
    MateriaAcademica(const std::string& clave, const std::string& nombre, const std::string& dia, int hora, int calif, int unidadesAcademicas);
    MateriaAcademica(const std::string& clave, const std::string& nombre, int unidadesAcademicas);
    double getCosto() const;
};

#endif
