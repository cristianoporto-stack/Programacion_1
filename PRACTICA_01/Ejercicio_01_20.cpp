// Materia: Programación I, Paralelo 4
// Autor: Cristian Gabriel Oporto Arancibia
// Carnet: 8301691 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 28/08/2025
// Número de ejercicio: 20
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Ingrese un numero:" << endl;
    cin >> n;
    int digitos = 0;
    while (n > 0){
        digitos = digitos + 1;
        n /= 10;
    }
    
    cout << "La cantidad de digitos del numero es: " << digitos << endl;
    return 0;
}