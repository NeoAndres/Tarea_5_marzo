#include <iostream>
using namespace std;

// Inicio
int main() {
    // Declarar variables
    char tipoInfraccion;
    int gradoInfraccion, cantidadVeces;
    int valorInfraccion; 
    int grua = 100000;

    // Empezar a imprimir en la consola las reglas de los tipos de multas
    cout << "Tenga en cuenta que tenemos 3 tipos diferentes de infraccion." << endl;
    cout << "Cada infraccion sera segun su clase, de tipo A, B y C." << endl;
    cout << "Si la infraccion tiene que ver con Conducir en embriaguez, es de tipo A." << endl;
    cout << "Si la infraccion tiene que ver con Pico y placa, es de tipo B." << endl;
    cout << "Si la infraccion tiene que ver con llevar ninos < 10 adelante, es de tipo C." << endl;

    // Solicitar al usuario el tipo de infraccion
    cout << "Ingrese el tipo de infraccion (A, B o C): ";
    cin >> tipoInfraccion;

    // Proceso para determinar la multa y valores adicionales
    if (tipoInfraccion == 'A') { 
        valorInfraccion = 505000;
        cout << "La persona ha cometido la infraccion: CONDUCIR EN EMBRIAGUEZ" << endl;
        cout << "¿De que grado fue la infraccion cometida? (1, 2 o 3): ";
        cin >> gradoInfraccion;

        if (gradoInfraccion == 1) {
            valorInfraccion += grua;
        } else if (gradoInfraccion == 2) {
            valorInfraccion += 215000 + grua;
        } else if (gradoInfraccion == 3) {
            valorInfraccion += 415000 + grua;
        } else {
            cout << "Grado de infraccion no valido." << endl;
            return 1;
        }

    } else if (tipoInfraccion == 'B') {
        valorInfraccion = 280000;  
        cout << "La persona ha cometido la infraccion: PICO Y PLACA" << endl;
        cout << "¿Cuantas veces ha cometido la infraccion? (1 o 2+ veces): ";
        cin >> cantidadVeces;

        if (cantidadVeces == 1) {
        	valorInfraccion;
        } else if (cantidadVeces >= 2) {
            valorInfraccion += 102000 + grua;
        } else {
            cout << "Cantidad de veces no valida." << endl;
            return 1;
        }

    } else if (tipoInfraccion == 'C') {
        valorInfraccion = 105000;  
        cout << "La persona ha cometido la infraccion: LLEVAR NINIOS MENORES DE 10 EN LA PARTE DELANTERA DEL AUTO" << endl;
        cout << "¿Cuantos niÑos llevaba en la parte delantera del vehiculo? (1 o 2+): ";
        cin >> cantidadVeces;

        if (cantidadVeces == 1) {
            valorInfraccion += 45000;
        } else if (cantidadVeces >= 2) {
            valorInfraccion += 70000;
        } else {
            cout << "Cantidad de ninos no valida." << endl;
            return 1;
        }
    } else {
        cout << "Tipo de infraccion no valido." << endl;
        return 1;
    }

    // Imprimir el resultado
    cout << "Lo que se debe pagar es: $" << valorInfraccion << endl;

    return 0; // Fin
}
