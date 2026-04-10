#include <iostream>
#include <string>

class Cliente {
private:
    std::string nombre;
    std::string apellidos;
    std::string turno;

public:
    Cliente(const std::string& nombre, const std::string& apellidos, const std::string& turno)
        : nombre(nombre), apellidos(apellidos), turno(turno) {}

    void imprimirDatos() const {
        std::cout << "Nombre: " << nombre << "\n";
        std::cout << "Apellidos: " << apellidos << "\n";
        std::cout << "Turno: " << turno << "\n";
    }
};

class Empleado {
private:
    std::string nombre;
    std::string apellidos;
    std::string categoria;

public:
    Empleado(const std::string& nombre, const std::string& apellidos, const std::string& categoria)
        : nombre(nombre), apellidos(apellidos), categoria(categoria) {}

    void imprimirDatos() const {
        std::cout << "Nombre: " << nombre << "\n";
        std::cout << "Apellidos: " << apellidos << "\n";
        std::cout << "Categoria: " << categoria << "\n";
    }
};

int main() {
    int registro;

    std::cout << "¿Qué tipo de registro desea almacenar?\n";
    std::cout << "1 - Cliente\n2 - Empleado\n";
    std::cin >> registro;
    std::cin.ignore();

    if (registro == 1) {
        std::string nombre, apellidos, turno;

        std::cout << "Introduzca el nombre del cliente: ";
        std::getline(std::cin, nombre);

        std::cout << "Introduzca los apellidos del cliente: ";
        std::getline(std::cin, apellidos);

        std::cout << "Introduzca el turno del cliente: ";
        std::getline(std::cin, turno);

        Cliente cliente(nombre, apellidos, turno);

        std::cout << "\nDatos del cliente:\n";
        cliente.imprimirDatos();

    } else if (registro == 2) {
        std::string nombre, apellidos, categoria;

        std::cout << "Introduzca el nombre del empleado: ";
        std::getline(std::cin, nombre);

        std::cout << "Introduzca los apellidos del empleado: ";
        std::getline(std::cin, apellidos);

        std::cout << "Introduzca la categoría del empleado: ";
        std::getline(std::cin, categoria);

        Empleado empleado(nombre, apellidos, categoria);

        std::cout << "\nDatos del empleado:\n";
        empleado.imprimirDatos();

    } else {
        std::cout << "Opción no válida.\n";
    }

    return 0;
}
