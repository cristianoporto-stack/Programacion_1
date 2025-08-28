#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un numero entre 1 y 5: ";
    cin >> numero;

    // Repetir hasta que el valor sea valido
    while (numero < 1 || numero > 5) {
        cout << "Valor invalido. Intente nuevamente: ";
        cin >> numero;
    }

    cout << "Correcto! Usted ingreso: " << numero << endl;

    return 0;
}