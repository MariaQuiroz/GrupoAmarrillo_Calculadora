#include <iostream>
#include "Multiplicacion.h"

using namespace std;

void Multiplicacion::ingresarDatos() {
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
}

void Multiplicacion::calcularMultiplicacion() {
    cout << "La multiplicacion es: " << a * b << endl;
}

