#include <iostream>
using namespace std;

// Definición de la clase
class Suma {
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

    // Método para realizar la suma
    void calcularSuma() {
        cout << "La suma es: " << a + b << endl;
    }
};

// Función principal
int main() {
    Suma obj;
    obj.ingresarDatos();
    obj.calcularSuma();
    return 0;
}

