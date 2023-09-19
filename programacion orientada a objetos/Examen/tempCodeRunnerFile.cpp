#include <iostream>
#include <vector>
#include <string>
#include <limits>

class Producto {
protected:
    std::string nombre;
    double costo;
    int cantidad;

public:
    Producto(const std::string& nombre, double costo, int cantidad) : nombre(nombre), costo(costo), cantidad(cantidad) {}

    virtual double getTotal() const {
        return costo * cantidad;
    }

    virtual double getSubtotal() const {
        return getTotal();
    }

    virtual double getImpuestos() const {
        return 0.0;
    }

    virtual double getTotalImpuestos() const {
        return getImpuestos() * cantidad;
    }

    virtual void mostrarInformacion() const {
        std::cout << "Nombre: " << nombre << ", Cantidad: " << cantidad << ", Costo: $" << costo << std::endl;
    }

    virtual ~Producto() {} // Destructor virtual
};

class ProductoConIVA : public Producto {
public:
    ProductoConIVA(const std::string& nombre, double costo, int cantidad) : Producto(nombre, costo, cantidad) {}

    double getTotal() const override {
        return getSubtotal() + getImpuestos(); // El total incluye el impuesto (IVA)
    }

    double getImpuestos() const override {
        return getSubtotal() * 0.16; // Aplica un 16% de impuestos (IVA)
    }

    void mostrarInformacion() const override {
        std::cout << "Nombre: " << nombre << ", Cantidad: " << cantidad << ", Costo: $" << costo << " (IVA incluido)" << std::endl;
    }
};

class ProductoConIVAYEPS : public ProductoConIVA {
public:
    ProductoConIVAYEPS(const std::string& nombre, double costo, int cantidad) : ProductoConIVA(nombre, costo, cantidad) {}

    double getTotal() const override {
        return ProductoConIVA::getTotal() * 1.05; // Aplica un 5% de impuestos adicionales (EPS)
    }

    double getImpuestos() const override {
        return (getSubtotal() * 0.16) + (getSubtotal() * 0.05);
    }
};

class Carrito {
private:
    std::vector<Producto*> productos;

public:
    void agregarProducto(Producto* producto) {
        productos.push_back(producto);
    }

    void mostrarProductos() const {
        if (productos.empty()) {
            std::cout << "No hay productos en el carrito." << std::endl;
        } else {
            std::cout << "Productos en el carrito:" << std::endl;
            for (const auto producto : productos) {
                producto->mostrarInformacion();
            }
        }
    }

    double calcularTotalPagar() const {
        if (productos.empty()) {
            std::cout << "No hay productos en el carrito." << std::endl;
            return 0.0;
        }

        double total = 0.0;
        for (const auto producto : productos) {
            total += producto->getTotal();
        }
        return total;
    }

    double calcularTotalImpuestos() const {
        if (productos.empty()) {
            std::cout << "No hay productos en el carrito." << std::endl;
            return 0.0;
        }

        double totalImpuestos = 0.0;
        for (const auto producto : productos) {
            totalImpuestos += producto->getTotalImpuestos();
        }
        return totalImpuestos;
    }

    void vaciarCarrito() {
        for (auto producto : productos) {
            delete producto; // Liberar la memoria de los productos en el carrito
        }
        productos.clear();
        std::cout << "Carrito vaciado." << std::endl;
    }

    ~Carrito() {
        vaciarCarrito(); // Liberar la memoria de los productos al destruir el carrito
    }
};

int obtenerOpcionValida() {
    int opcion;
    while (true) {
        std::cout << "---- Menu ----" << std::endl;
        std::cout << "1. Agregar producto al carrito" << std::endl;
        std::cout << "2. Mostrar productos en el carrito" << std::endl;
        std::cout << "3. Calcular total a pagar" << std::endl;
        std::cout << "4. Calcular total de impuestos" << std::endl;
        std::cout << "5. Vaciar carrito" << std::endl;
        std::cout << "6. Salir" << std::endl;
        std::cout << "Ingrese una opción: ";

        std::cin >> opcion;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Entrada inválida. Por favor, ingrese un número." << std::endl;
        } else {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            break;
        }
    }
    return opcion;
}

int main() {
    Carrito carrito;

    while (true) {
        int opcion = obtenerOpcionValida();

        if (opcion == 1) {
            std::string nombre;
            double costo;
            int cantidad;

            std::cout << "Ingrese el nombre del producto: ";
            std::getline(std::cin, nombre);

            std::cout << "Ingrese el costo del producto: ";
            std::cin >> costo;

            std::cout << "Ingrese la cantidad del producto: ";
            std::cin >> cantidad;

            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            Producto* productoNormal = new Producto(nombre, costo, cantidad);
            carrito.agregarProducto(productoNormal);

            Producto* productoConIVA = new ProductoConIVA(nombre, costo, cantidad);
            carrito.agregarProducto(productoConIVA);

            Producto* productoConIVAYEPS = new ProductoConIVAYEPS(nombre, costo, cantidad);
            carrito.agregarProducto(productoConIVAYEPS);

            std::cout << "Producto agregado al carrito." << std::endl;
        } else if (opcion == 2) {
            carrito.mostrarProductos();
        } else if (opcion == 3) {
            double totalPagar = carrito.calcularTotalPagar();
            std::cout << "Total a pagar: $" << totalPagar << std::endl;
        } else if (opcion == 4) {
            double totalImpuestos = carrito.calcularTotalImpuestos();
            std::cout << "Total de impuestos a pagar: $" << totalImpuestos << std::endl;
        } else if (opcion == 5) {
            carrito.vaciarCarrito();
        } else if (opcion == 6) {
            break;
        } else {
            std::cout << "Opción inválida. Por favor, ingrese una opción válida." << std::endl;
        }

        std::cout << std::endl;
    }

    return 0;
}
