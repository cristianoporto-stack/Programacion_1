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
    int radio, volumen;
    int pi = 3;  // Usamos pi aproximado como entero

    cout << "Ingrese el radio de la esfera: ";
    cin >> radio;

    volumen = (4 / 3) * pi * (radio * radio * radio);

    cout << "El volumen de la esfera es: " << volumen << endl;

    return 0;
}