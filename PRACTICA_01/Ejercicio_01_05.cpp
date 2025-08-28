// Materia: Programación I, Paralelo 4
// Autor: Cristian Gabriel Oporto Arancibia
// Carnet: 8301691 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 28/08/2025
// Número de ejercicio: 1
#include <iostream>

using namespace std;

int main()
 {
    int gradosC, kelvin;

    cout << "Ingrese la temperatura en grados centígrados: ";
    cin >> gradosC;

    kelvin = gradosC + 273;

    cout << "La temperatura en Kelvin es: " << kelvin << endl;

    return 0;
}