// Santos Alejandro Arellano Olarte A01643742

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

class Habitacion {
public:
    Habitacion(int capacidadMaxima, double tarifaBase)
        : capacidadMaxima(capacidadMaxima), tarifaBase(tarifaBase) {}

    virtual ~Habitacion() {}

    virtual std::string toString() const = 0;

    // Verifica si la habitación está disponible (sin huésped)
    bool isDisponible() const {
        return nombreHuesped.empty();
    }

    // Realiza el check-in de un huésped en la habitación
    bool checkin(const std::string& nombreHuesped, int adultos, int infantes, double credito) {
        if (isDisponible() && (adultos + infantes) <= capacidadMaxima) {
            this->nombreHuesped = nombreHuesped;
            this->adultos = adultos;
            this->infantes = infantes;
            this->credito = credito;
            return true;
        }
        return false;
    }

    // Realiza el check-out de un huésped de la habitación
    bool checkout() {
        if (!isDisponible()) {
            nombreHuesped.clear();
            adultos = 0;
            infantes = 0;
            credito = 0.0;
            return true;
        }
        return false;
    }

    // Realiza un cargo a la cuenta del huésped
    bool realizarCargo(double cantidad) {
        if (!isDisponible() && cantidad <= credito) {
            credito -= cantidad;
            cargos += cantidad;
            return true;
        }
        return false;
    }

    // Obtiene la tarifa base de la habitación
    double getTarifaBase() const {
        return tarifaBase;
    }

protected:
    std::string nombreHuesped;
    int adultos;
    int infantes;
    double credito;
    double cargos;

protected:
    int capacidadMaxima;
    double tarifaBase;
};

class HabitacionJunior : public Habitacion {
public:
    HabitacionJunior()
        : Habitacion(4, 450.0 * 1.2) {}

    // Devuelve una cadena que representa la habitación Junior
    std::string toString() const override {
        return "#" + std::to_string(numeroHabitacion) + ", Huesped: " + nombreHuesped + ", Tarifa Base: " +
               std::to_string(tarifaBase) + ", Credito: " + std::to_string(credito) + ", Cargos: " +
               std::to_string(cargos) + ", Habitación Junior";
    }

private:
    static int numeroHabitacion;
};

int HabitacionJunior::numeroHabitacion = 1;

class HabitacionSuite : public Habitacion {
public:
    HabitacionSuite()
        : Habitacion(6, 450.0 * 1.3) {}

    // Devuelve una cadena que representa la habitación Suite
    std::string toString() const override {
        return "#" + std::to_string(numeroHabitacion) + ", Huesped: " + nombreHuesped + ", Tarifa Base: " +
               std::to_string(tarifaBase) + ", Credito: " + std::to_string(credito) + ", Cargos: " +
               std::to_string(cargos) + ", Habitación Suite";
    }

private:
    static int numeroHabitacion; // Variable estática para asignar el número de habitación
};

int HabitacionSuite::numeroHabitacion = 1; // Inicializa la variable estática

class HabitacionDeluxe : public Habitacion {
public:
    HabitacionDeluxe()
        : Habitacion(8, 450.0 * 1.5) {} // Llama al constructor de la clase base con los parámetros adecuados

    std::string toString() const override { // Devuelve una cadena que representa la habitación Deluxe
        return "#" + std::to_string(numeroHabitacion) + ", Huesped: " + nombreHuesped + ", Tarifa Base: " + 
               std::to_string(tarifaBase) + ", Credito: " + std::to_string(credito) + ", Cargos: " +
               std::to_string(cargos) + ", Habitación Deluxe";
    }

private:
    static int numeroHabitacion;
};

int HabitacionDeluxe::numeroHabitacion = 1; // Inicializa la variable estática de la clase

void crearHotel(std::vector<Habitacion*>& habitaciones) { // Crea el hotel
    int numJunior, numSuite, numDeluxe;
    std::cout << "Ingrese la cantidad de habitaciones Junior: ";
    std::cin >> numJunior;
    std::cout << "Ingrese la cantidad de habitaciones Suite: ";
    std::cin >> numSuite;
    std::cout << "Ingrese la cantidad de habitaciones Deluxe: ";
    std::cin >> numDeluxe;

    for (int i = 0; i < numJunior; ++i) { // Crea las habitaciones y las agrega al vector
        habitaciones.push_back(new HabitacionJunior());
    }

    for (int i = 0; i < numSuite; ++i) { //
        habitaciones.push_back(new HabitacionSuite());
    }

    for (int i = 0; i < numDeluxe; ++i) {
        habitaciones.push_back(new HabitacionDeluxe());
    }

    std::cout << "Hotel creado exitosamente." << std::endl;
}

void hacerCheckin(std::vector<Habitacion*>& habitaciones) { // Realiza el check-in de un huésped
    std::string nombreHuesped;
    int adultos, infantes;
    double credito;
    int tipoHabitacion;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Limpia el buffer de entrada 

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

    if (std::cin.fail()) { // Verifica si la entrada es inválida
        std::cin.clear(); // Limpia el estado de error
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Limpia el buffer de entrada
        std::cout << "Opción inválida. Inténtelo de nuevo." << std::endl;
        return;
    }

    if (tipoHabitacion >= 1 && tipoHabitacion <= 3) {  // Verifica si la opción es válida
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

void hacerCheckout(std::vector<Habitacion*>& habitaciones) { // Realiza el check-out de un huésped
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

void realizarCargos(std::vector<Habitacion*>& habitaciones) { // Realiza cargos a una habitación 
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

double calcularIngresosPorTarifas(const std::vector<Habitacion*>& habitaciones) {  // Calcula los ingresos por tarifas de las habitaciones
    double ingresos = 0.0;
    for (const auto& habitacion : habitaciones) { // Recorre todas las habitaciones
        ingresos += habitacion->getTarifaBase();
    }
    return ingresos;
}

void generarReporteOcupacion(const std::vector<Habitacion*>& habitaciones) { // Genera el reporte de ocupación
    std::cout << "Reporte de ocupación:" << std::endl;
    for (const auto& habitacion : habitaciones) {
        std::cout << habitacion->toString() << std::endl;
    }
}

int main() {
    std::vector<Habitacion*> habitaciones; // Vector de punteros a habitaciones
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


//para correr usar               g++ -std=c++11 main.cpp Habitacion.cpp HabitacionJunior.cpp HabitacionSuite.cpp HabitacionDeluxe.cpp -o main

//despues           ./main
