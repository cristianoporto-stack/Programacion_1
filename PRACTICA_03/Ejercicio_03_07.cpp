// Materia: Programación I, Paralelo 4 
// Autor: Cristian Gabriel Oporto Arancibia 
// Carnet: 8301691 L.P. 
// Carrera del estudiante: Ingeniería industrial
// Fecha creación: 11/09/2025 
// Número de ejercicio: 7

#include <iostream>
using namespace std;

int main() {
    int N, i = 0, edad, altura;
    int sumaEdad = 0, sumaAltura = 0, mayores18 = 0, altos = 0;

    cout << "Ingrese cantidad de alumnos: ";
    cin >> N;

    while(i < N) {
        edad = (i*5 + 7) % 35 + 1; // pseudo-aleatorio entre 1 y 35
        altura = (i*3 + 12) % 81 + 120; // pseudo-aleatorio entre 120 y 200
        cout << "Alumno " << i+1 << ": Edad=" << edad << " Altura=" << altura << endl;
        sumaEdad += edad;
        sumaAltura += altura;
        if(edad > 18) mayores18++;
        if(altura > 175) altos++;
        i++;
    }

    cout << "Edad media: " << (sumaEdad / float(N)) << endl;
    cout << "Altura media: " << (sumaAltura / float(N)) << endl;
    cout << "Cantidad de alumnos mayores de 18: " << mayores18 << endl;
    cout << "Cantidad de alumnos mayores a 1.75m: " << altos << endl;

    return 0;
}