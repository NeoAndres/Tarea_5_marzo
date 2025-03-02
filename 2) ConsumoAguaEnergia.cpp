#include <iostream>
using namespace std;

int main() {
    // Declarar variables
    int consumoAgua, consumoEnergia, estrato;
    float descuentoAgua = 0.0, descuentoEnergia = 0.0;
    float valorTotalAgua, valorTotalEnergia;
    const float valorInicialAgua = 35000.0;
    const float valorInicialEnergia = 30000.0;

    // Entradas por consola
    cout << "Digite la cantidad de agua consumida: ";
    cin >> consumoAgua;
    
    cout << "Digite la cantidad de energia consumida: ";
    cin >> consumoEnergia;
    
    cout << "Digite el estrato al que pertenece: ";
    cin >> estrato;

    // Validación del estrato
    if (estrato >= 1 && estrato <= 2) {
        descuentoAgua = 0.10;
        descuentoEnergia = 0.15;
    } else if (estrato >= 3 && estrato <= 4) {
        descuentoAgua = 0.05;
        descuentoEnergia = 0.10;
    } else if (estrato >= 5 && estrato <= 6) {
        descuentoAgua = 0.0;
        descuentoEnergia = 0.05;
    } else {
        cout << "Error: El valor ingresado del estrato no existe." << endl;
        return 1;
    }

    // Validaciones de consumo
    if (consumoAgua <= 0) {
        cout << "Error: El valor ingresado para el consumo de agua no puede ser 0 o negativo." << endl;
        return 1;
    }
    if (consumoEnergia <= 0) {
        cout << "Error: El valor ingresado para el consumo de energia no puede ser 0 o negativo." << endl;
        return 1;
    }

    // Cálculo del valor total del agua
    if (consumoAgua <= 2000) {
        valorTotalAgua = valorInicialAgua * (1 - descuentoAgua);
    } else {
    	valorTotalAgua = (valorInicialAgua + ((consumoAgua - 2000) * 400)) * (1 - descuentoAgua);
    }

    // Cálculo del valor total de la energía
    if (consumoEnergia <= 3000) {
        valorTotalEnergia = valorInicialEnergia * (1 - descuentoEnergia);
    } else {
        valorTotalEnergia = (valorInicialEnergia + ((consumoEnergia - 3000) * 350)) * (1 - descuentoEnergia);
    }

    // Imprimir resultados
    cout << "El valor total del consumo del agua es: " << valorTotalAgua << endl;
    cout << "El valor total del consumo de energia es: " << valorTotalEnergia << endl;

    return 0;
}
