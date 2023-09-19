// Santos Alejandro Arellano Olarte A01643742
#include "MateriaAcademica.h"

MateriaAcademica::MateriaAcademica(const std::string& clave, const std::string& nombre, const std::string& dia, int hora, int calif, int unidadesAcademicas)
    : Materia(clave, nombre, dia, hora, calif), unidadesAcademicas(unidadesAcademicas) {}

MateriaAcademica::MateriaAcademica(const std::string& clave, const std::string& nombre, int unidadesAcademicas)
    : Materia(clave, nombre), unidadesAcademicas(unidadesAcademicas) {}

double MateriaAcademica::getCosto() const {
    return unidadesAcademicas * costoUdAcademica;
}
