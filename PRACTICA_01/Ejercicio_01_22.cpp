// Materia: Programación I, Paralelo 4
// Autor: Cristian Gabriel Oporto Arancibia
// Carnet: 8301691 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 28/08/2025
// Número de ejercicio: 22
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;

    if (a % b == 0) {
        cout << a << " es multiplo de " << b << endl;
    } else if (b % a == 0) {
        cout << b << " es multiplo de " << a << endl;
    } else {
        cout << "Ninguno es multiplo del otro." << endl;
    }

    return 0;
}