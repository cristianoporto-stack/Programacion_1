// Materia: Programación I, Paralelo 4
// Autor: Cristian Gabriel Oporto Arancibia
// Carnet: 8301691 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 04/09/2025
// Número de ejercicio: 1
#include <iostream>
using namespace std;

int main()
 {
    int numero, pareja, suma = 1;

    cout << "Ingrese un numero: ";
    cin >> numero;

    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            suma = suma + i;
            if (i != numero / i) {
                suma = suma + (numero / i);
            }
        }
    }
    pareja = suma;

    int sumaPareja = 1;
    for (int j = 2; j * j <= pareja; j++) {
        if (pareja % j == 0) {
            sumaPareja = sumaPareja + j;
            if (j != pareja / j) {
                sumaPareja = sumaPareja + (pareja / j);
            }
        }
    }

    if (pareja != numero) {
        if (sumaPareja == numero) {
            cout << numero << " y " << pareja << " son numeros amigos." << endl;
        } else {
            cout << numero << " no forma parte de un par de numeros amigos." << endl;
        }
    } else {
        cout << numero << " no forma parte de un par de numeros amigos." << endl;
    }

    return 0;
}