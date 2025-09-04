// Materia: Programación I, Paralelo 4
// Autor: Cristian Gabriel Oporto Arancibia
// Carnet: 8301691 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 04/09/2025
// Número de ejercicio: 18
#include <iostream>
using namespace std;

int main()
 {
    int contador = 0;
    int numero = 2;

    while (contador < 100) {
        int divisores = 0;

        for (int i = 1; i <= numero; i++) {
            if (numero % i == 0) {
                divisores = divisores + 1;
            }
        }

        if (divisores == 2) {
            cout << numero << " ";
            contador = contador + 1;
        }

        numero = numero + 1;
    }

    return 0;
}