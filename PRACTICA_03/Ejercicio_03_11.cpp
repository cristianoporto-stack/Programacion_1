// Materia: Programación I, Paralelo 4 
// Autor: Cristian Gabriel Oporto Arancibia 
// Carnet: 8301691 L.P. 
// Carrera del estudiante: Ingeniería INdutrial
// Fecha creación: 11/09/2025 
// Número de ejercicio: 11

#include <iostream>
using namespace std;

double retirarDinero(double &saldo, double cantidad) {
    if(cantidad > saldo) {
        cout << "Saldo insuficiente" << endl;
        return 0;
    }
    if(int(cantidad) % 10 != 0) {
        cout << "Monto debe ser multiplo de 10" << endl;
        return 0;
    }
    saldo -= cantidad;
    return cantidad;
}

int main() {
    double saldo = 1000, monto;
    cout << "Ingrese monto a retirar: ";
    cin >> monto;

    double retirado = retirarDinero(saldo, monto);
    if(retirado > 0) cout << "Se retiro: " << retirado << " Bs" << endl;
    cout << "Saldo restante: " << saldo << " Bs" << endl;

    return 0;
}