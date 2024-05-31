#include <stdio.h>

void main(void)
{
    float PAG, SPA = 0; //Declara dos variables de tipo float. PAG almacenará el pago actual ingresado por el usuario, y SPA acumulará la suma de todos los pagos. SPA se inicializa en 0
    printf("Ingrese el primer pago:\t"); //Imprime en la pantalla el mensaje "Ingrese el primer pago:", solicitando al usuario que ingrese el primer pago
    scanf("%f", &PAG); //Lee un valor de tipo float ingresado por el usuario y lo almacena en la variable PAG
    do//Inicia un bucle do, que ejecutará el bloque de código al menos una vez
    {
        SPA = SPA + PAG; //Suma el valor de PAG a SPA y almacena el resultado en SPA. Esto acumula el pago actual al total de pagos
        printf("Ingrese el siguiente pago   -0 para terminar-:\t "); //Imprime en la pantalla el mensaje "Ingrese el siguiente pago -0 para terminar-:", solicitando al usuario que ingrese el siguiente pago o 0 para terminar
        scanf("%f", &PAG); //Lee el siguiente valor de tipo float ingresado por el usuario y lo almacena en la variable PAG
    }
    while (PAG);//El bucle do-while se repite mientras PAG no sea 0. Cuando PAG es 0, el bucle termina
    printf("\nEl total de pagos del mes es: %.2f", SPA); //Imprime el total acumulado de los pagos (SPA) en la pantalla, con dos decimales de precisión
}
