// Materia: Programación I, Paralelo 4 
// Autor: Cristian Gabriel Oporto Arancibia 
// Carnet: 8301691 L.P. 
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 11/09/2025 
// Número de ejercicio: 7

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Ingrese la cantidad total de ninos: ";
    cin >> N;

    int n1 = N / 3;          // reparto simple
    int n2 = (N - n1) / 2;   // reparto simple
    int n3 = N - n1 - n2;

    cout << "Ninos de 1 anio: " << n1 << endl;
    cout << "Ninos de 2 anios: " << n2 << endl;
    cout << "Ninos de 3 anios: " << n3 << endl;

    int consumo = (n1 * 6) + (n2 * 3) + (n3 * 2);
    cout << "Consumo total de panales por dia: " << consumo << endl;
    return 0;
}
