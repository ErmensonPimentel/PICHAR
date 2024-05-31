#include <stdio.h>
#include <math.h>

void main(void)
{
    float X;//Declara una variable flotante llamada X
    int Y;//Declara una variable entera llamada Y
    printf("Ingrese el valor de Y: ");//Muestra un mensaje pidiendo al usuario que ingrese un valor para Y
    scanf("%d", &Y);//Lee un número entero introducido por el usuario y lo guarda en la variable Y
    if (Y < 0|| Y > 50)//Comprueba si Y es menor que 0 o mayor que 50
        X = 0;//Si Y es menor que 0 o mayor que 50, asigna 0 a X
    else
        if (Y <=10)////Si no se cumple la condición anterior y Y es menor o igual a 10, ejecuta el siguiente bloque de código
            X = 4 / Y - Y;//Asigna a X el resultado de la operación
        else
            if (Y <= 25)//Si Y no es menor o igual a 10 pero es menor o igual a 25, ejecuta el siguiente bloque de código
            X = pow(Y, 3) - 12;//Asigna a X el resultado de elevar Y al cubo y luego restar 12
        else//Si no se cumple ninguna de las condiciones anteriores, ejecuta el siguiente bloque de código
            X = pow(Y, 2) + pow(Y, 3) - 18;//Asigna a X el resultado de elevar Y al cuadrado, sumar Y elevado al cubo y luego restar 18
        printf("\n\nY = %d\tX = %8.2f", Y, X);//Imprime en la pantalla los valores de Y y X
}
