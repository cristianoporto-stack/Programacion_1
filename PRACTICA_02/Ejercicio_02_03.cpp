// Materia: Programación I, Paralelo 4 
// Autor: Cristian Gabriel Oporto Arancibia 
// Carnet: 8301691 L.P. 
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 11/09/2025 
// Número de ejercicio: 3

#include <iostream>
using namespace std;

int main() {
    int num = (7 * 3 + 5) % 10 + 1; // numero pseudo-aleatorio entre 1 y 10
    cout << "Numero generado: " << num << endl;

    int factorial = 1, i = 1;
    while(i <= num) {
        factorial = factorial * i;
        i++;
    }
    cout << "El factorial de " << num << " es: " << factorial << endl;
    return 0;
}