// Materia: Programación I, Paralelo 4
// Autor: Cristian Gabriel Oporto Arancibia
// Carnet: 8301691 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 28/08/2025
// Número de ejercicio: 1
#include <iostream>
using namespace std;

int main() {
    int base, altura, area;

    cout << "Ingrese la base del triangulo: ";
    cin >> base;

    cout << "Ingrese la altura del triangulo: ";
    cin >> altura;

    area = (base * altura) / 2;

    cout << "El area del triangulo es: " << area << endl;

    return 0;
}