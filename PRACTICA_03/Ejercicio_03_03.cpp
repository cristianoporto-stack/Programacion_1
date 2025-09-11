// Materia: Programación I, Paralelo 4 
// Autor: Cristian Gabriel Oporto Arancibia 
// Carnet: 8301691 L.P. 
// Carrera del estudiante: Ingeniería industrial
// Fecha creación: 11/09/2025 
// Número de ejercicio: 3

#include <iostream>
using namespace std;

bool esCapicua(int n) {
    int original = n, invertido = 0, digito;
    while(n > 0) {
        digito = n % 10;
        invertido = invertido * 10 + digito;
        n = n / 10;
    }
    if(original == invertido) return true;
    else return false;
}

int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;

    if(esCapicua(num)) cout << "El numero es capicua" << endl;
    else cout << "El numero NO es capicua" << endl;

    return 0;
}