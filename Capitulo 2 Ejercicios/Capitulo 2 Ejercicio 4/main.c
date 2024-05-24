#include <stdio.h>
#include <stdlib.h>

void main (void)
{
    float PRE, NPR;//Declara las variables PRE y NPR para almacenar números decimales
    printf("Ingrese el precio del producto: ");//Pide al usuario que ingrese el precio del producto
    scanf("%f", &PRE);//Lee el precio ingresado y lo guarda en PRE
    if (PRE < 1500)//Comprueba si el precio es menor que 1500
        NPR = PRE * 1.11;//Si el precio es menor que 1500, calcula el nuevo precio aumentando el original en un 11%
    else//Si la condición anterior no se cumple, ejecuta el siguiente bloque
        NPR = PRE * 1.08;//Si el precio es 1500 o mayor, calcula el nuevo precio aumentando el original en un 8%
    printf("\nNuevo precio del producto: %8.2f", NPR);//Muestra el nuevo precio con 2 decimales
}
