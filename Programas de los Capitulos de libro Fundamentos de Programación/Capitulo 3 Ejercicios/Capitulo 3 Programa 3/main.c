#include <stdio.h>

void main(void)
{
    float PAG, SPA; //Declara dos variables de tipo float (n�meros decimales) llamadas PAG y SPA
    SPA = 0; //Inicializa la variable SPA con el valor 0. SPA se usar� para acumular el total de los pagos
    printf("Ingrese el primer pago:\t"); //Imprime el mensaje "Ingrese el primer pago:" en la pantalla, pidiendo al usuario que ingrese un valor
    scanf("%f", &PAG); //Lee un n�mero decimal ingresado por el usuario y lo almacena en la variable PAG
    while (PAG) //Inicia un bucle while que continuar� ejecut�ndose mientras PAG no sea igual a 0
    {
        SPA = SPA + PAG; //Suma el valor de PAG a SPA y almacena el resultado en SPA
        printf("Ingrese el siguiente pago:\t ");
        scanf("%f", &PAG); //Lee el siguiente n�mero decimal ingresado por el usuario y lo almacena en la variable PAG. Si PAG es 0, el bucle while se detendr�
    }
    printf("\nEl total de pagos del mes es: %.2f", SPA); //Imprime el mensaje "Ingrese el siguiente pago:" en la pantalla, pidiendo al usuario que ingrese otro valor
}
