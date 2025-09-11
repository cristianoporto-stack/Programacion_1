// Materia: Programación I, Paralelo 4 
// Autor: Cristian Gabriel Oporto Arancibia 
// Carnet: 8301691 L.P. 
// Carrera del estudiante: Ingeniería industrial
// Fecha creación: 11/09/2025 
// Número de ejercicio: 2

#include <iostream>
using namespace std;

float celsiusAFahrenheit(float c) {
    return (c * 9/5) + 32;
}

int main() {
    float c;
    cout << "Ingrese temperatura en Celsius: ";
    cin >> c;

    cout << "La temperatura en Fahrenheit es: " << celsiusAFahrenheit(c) << endl;
    return 0;
}