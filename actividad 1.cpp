#include <iostream>
using namespace std;

int main() {
    int edad;

    while (true) {
        cout << "Ingresa tu edad (escribe 0 para salir): ";
        cin >> edad;

        if (edad == 0) {
            cout << "Programa finalizado. ¡Hasta luego!" << endl;
            break;
        }

        if (edad >= 18) {
            cout << "Usted es mayor de edad." << endl;
        } else {
            cout << "Usted es menor de edad." << endl;
        }

        cout << endl; // Salto de línea para separar cada ciclo
    }

    return 0;
}
