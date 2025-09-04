// Materia: Programación I, Paralelo 4
// Autor: Cristian Gabriel Oporto Arancibia
// Carnet: 8301691 L.P.
// Carrera del estudiante: Ingeniería Industrial
// Fecha creación: 28/08/2025
// Número de ejercicio: 24
#include <iostream>
using namespace std;

int main() {
    int opcion = -1;

    while (opcion != 0) {
        cout << "\nMenu:\n";
        cout << "1. Opcion 1\n";
        cout << "2. Opcion 2\n";
        cout << "3. Opcion 3\n";
        cout << "0. Salir\n";
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            cout << "Ha seleccionado la Opcion 1\n";
        } 
        else if (opcion == 2) {
            cout << "Ha seleccionado la Opcion 2\n";
        } 
        else if (opcion == 3) {
            cout << "Ha seleccionado la Opcion 3\n";
        } 
        else if (opcion == 0) {
            cout << "Saliendo del programa...\n";
        } 
        else {
            cout << "Opcion no valida\n";
        }
    }

    return 0;
}