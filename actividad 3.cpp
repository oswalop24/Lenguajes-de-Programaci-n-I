#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre, apellidoPaterno, apellidoMaterno;
    int dia, mes, anio;

    cout << "Ingresa el nombre: ";
    getline(cin, nombre);

    cout << "Ingresa el apellido paterno: ";
    getline(cin, apellidoPaterno);

    cout << "Ingresa el apellido materno (si no tienes, escribe X): ";
    getline(cin, apellidoMaterno);

    cout << "Ingresa el día de nacimiento: ";
    cin >> dia;

    cout << "Ingresa el mes de nacimiento: ";
    cin >> mes;

    cout << "Ingresa el año de nacimiento: ";
    cin >> anio;

    // Extraer las letras necesarias
    char letra1 = toupper(apellidoPaterno[0]);
    char letra2 = 'X';

    // Buscar la primera vocal interna del apellido paterno
    for (size_t i = 1; i < apellidoPaterno.length(); i++) {
        char c = toupper(apellidoPaterno[i]);
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            letra2 = c;
            break;
        }
    }

    char letra3 = (apellidoMaterno == "X" || apellidoMaterno.empty()) ? 'X' : toupper(apellidoMaterno[0]);
    char letra4 = toupper(nombre[0]);

    // Construir las primeras 4 letras del RFC
    string rfc = "";
    rfc += letra1;
    rfc += letra2;
    rfc += letra3;
    rfc += letra4;

    // Validar si es una grosería y reemplazar la última letra con X si lo es
    if (rfc == "BUEI" || rfc == "CACA" || rfc == "COJE" || rfc == "PUTO" || rfc == "PENE") {
        rfc[3] = 'X';
    }

    // Agregar la fecha de nacimiento en formato AAMMDD
    string anioStr = to_string(anio).substr(2, 2);
    string mesStr = (mes < 10) ? "0" + to_string(mes) : to_string(mes);
    string diaStr = (dia < 10) ? "0" + to_string(dia) : to_string(dia);

    rfc += anioStr + mesStr + diaStr;
    rfc += "XXX"; // Homoclave simulada

    cout << "\nRFC generado: " << rfc << endl;

    return 0;
}
