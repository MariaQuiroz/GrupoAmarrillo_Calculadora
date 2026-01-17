#include <iostream>
using namespace std;

/* ===== CLASE SUMA ===== */
class Suma {
private:
    float a, b;

public:
    void ingresarDatos() {
        cout << "Ingrese el primer numero: ";
        cin >> a;
        cout << "Ingrese el segundo numero: ";
        cin >> b;
    }

    void calcularSuma() {
        cout << "La suma es: " << a + b << endl;
    }
};

/* ===== CLASE RESTA ===== */
class Resta {
private:
    float a, b;

public:
    void ingresarDatos() {
        cout << "Ingrese el primer numero: ";
        cin >> a;
        cout << "Ingrese el segundo numero: ";
        cin >> b;
    }

    void calcularResta() {
        cout << "La resta es: " << a - b << endl;
    }
};

/* ===== CLASE MULTIPLICACION ===== */
class Multiplicacion {
private:
    float a, b;

public:
    void ingresarDatos() {
        cout << "Ingrese el primer numero: ";
        cin >> a;
        cout << "Ingrese el segundo numero: ";
        cin >> b;
    }

    void calcularMultiplicacion() {
        cout << "La multiplicacion es: " << a * b << endl;
    }
};

/* ===== CLASE DIVISION ===== */
class Division {
private:
    float a, b;

public:
    void ingresarDatos() {
        cout << "Ingrese el primer numero: ";
        cin >> a;
        cout << "Ingrese el segundo numero: ";
        cin >> b;
    }

    void calcularDivision() {
        if (b != 0) {
            cout << "La division es: " << a / b << endl;
        } else {
            cout << "Error: No se puede dividir entre cero." << endl;
        }
    }
};

/* ===== PROGRAMA PRINCIPAL ===== */
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
                cout << "Opcion invalida.\n";
        }

    } while (opcion != 5);

    return 0;
}

