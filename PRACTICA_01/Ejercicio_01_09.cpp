#include <iostream>
using namespace std;

int main()
 {
    int edad;

    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad <= 12) {
        cout << "Es un Niño" << endl;
    }
    else if (edad <= 18) {
        cout << "Es un Adolescente" << endl;
    }
    else if (edad < 60) {
        cout << "Es Mayor de edad" << endl;
    }
    else {
        cout << "Es un Adulto mayor" << endl;
    }

    return 0;
}