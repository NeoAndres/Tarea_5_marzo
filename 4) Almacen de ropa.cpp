/******************************************************************************

Un almacén de venta de ropa, tiene las siguientes promociones para sus clientes las cuales consisten en lo siguiente:

Para ventas menores o iguales a 100.000 con pago en efectivo, se hace un descuento del 20%, con tarjeta de crédito, se hace el 10%.

Para ventas mayores a 100.000 y menores o iguales a 200.0000, con pago en efectivo, se realiza un descuento del 30%;
con tarjeta de crédito se hace un descuento del 15%.

Para ventas mayores a 200.000, con pago en efectivo, se hace un descuento del 40%; con tarjeta de crédito, se hace el 20%.
*******************************************************************************/
#include <stdio.h>
#include <iostream> 

int main()
{
    //declaracion de variables
    int valorCompra, valorPagar, metodoPago;
    
    //Preguntando valores por consola
    std::cout << "Ingrese el valor de la compra: " << std::endl;
    std::cin >> valorCompra;
    std::cout << "Como va a pagar (1-Tarjeta, 2-Efectivo), digite un numero " << std::endl;
    std::cin >> metodoPago;
    
    //proceso
    if (valorCompra <= 100000){
        if (metodoPago == 1){
            valorPagar = ((valorCompra * 0.10) - valorCompra) * -1;
        }
        else if (metodoPago ==2){
            valorPagar = ((valorCompra * 0.20) - valorCompra) * -1;
        }
    } else if ( (valorCompra > 100000) && (valorCompra <=200000) ){
        if (metodoPago == 1){
            valorPagar = ((valorCompra * 0.15) - valorCompra) * -1;
        }
        else if (metodoPago ==2){
            valorPagar = ((valorCompra * 0.30) - valorCompra) * -1;
        }
    } else if (valorCompra > 200000){
        if (metodoPago == 1){
            valorPagar = ((valorCompra * 0.20) - valorCompra) * -1;
        }
        else if (metodoPago ==2){
            valorPagar = ((valorCompra * 0.40) - valorCompra) * -1;
        } 
    } 
    //Imprimo la respuesta por consola
    std::cout << "El valor a pagar por las prendas es: " << valorPagar << std::endl;

    return 0;
}