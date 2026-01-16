#include <iostream>
using namespace std;

// Definición de la clase
class Multiplicacion {
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

    // Método para realizar la multiplicación
    void calcularMultiplicacion() {
        cout << "La multiplicacion es: " << a * b << endl;
    }
};

// Función principal
int main() {
    Multiplicacion obj;
    obj.ingresarDatos();
    obj.calcularMultiplicacion();
    return 0;
}
