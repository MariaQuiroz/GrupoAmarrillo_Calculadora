#include <iostream>
using namespace std;

// Definición de la clase
class Division {
private:
    float a, b;

public:
    // Método para ingresar datos
    void ingresarDatos() {
        cout << "Ingrese el primer numero: ";
        cin >> a;
        cout << "Ingrese el segundo numero: ";
        cin >> b;
    }

    // Método para realizar la división
    void calcularDivision() {
        if (b != 0) {
            cout << "La division es: " << a / b << endl;
        } else {
            cout << "Error: No se puede dividir entre cero." << endl;
        }
    }
};

// Función principal
int main() {
    Division obj;
    obj.ingresarDatos();
    obj.calcularDivision();
    return 0;
}
