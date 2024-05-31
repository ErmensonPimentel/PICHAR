#include <stdio.h>
#include <math.h>

void main(void)
{
    int OP, T;//Declara las variables OP y T para almacenar números enteros
    float RES;//Declara la variable RES para almacenar un número decimal
    printf("Ingrese la opcion del calculo y el valor entero: ");//Pide al usuario que ingrese una opción y un valor entero
    scanf("%d %d", &OP, &T);//Lee los valores ingresados y los guarda en OP y T
    switch(OP)//Evalúa la variable OP para seleccionar una opción
    {
    case 1://Si OP es 1, calcula RES dividiendo T por 5
        RES = T / 5;
        break;//Termina el caso 1
    case 2://Si OP es 2, calcula RES como T elevado a T
        RES = pow(T,T);
        break;//Termina el caso 2
    case 3:
    case 4://Si OP es 3 o 4, calcula RES como 6 * T / 2
        RES = 6 * T/2;
        break;//Termina el caso 3 y 4
    default://Si OP no es 1, 2, 3 o 4, establece RES en 1
        RES = 1;
        break;//Termina el caso default
    }
    printf("\nResultado: %7.2f", RES);//Muestra el resultado RES con 2 decimales
}
