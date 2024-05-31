#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    float PRE, NPR; //Declara las variables PRE y NPR
    printf("ingrese el precio del producto: "); //Muestra el mensaje para ingresar el precio
    scanf("%f", &PRE);//Lee el precio ingresado por el usuario y lo guarda en PRE
    if (PRE < 1500)//Comprueba si el precio es menor que 1500
    {
        NPR = PRE * 1.11;// Calcula el nuevo precio aumentando el original en un 11%
        printf("\nNuevo precio: %7.2f",NPR);//Muestra el nuevo precio con 2 decimales
    }
}
