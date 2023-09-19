#include "Alumno.h"
#include "MateriaAcademica.h"

Alumno::Alumno(int matricula, const std::string& nombre) : matricula(matricula), nombre(nombre) {}

bool Alumno::agregarMateria(Materia* materia) {
    for (const auto& m : horario) {
        if (m->getDia() == materia->getDia() && m->getHora() == materia->getHora()) {
            return false;
        }
    }
    horario.push_back(materia);
    return true;
}

double Alumno::pagoColegiatura() const {
    double total = 0.0;
    for (const auto& materia : horario) {
        total += materia->getCosto();
    }
    return total;
}

double Alumno::promedioAcademico() const {
    double sum = 0.0;
    int count = 0;
    for (const auto& materia : horario) {
        if (dynamic_cast<MateriaAcademica*>(materia) != nullptr) {
            sum += materia->getCalif();
            count++;
        }
    }
    return count > 0 ? sum / count : 0.0;
}

std::ostream& operator<<(std::ostream& out, const Alumno& alumno) {
    out << alumno.matricula << ", " << alumno.nombre << std::endl;
    for (const auto& materia : alumno.horario) {
        out << materia->toString() << std::endl;
    }
    out << "Pago de colegiatura $" << alumno.pagoColegiatura() << std::endl;
    out << "Promedio academico " << alumno.promedioAcademico() << std::endl;
    return out;
}
