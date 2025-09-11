// Materia: Programación I, Paralelo 4 
// Autor: Cristian Gabriel Oporto Arancibia 
// Carnet: 8301691 L.P. 
// Carrera del estudiante: Ingeniería industrial
// Fecha creación: 11/09/2025 
// Número de ejercicio: 4

#include <iostream>
using namespace std;

int main() {
    int secreto = 42; // fijo como en el ejemplo
    int intento, i = 1, min = 0, max = 50;

    cout << "Estoy pensando un numero entre 0 y 50" << endl;

    while(i <= 5) {
        cout << "Intento " << i << ": ";
        cin >> intento;

        if(intento == secreto) {
            cout << "Felicitaciones... Adivinaste el numero" << endl;
            return 0;
        } else if(intento < secreto) {
            min = intento;
            cout << "El numero esta entre " << min << " y " << max << endl;
        } else {
            max = intento;
            cout << "El numero esta entre " << min << " y " << max << endl;
        }
        i++;
    }

    cout << "Se acabaron los intentos. El numero era: " << secreto << endl;
    return 0;
}