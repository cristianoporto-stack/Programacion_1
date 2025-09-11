// Materia: Programación I, Paralelo 4 
// Autor: Cristian Gabriel Oporto Arancibia 
// Carnet: 8301691 L.P. 
// Carrera del estudiante: Ingeniería ind
// Fecha creación: 11/09/2025 
// Número de ejercicio: 5

#include <iostream>
using namespace std;

float promedioPonderado() {
    int notas[4], pesos[4] = {10,20,30,40};
    int i, suma = 0, totalPesos = 0;
    for(i = 0; i < 4; i++) {
        notas[i] = (i*7 + 5) % 100 + 1; // pseudo-aleatorio
        cout << "Nota " << i+1 << ": " << notas[i] << endl;
        suma += notas[i] * pesos[i];
        totalPesos += pesos[i];
    }
    return suma / float(totalPesos);
}

int main() {
    cout << "Promedio ponderado: " << promedioPonderado() << endl;
    return 0;
}