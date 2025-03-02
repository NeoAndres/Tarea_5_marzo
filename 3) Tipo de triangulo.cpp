#include <iostream>
using namespace std;

int main() {
    // Declarar variables
    int lado1, lado2, lado3;
    string tipoTriangulo;

    // Entradas por consola
    cout << "Ingrese la longitud del lado 1: ";
    cin >> lado1;

    cout << "Ingrese la longitud del lado 2: ";
    cin >> lado2;

    cout << "Ingrese la longitud del lado 3: ";
    cin >> lado3;

    // Validar que los valores sean positivos
    if (lado1 <= 0 || lado2 <= 0 || lado3 <= 0) {
        cout << "Error: Los lados deben ser valores positivos." << endl;
        return 1;
    }

	//Si es triangulo, entonces identifique el tipo
    if ((lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) && (lado2 + lado3 > lado1)) {
        // Determinar el tipo de triángulo
        if (lado1 == lado2 && lado2 == lado3) {
            tipoTriangulo = "Equilatero";
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            tipoTriangulo = "Isosceles";
        } else {
            tipoTriangulo = "Escaleno";
        }

        // Imprimir resultados
        cout << "Los lados ingresados forman un triangulo " << tipoTriangulo << "." << endl;
    } else {
        cout << "Error: Los valores ingresados no forman un triangulo." << endl;
        return 1;
    }

    return 0;
}
