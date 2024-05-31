#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    float PRO// Declara la variable PRO para almacenar un número
    printf("ingrese el promedio del alumno: ");//Pide al usuario que ingrese el promedio
    scanf("%f", &PRO);//Lee el promedio ingresado y lo guarda en PRO
    if (PRO >= 6.0)// Comprueba si el promedio es 6.0 o mayor
        printf("\nAprobado");//Si el promedio es 6.0 o mayor, muestra "Aprobado"
    else//Si la condición anterior no se cumple, ejecuta el siguiente bloque
        printf("\nReprobado");// Si el promedio es menor de 6.0, muestra "Reprobado"
}
