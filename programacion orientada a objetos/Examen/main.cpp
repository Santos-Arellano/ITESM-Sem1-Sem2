// Santos Alejandro Arellano Olarte A01643742

#include <iostream>
#include "AlumnoBeca.h"
#include "MateriaAcademica.h"

int main() {
    AlumnoBeca alumno("Santos", "Arellano", "A01643742", "Ingeniería en Sistemas", 0.5);
    alumno.agregarMateria(new MateriaAcademica("WA1000", "Cocina", "Lunes", 7, 90, 3));
    alumno.agregarMateria(new MateriaAcademica("TC1029", "Python", "Lunes", 9, 95, 4));
    alumno.agregarMateria(new MateriaAcademica("TC1033", "POO1", "Martes", 9, 80, 5));

    std::cout << "Costo total de las materias: " << alumno.getCostoTotal() << std::endl;

    return 0;
}

//cd "/Users/santosarellanoolarte/Library/CloudStorage/OneDrive-InstitutoTecnologicoydeEstudiosSuperioresdeMonterrey/ITESM GDL/Segundo semestre/programacion orientada a objetos/Examen/" && g++ main.cpp Materia.cpp MateriaAcademica.cpp Alumno.cpp AlumnoBeca.cpp -o main && ./main
