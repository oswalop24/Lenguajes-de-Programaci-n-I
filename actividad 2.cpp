#include <iostream>
using namespace std;

int main() {
    double numero1, numero2;

    cout << "Escribe el primer número: ";
    cin >> numero1;

    cout << "Escribe el segundo número: ";
    cin >> numero2;

    cout << "La suma es: " << numero1 + numero2 << endl;
    cout << "La resta es: " << numero1 - numero2 << endl;
    cout << "La multiplicación es: " << numero1 * numero2 << endl;

    if (numero2 != 0) {
        cout << "La división es: " << numero1 / numero2 << endl;
    } else {
        cout << "La división es: No se puede dividir entre cero." << endl;
    }

    return 0;
}
