
// Materia: Programación I, Paralelo 4
// Autor: Cristian Gabriel Oporto Arancibia
// Carnet: 8301691 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 28/08/2025
// Número de ejercicio: 14
#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Ingrese un numero:" << endl;
    cin >> N;
    cout << "El triangulo es: " << endl;
    for(int i = 1; i <= N; i++){
        for(int j = 0; j < i; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}