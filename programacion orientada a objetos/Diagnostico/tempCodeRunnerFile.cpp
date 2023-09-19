private:
    static int numeroHabitacion;
};

int HabitacionSuite::numeroHabitacion = 1;

class HabitacionDeluxe : public Habitacion {
public:
    HabitacionDeluxe()
        : Habitacion(8, 450.0 * 1.5) {}

    std::string toString() const override {
        return "#" + std::to_string(numeroHabitacion) + ", Huesped: " + nombreHuesped + ", Tarifa Base: " +
               std::to_string(tarifaBase) + ", Credito: " + std::to_string(credito) + ", Cargos: " +
               std::to_string(cargos) + ", Habitación Deluxe";
    }

private:
    static int numeroHabitacion;
};

int HabitacionDeluxe::numeroHabitacion = 1;

void crearHotel(std::vector<Habitacion*>& habitaciones) {
    int numJunior, numSuite, numDeluxe;
    std::cout << "Ingrese la cantidad de habitaciones Junior: ";
    std::cin >> numJunior;
    std::cout << "Ingrese la cantidad de habitaciones Suite: ";
    std::cin >> numSuite;
    std::cout << "Ingrese la cantidad de habitaciones Deluxe: ";
    std::cin >> numDeluxe;

    for (int i = 0; i < numJunior; ++i) {
        habitaciones.push_back(new HabitacionJunior());
    }

    for (int i = 0; i < numSuite; ++i) {
        habitaciones.push_back(new HabitacionSuite());
    }

    for (int i = 0; i < numDeluxe; ++i) {
        habitaciones.push_back(new HabitacionDeluxe());
    }

    std::cout << "Hotel creado exitosamente." << std::endl;
}

void hacerCheckin(std::vector<Habitacion*>& habitaciones) {
    std::string nombreHuesped;
    int adultos, infantes;
    double credito;
    int tipoHabitacion;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Ingrese el nombre del cliente: ";
    std::getline(std::cin, nombreHuesped);
    std::cout << "Ingrese la cantidad de adultos: ";
    std::cin >> adultos;
    std::cout << "Ingrese la cantidad de infantes: ";
    std::cin >> infantes;
    std::cout << "Ingrese el crédito: ";
    std::cin >> credito;
    std::cout << "Seleccione el tipo de habitación:" << std::endl;
    std::cout << "1) Habitación Junior" << std::endl;
    std::cout << "2) Habitación Suite" << std::endl;
    std::cout << "3) Habitación Deluxe" << std::endl;
    std::cout << "Ingrese una opción: ";
    std::cin >> tipoHabitacion;

    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Opción inválida. Inténtelo de nuevo." << std::endl;
        return;
    }

    if (tipoHabitacion >= 1 && tipoHabitacion <= 3) {
        Habitacion* habitacion = habitaciones[tipoHabitacion - 1];
        if (habitacion->checkin(nombreHuesped, adultos, infantes, credito)) {
            std::cout << "Check-in exitoso." << std::endl;
        } else {
            std::cout << "No es posible hacer el check-in en esa habitación." << std::endl;
        }
    } else {
        std::cout << "Opción inválida." << std::endl;
    }
}

void hacerCheckout(std::vector<Habitacion*>& habitaciones) {
    int numeroHabitacion;
    std::cout << "Ingrese el número de habitación: ";
    std::cin >> numeroHabitacion;
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Número de habitación inválido. Inténtelo de nuevo." << std::endl;
        return;
    }
    if (numeroHabitacion >= 1 && numeroHabitacion <= habitaciones.size()) {
        Habitacion* habitacion = habitaciones[numeroHabitacion - 1];
        if (habitacion->checkout()) {
            std::cout << "Check-out exitoso." << std::endl;
        } else {
            std::cout << "No es posible hacer el check-out en esa habitación." << std::endl;
        }
    } else {
        std::cout << "Número de habitación inválido." << std::endl;
    }
}

void realizarCargos(std::vector<Habitacion*>& habitaciones) {
    int numeroHabitacion;
    double cantidad;
    std::cout << "Ingrese el número de habitación: ";
    std::cin >> numeroHabitacion;
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Número de habitación inválido. Inténtelo de nuevo." << std::endl;
        return;
    }
    if (numeroHabitacion >= 1 && numeroHabitacion <= habitaciones.size()) {
        Habitacion* habitacion = habitaciones[numeroHabitacion - 1];
        std::cout << "Ingrese la cantidad a cargar: ";
        std::cin >> cantidad;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Cantidad inválida. Inténtelo de nuevo." << std::endl;
            return;
        }
        if (habitacion->realizarCargo(cantidad)) {
            std::cout << "Cargo realizado exitosamente." << std::endl;
        } else {
            std::cout << "No es posible realizar el cargo en esa habitación." << std::endl;
        }
    } else {
        std::cout << "Número de habitación inválido." << std::endl;
    }
}

double calcularIngresosPorTarifas(const std::vector<Habitacion*>& habitaciones) {
    double ingresos = 0.0;
    for (const auto& habitacion : habitaciones) {
        ingresos += habitacion->getTarifaBase();
    }
    return ingresos;
}

void generarReporteOcupacion(const std::vector<Habitacion*>& habitaciones) {
    std::cout << "Reporte de ocupación:" << std::endl;
    for (const auto& habitacion : habitaciones) {
        std::cout << habitacion->toString() << std::endl;
    }
}

int main() {
    std::vector<Habitacion*> habitaciones;
    int opcion;

    do {
        std::cout << "1) Crear Hotel" << std::endl;
        std::cout << "2) Hacer check-in" << std::endl;
        std::cout << "3) Hacer check-out" << std::endl;
        std::cout << "4) Realizar cargos a habitación" << std::endl;
        std::cout << "5) Ingresos por tarifas" << std::endl;
        std::cout << "6) Generar reporte de ocupación" << std::endl;
        std::cout << "7) Salir" << std::endl;
        std::cout << "Ingrese una opción: ";
        std::cin >> opcion;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Opción inválida. Inténtelo de nuevo." << std::endl;
            continue;
        }

        switch (opcion) {
            case 1:
                crearHotel(habitaciones);
                break;
            case 2:
                hacerCheckin(habitaciones);
                break;
            case 3:
                hacerCheckout(habitaciones);
                break;
            case 4:
                realizarCargos(habitaciones);
                break;
            case 5:
                std::cout << "Los ingresos por tarifas son: " << calcularIngresosPorTarifas(habitaciones) << std::endl;
                break;
            case 6:
                generarReporteOcupacion(habitaciones);
                break;
            case 7:
                std::cout << "¡Hasta luego!" << std::endl;
                break;
            default:
                std::cout << "Opción inválida. Inténtelo de nuevo." << std::endl;
        }

        std::cout << std::endl;

    } while (opcion != 7);

    // Liberar memoria
    for (auto& habitacion : habitaciones) {
        delete habitacion;
    }

    return 0;
}