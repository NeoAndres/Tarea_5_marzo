#include <iostream>
using namespace std;
// Este codigo fue realizado por Santiago Andrés Barrera para calcular cuanto me gasto en el metro

// Función usada para calcular el pago desde el 14 de marzo = $61.920
// Función usada para calcular el pago desde el 25 de marzo = $11.360
// (Teniedo en cuenta que el descuento de la civica estudiantil me lo dan el 25 de marzo)
// Función usada para calcular el pago desde el 14 de marzo (5 dias, frecuente) = $34.400
// Función usada para calcular el pago desde el 25 de marzo (4 dias, estudiantil ) = $11.360
// Para calcular marzo = $34.400 + $11.360, en total debo pagar $45.760
// (A partir de ahora todos los calculos deberás usar el descuento estudiantil)
int Cuanto_pago_al_mes_desde_dia_x(int tarifa, int dias) {
return (dias) * tarifa; // Ida y vuelta por día
}

// Función principal (Contiene todo el codigo principal)
int main() {
	// Declaramos variables locales
	int tarifa, total_anual;
	string tipo_pasaje;
	int diaMesFaltantes;
	string respuesta; 

	// Pregunto por consola el tipo de pasaje
	cout << "Ingrese el tipo de pasaje que como estudiante, ud usa (frecuente - adulto_mayor - estudiante - discapacitado): " << endl;
	cin >> tipo_pasaje;

	// Proceso para hallar tipo de pasaje (Tiene en cuenta que ud va y viene) 
	if (tipo_pasaje == "frecuente") {
 	   tarifa = 6880; //ida y vuelta, tarifa de pasaje frecuente
	} else if (tipo_pasaje == "adulto_mayor") {
 	   tarifa = 6120; //ida y vuelta, tarifa de pasaje adulto mayor
	} else if (tipo_pasaje == "estudiante") {
	    tarifa = 2840; //ida y vuelta, tarifa de pasaje estudiante
	} else if (tipo_pasaje == "discapacitado") {
	    tarifa = 4960; //ida y vuelta, tarifa de pasaje discapacitado
	} else {
  	 	cout << "Tipo de pasaje no valido, por favor escriba una de las opciones dadas" << endl;
  		cout << "(frecuente - adulto_mayor - estudiante - discapacitado)" << endl;
    	cout << "Sin embargo, Muchas gracias por usar nuestro servicio. Vuelva a intentarlo!" << endl;
    return 1;
	}

	// Declaro variables de apoyo para calcular lo del mes
	int dias, costo_mes;
	
	// Gasto mensual!
	cout << "  Gastos mensuales en el metro:  " << endl;

	// Cálculo por mes
	dias = 12;
	costo_mes = dias * tarifa;
	cout << "Febrero: $" << costo_mes << endl;

	dias = 17;
	costo_mes = dias * tarifa;
	cout << "Marzo: $" << costo_mes << endl;

	dias = 18;
	costo_mes = dias * tarifa;
	cout << "Abril: $" << costo_mes << endl;

	dias = 16;
	costo_mes = dias * tarifa;
	cout << "Mayo: $" << costo_mes << endl;

	dias = 17;
	costo_mes = dias * tarifa;
	cout << "Junio: $" << costo_mes << endl;

	dias = 19;
	costo_mes = dias * tarifa;
	cout << "Julio: $" << costo_mes << endl;

	dias = 16;
	costo_mes = dias * tarifa;
	cout << "Agosto: $" << costo_mes << endl;

	dias = 18;
	costo_mes = dias * tarifa;
	cout << "Septiembre: $" << costo_mes << endl;

	dias = 18;
	costo_mes = dias * tarifa;
	cout << "Octubre: $" << costo_mes << endl;

	dias = 16;
	costo_mes = dias * tarifa;
	cout << "Noviembre: $" << costo_mes << endl;

	dias = 11;
	costo_mes = dias * tarifa;
	cout << "Diciembre: $" << costo_mes << endl;

	// Gasto Anual!
	cout << "  Gasto anual total en el metro:  " << endl;

	// Calculo el total anual
	total_anual = (12 + 17 + 18 + 16 + 17 + 19 + 16 + 18 + 18 + 16 + 11 + 18) * tarifa;

	// Imprimo el resultado del total anual
	cout << "El total pagado en el anio es de: $" << total_anual << endl;

	// Pregunto por consola si quiere calcular
    cout << "Necesita calcular lo que le falta por pagar en un mes? (si/no): ";
    cin >> respuesta;

	// Si el usuario lo desea, puede calcular lo que le falta por pagar en 1 mes
	if (respuesta == "si") {
		cout << "Digite el numero de dias que le faltan al mes: " << endl;
		cin >> diaMesFaltantes;
		//Imprimo lo que debo pagar en marzo desde el 15
		cout << "Lo que debo pagar en total lo que queda de marzo es: $" << Cuanto_pago_al_mes_desde_dia_x (tarifa, diaMesFaltantes) << endl;
	} else if (respuesta == "no") { 
		cout << "Muchas gracias por usar nuestro servicio!" << endl;
	} else {
		cout << "No ha digitado un valor valido (si/no), sin embargo, Muchas gracias por usar nuestro servicio!" << endl;
		return 1;
	}
return 0;

}