// Santos Alejandro Arellano Olarte A01643742

#ifndef ALUMNOBECA_H
#define ALUMNOBECA_H

#include "Alumno.h"

class AlumnoBeca : public Alumno {
private:
    double pBeca;

public:
    AlumnoBeca(int matricula, const std::string& nombre, double pBeca);
};

#endif
