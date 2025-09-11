// Materia: Programación I, Paralelo 4 
// Autor: Cristian Gabriel Oporto Arancibia 
// Carnet: 8301691 L.P. 
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 11/09/2025 
// Número de ejercicio: 1

#include <iostream>
using namespace std;

bool esPar(int n) {
    if(n % 2 == 0) return true;
    else return false;
}

int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;

    if(esPar(num)) cout << "El numero es PAR" << endl;
    else cout << "El numero es IMPAR" << endl;

    return 0;
}