// Materia: Programación I, Paralelo 4 
// Autor: Cristian Gabriel Oporto Arancibia 
// Carnet: 8301691 L.P. 
// Carrera del estudiante: Ingeniería insdustrail
// Fecha creación: 11/09/2025 
// Número de ejercicio: 6

#include <iostream>
using namespace std;

bool esBisiesto(int anio) {
    if((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) return true;
    else return false;
}

int diasMes(int anio, int mes) {
    switch(mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: return 31;
        case 4: case 6: case 9: case 11: return 30;
        case 2: if(esBisiesto(anio)) return 29; else return 28;
        default: return 0;
    }
}

int main() {
    int anio, mes;
    cout << "Ingrese año: ";
    cin >> anio;
    cout << "Ingrese mes (numero): ";
    cin >> mes;

    cout << "El mes tiene " << diasMes(anio, mes) << " dias" << endl;
    return 0;
}