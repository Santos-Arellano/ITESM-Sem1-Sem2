// Santos Alejandro Arellano Olarte A01643742
#ifndef ALUMNO_H
#define ALUMNO_H

#include <iostream>
#include <vector>
#include "Materia.h"

class Alumno {
private:
    int matricula;
    std::string nombre;
    std::vector<Materia*> horario;

public:
    Alumno(int matricula, const std::string& nombre);
    bool agregarMateria(Materia* materia);
    double pagoColegiatura() const;
    double promedioAcademico() const;
    friend std::ostream& operator<<(std::ostream& out, const Alumno& alumno);
};

#endif
