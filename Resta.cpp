#include <iostream>
using namespace std;

// Definición de la clase
class Resta {
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

    // Método para realizar la resta
    void calcularResta() {
        cout << "La resta es: " << a - b << endl;
    }
};

// Función principal
int main() {
    Resta obj;
    obj.ingresarDatos();
    obj.calcularResta();
    return 0;
}
