#include <stdio.h>
void main(void)
{
    int DIS, TIE;//Declara dos variables enteras para almacenar la distancia entre ciudades y el tiempo de estancia
    float BIL;//Declara una variable flotante para almacenar el costo del billete
    printf("Ingrese la distancia entre ciudades y el tiempo de estancia: ");//Muestra un mensaje pidiendo al usuario ingresar la distancia y el tiempo
    scanf("%d %d", &DIS, &TIE);//Lee los valores de distancia y tiempo del usuario
    if ((DIS*2 > 500) &&(TIE > 10))//Comprueba si la distancia ida y vuelta supera 500 km y el tiempo es mayor a 10 días
        BIL = DIS * 2 * 0.19 * 0.8;// Calcula el costo del billete con un descuento del 20% si se cumplen las condiciones anteriores
    else//Si no se cumplen las condiciones, realiza el siguiente cálculo
        BIL = DIS * 2 * 0.19;//Calcula el costo del billete sin descuento
    printf("\n\nCosto del billete: %7.2f", BIL);//Imprime el costo calculado del billete
}
