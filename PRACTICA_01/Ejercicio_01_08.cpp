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
    int numero;

    cout << "Ingrese un número entero: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << "El número es par." << endl;
    } else {
        cout << "El número es impar." << endl;
    }

    return 0;
}