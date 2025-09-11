// Materia: Programación I, Paralelo 4 
// Autor: Cristian Gabriel Oporto Arancibia 
// Carnet: 8301691 L.P. 
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 11/09/2025 
// Número de ejercicio: 6

#include <iostream>
using namespace std;

int main() {
    int n, i = 0, num, j, contPrimos = 0, esPrimo;
    cout << "Ingrese la cantidad de numeros: ";
    cin >> n;

    while(i < n) {
        num = (i * 17 + 11) % 10000 + 1; // pseudo-aleatorio
        cout << num << " ";

        if(num < 2) {
            esPrimo = 0;
        } else {
            esPrimo = 1;
            j = 2;
            while(j <= num/2) {
                if(num % j == 0) {
                    esPrimo = 0;
                }
                j++;
            }
        }

        if(esPrimo == 1) contPrimos++;
        i++;
    }

    cout << endl;
    cout << "Cantidad de numeros primos: " << contPrimos << endl;
    return 0;
}