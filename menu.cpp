#include <iostream>
using namespace std;

// Se incluyen los archivos cpp con las clases
#include "suma.cpp"
#include "resta.cpp"
#include "multiplicacion.cpp"
#include "division.cpp"

int main() {
    int opcion;

    do {
        cout << "\n===== CALCULADORA BASICA =====\n";
        cout << "1. Suma\n";
        cout << "2. Resta\n";
        cout << "3. Multiplicacion\n";
        cout << "4. Division\n";
        cout << "5. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                Suma s;
                s.ingresarDatos();
                s.calcularSuma();
                break;
            }
            case 2: {
                Resta r;
                r.ingresarDatos();
                r.calcularResta();
                break;
            }
            case 3: {
                Multiplicacion m;
                m.ingresarDatos();
                m.calcularMultiplicacion();
                break;
            }
            case 4: {
                Division d;
                d.ingresarDatos();
                d.calcularDivision();
                break;
            }
            case 5:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opcion invalida. Intente de nuevo.\n";
        }

    } while (opcion != 5);

    return 0;
}

