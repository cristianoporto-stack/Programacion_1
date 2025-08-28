// Materia: Programación I, Paralelo 4
// Autor: Cristian Gabriel Oporto Arancibia
// Carnet: 8301691 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 28/08/2025
// Número de ejercicio: 7
#include <iostream>
using namespace std;

int main()
{
    char caracter;
    cout << "ingrese un caracter" << endl;
    cin >> caracter;
    if((caracter >= 'A' && caracter <= 'Z') || (caracter >= 'a' && caracter <= 'z')){
        if(caracter == 'A' || caracter == 'E' || caracter == 'I' || caracter == 'O' || caracter == 'U' || caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u'){
            cout << "Es una vocal" << endl;
        } else {
            cout << "Es consonante" << endl;
        }
    }else {
        cout << "Es un caracter especial" << endl;
    }
    return 0;
}