// Materia: Programación I, Paralelo 4
// Autor: Cristian Gabriel Oporto Arancibia
// Carnet: 8301691 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 28/08/2025
// Número de ejercicio: 23
#include <iostream>
using namespace std;

int main() {
    int numero, resto, invertido = 0;

    cout << "Ingrese un numero: ";
    cin >> numero;

    while (numero != 0) {
        resto = numero % 10;
        invertido = invertido * 10 + resto;
        numero = numero / 10;
    }

    cout << "Numero invertido: " << invertido << endl;

    return 0;
}