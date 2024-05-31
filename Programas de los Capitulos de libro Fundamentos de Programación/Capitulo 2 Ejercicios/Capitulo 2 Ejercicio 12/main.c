#include <stdio.h>
#include <math.h>

void main(void)
{
    int T, P, N;//Declara tres variables enteras T, P, y N
    printf("Ingrese los valores de T, P y N: ");//Muestra un mensaje solicitando al usuario que introduzca valores para T, P, y N
    scanf("%d %d %d", &T, & P, &N);//Lee tres números enteros del usuario y los almacena en T, P, y N respectivamente
    if (P != 0)//Verifica si P es diferente de cero para evitar una división por cero en los cálculos siguientes
    {
        if (pow(T / P, N) ==    (pow(T, N) / pow(P, N)))
                printf("\nSe comprueba la igualdad");//Si la igualdad es verdadera, imprime un mensaje que dice que la igualdad se comprueba
                else
                    printf("\nNo se comprueba la igualdad");//Si la igualdad no es verdadera, imprime un mensaje que dice que la igualdad no se comprueba
        }
else printf("\nP tiene que ser diferente de cero");//Si P es cero, imprime un mensaje indicando que P debe ser diferente de cero para realizar la operación
}
