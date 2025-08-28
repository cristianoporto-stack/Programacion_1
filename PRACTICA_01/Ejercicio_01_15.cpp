// Materia: Programación I, Paralelo 4
// Autor: Cristian Gabriel Oporto Arancibia
// Carnet: 8301691 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 28/08/2025
// Número de ejercicio: 1#include <iostream>
using namespace std;

int main() {
    int N;
    int suma = 0;
    int i;

    cout << "Ingrese un numero N: ";
    cin >> N;

    for (i = 1; i <= N; i++) {
        suma = suma + i;
    }

    cout << "La suma de los enteros desde 1 hasta " << N << " es: " << suma << endl;

    return 0;
}