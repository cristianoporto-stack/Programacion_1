// Materia: Programación I, Paralelo 4 
// Autor: Cristian Gabriel Oporto Arancibia 
// Carnet: 8301691 L.P. 
// Carrera del estudiante: Ingeniería de Sistemas
// Fecha creación: 11/09/2025 
// Número de ejercicio: 10

#include <iostream>
using namespace std;

double calcularTarifa(double km) {
    double tarifa = 10 + km*2;
    if(km > 10) tarifa = tarifa * 0.9;
    return tarifa;
}

int main() {
    double km;
    cout << "Ingrese km recorridos: ";
    cin >> km;

    cout << "La tarifa es: " << calcularTarifa(km) << " Bs" << endl;
    return 0;
}