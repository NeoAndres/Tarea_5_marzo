#include <stdio.h>
#include <iostream> 

int main()
{
    //declaracion de variables
    int barrio1, barrio2, barrio3, valorPagar;
    
    //Preguntando valores por consola
    std::cout << "A que barrio se dirige la primera carga (1-6)" << std::endl;
    std::cin >> barrio1;
    std::cout << "A que barrio se dirige la segunda carga (1-6)" << std::endl;
    std::cin >> barrio2;
    std::cout << "A que barrio se dirige la tercera carga (1-6)" << std::endl;
    std::cin >> barrio3;
    
    //proceso
    if (barrio1 != barrio2 && barrio2 != barrio3 && barrio3 !=barrio1){ //todos son diferentes
        valorPagar = 30000*3; // 90.000
    } else if (barrio1 ==barrio2 && barrio2 == barrio3 ){ //todos son iguales
        valorPagar = (30000*3)*0.30; // 27.000
    } else if (barrio1 ==barrio2 || barrio2 == barrio3 || barrio1 ==barrio3){ //dos son iguales
        valorPagar = ((30000*2)*0.15)+30000; // 39.000
    }
    //Imprimo la respuesta por consola
    std::cout << "El valor a pagar por el delivery de los 3 paquetes es: " << valorPagar << std::endl;

    return 0;
}