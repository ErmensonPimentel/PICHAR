#include <stdio.h>
#include <math.h>

void main(void)
{
    int NUM;//NUM es una variable de tipo entero que almacena el n�mero que el usuario introduce
    printf("Ingrese el numero: ");//Pide al usuario que introduzca un valor para la variable NUM
    scanf("%d", &NUM);
    if (NUM == 0)
        printf("\nNulo");//Comprueba si NUM es igual a cero, si es as� imprime Nulo
    else//Si el n�mero no es cero, entra en otra condici�n
        if (pow (-1, NUM) > 0)
        printf("\nPar");////Si el resultado es mayor que 0, significa que el exponente es par, entonces imprimer par
        else
            printf("\nImpar");//Si el resultado de pow(-1, NUM) es menor o igual a 0, entonces imprimer impar

}
