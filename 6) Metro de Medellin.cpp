#include <iostream>

using namespace std;

int main() {
    // Tarifas del metro (ida y vuelta)
    int tarifa, total_anual;
    string tipo_pasaje;
    
    //Pregunto por consola el tipo de pasaje
    cout << "Ingrese el tipo de pasaje que como estudiante, ud usa (frecuente - adulto_mayor - estudiante - discapacitado): " << endl;
    cin >> tipo_pasaje;
    
    //Proceso 1
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
        return 1;
    }
    
    //Declaro variables de apoyo para calcular lo del mes 
    int dias, costo_mes;
    
    cout << "\nGastos mensuales en el metro:" << endl;
    
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
    
    //Calculo el total anual
    total_anual = (12 + 17 + 18 + 16 + 17 + 19 + 16 + 18 + 18 + 16 + 11 + 18) * tarifa;

    //Imprimo el resultado del total anual
    cout << "\n Total pagado en el anio: $" << total_anual << endl;
    
    return 0;
}
