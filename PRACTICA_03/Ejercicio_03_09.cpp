// Materia: Programación I, Paralelo 4 
// Autor: Cristian Gabriel Oporto Arancibia 
// Carnet: 8301691 L.P. 
// Carrera del estudiante: Ingeniería industrial
// Fecha creación: 11/09/2025 
// Número de ejercicio: 9

#include <iostream>
using namespace std;

int main() {
    int minutos, jornada = 8*60;
    cout << "Ingrese tiempo trabajado en minutos: ";
    cin >> minutos;

    if(minutos > jornada) cout << "Tiempo extra: " << minutos - jornada << " minutos" << endl;
    else if(minutos < jornada) cout << "Debe trabajar: " << jornada - minutos << " minutos" << endl;
    else cout << "Tiempo trabajado exacto" << endl;

    return 0;
}