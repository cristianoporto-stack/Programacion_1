// Materia: Programación I, Paralelo 4
// Autor: Cristian Gabriel Oporto Arancibia
// Carnet: 8301691 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 28/08/2025
// Número de ejercicio: 1
#include <iostream>
using namespace std;

int main() {
    int numero, i, divisores = 0;

    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero <= 1) {
        divisores = 1;
    } else {
        for (i = 2; i < numero; i++) {
            if (numero % i == 0) {
                divisores = divisores + 1;
            }
        }
    }

    if (divisores == 0) {
        cout << numero << " es un numero primo." << endl;
    } else {
        cout << numero << " no es un numero primo." << endl;
    }

    return 0;
}