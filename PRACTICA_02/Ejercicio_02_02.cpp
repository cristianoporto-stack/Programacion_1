// Materia: Programación I, Paralelo 4 
// Autor: Cristian Gabriel Oporto Arancibia 
// Carnet: 8301691 L.P. 
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 11/09/2025 
// Número de ejercicio: 2

#include <iostream>
using namespace std;

int main() {
    int n, i = 0, moneda, caras = 0, cruces = 0;
    cout << "Ingrese la cantidad de lanzamientos de la moneda: ";
    cin >> n;

    while(i < n) {
        moneda = (i * 7 + 3) % 2; // 0 = cruz, 1 = cara
        if(moneda == 0) {
            cruces++;
            cout << "Lanzamiento " << i+1 << ": Cruz" << endl;
        } else {
            caras++;
            cout << "Lanzamiento " << i+1 << ": Cara" << endl;
        }
        i++;
    }

    cout << "Porcentaje de caras: " << (caras * 100 / n) << "%" << endl;
    cout << "Porcentaje de cruces: " << (cruces * 100 / n) << "%" << endl;
    return 0;
}