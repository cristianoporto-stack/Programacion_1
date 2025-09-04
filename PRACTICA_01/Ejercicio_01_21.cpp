// Materia: Programación I, Paralelo 4
// Autor: Cristian Gabriel Oporto Arancibia
// Carnet: 8301691 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 28/08/2025
// Número de ejercicio: 21
#include <iostream>
using namespace std;

int main() {
    int a, b, resultado = 0;

    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;

    int positivoB = b;
    if (b < 0) {
        positivoB = -b;
    }

    for (int i = 0; i < positivoB; i++) {
        resultado = resultado + a;
    }

    if (b < 0) {
        resultado = -resultado;
    }

    cout << "El resultado de " << a << " x " << b << " es: " << resultado << endl;

    return 0;
}