// Materia: Programación I, Paralelo 4 
// Autor: Cristian Gabriel Oporto Arancibia 
// Carnet: 8301691 L.P. 
// Carrera del estudiante: Ingeniería industrial
// Fecha creación: 11/09/2025 
// Número de ejercicio: 5

#include <iostream>
using namespace std;

int main() {
    int n, i = 0, num, suma = 0, mayor = 0, menor = 1000;
    cout << "Ingrese la cantidad de numeros: ";
    cin >> n;

    while(i < n) {
        num = (i * 13 + 9) % 1000 + 1; // pseudo-aleatorio
        cout << num << " ";
        suma = suma + num;
        if(num > mayor) mayor = num;
        if(num < menor) menor = num;
        i++;
    }

    cout << endl;
    cout << "Sumatoria: " << suma << endl;
    cout << "Promedio: " << (suma / n) << endl;
    cout << "Mayor valor: " << mayor << endl;
    cout << "Menor valor: " << menor << endl;
    return 0;
}