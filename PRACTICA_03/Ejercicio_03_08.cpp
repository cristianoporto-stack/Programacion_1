// Materia: Programación I, Paralelo 4 
// Autor: Cristian Gabriel Oporto Arancibia 
// Carnet: 8301691 L.P. 
// Carrera del estudiante: Ingeniería industrial
// Fecha creación: 11/09/2025 
// Número de ejercicio: 8

#include <iostream>
using namespace std;

int main() {
    int monto;
    cout << "Ingrese monto: ";
    cin >> monto;

    int billetes200 = monto / 200; monto %= 200;
    int billetes100 = monto / 100; monto %= 100;
    int billetes50  = monto / 50;  monto %= 50;
    int billetes20  = monto / 20;  monto %= 20;
    int billetes10  = monto / 10;  monto %= 10;
    int monedas5    = monto / 5;   monto %= 5;
    int monedas1    = monto;

    if(billetes200>0) cout << billetes200 << " billetes de 200 Bs" << endl;
    if(billetes100>0) cout << billetes100 << " billetes de 100 Bs" << endl;
    if(billetes50>0) cout << billetes50 << " billetes de 50 Bs" << endl;
    if(billetes20>0) cout << billetes20 << " billetes de 20 Bs" << endl;
    if(billetes10>0) cout << billetes10 << " billetes de 10 Bs" << endl;
    if(monedas5>0) cout << monedas5 << " monedas de 5 Bs" << endl;
    if(monedas1>0) cout << monedas1 << " monedas de 1 Bs" << endl;

    return 0;
}