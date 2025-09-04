// Materia: Programación I, Paralelo 4
// Autor: Cristian Gabriel Oporto Arancibia
// Carnet: 8301691 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 28/08/2025
// Número de ejercicio: 25
#include <iostream>
using namespace std;

int main()
 {
    char respuesta = 's';

    while (respuesta == 's' || respuesta == 'S') {
        int numero;
        cout << "Ingrese un numero: ";
        cin >> numero;

        for (int i = 1; i <= 10; i = i + 1) {
            int resultado = 0;
            for (int j = 1; j <= i; j = j + 1) {
                resultado = resultado + numero;
            }
            cout << numero << " x " << i << " = " << resultado << endl;
        }

        cout << "Desea calcular otra tabla? (s/n): ";
        cin >> respuesta;
    }

    cout << "Programa terminado." << endl;
    return 0;
}