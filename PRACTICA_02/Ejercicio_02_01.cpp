// Materia: Programación I, Paralelo 4 
// Autor: Cristian Gabriel Oporto Arancibia 
// Carnet: 8301691 L.P. 
// Carrera del estudiante: Ingeniería insdustrial
// Fecha creación: 11/09/2025 
// Número de ejercicio: 1

#include <iostream>
using namespace std;

int main() {
    int n, i = 0, dado, pares = 0;
    cout << "Ingrese la cantidad de lanzamientos: ";
    cin >> n;

    while(i < n) {
        dado = (i * 3 + 5) % 6 + 1; // simulacion pseudo-aleatoria
        cout << "Lanzamiento " << i+1 << ": " << dado << endl;
        if(dado % 2 == 0) {
            pares++;
        }
        i++;
    }
    cout << "Cantidad de caras pares: " << pares << endl;
    return 0;
}