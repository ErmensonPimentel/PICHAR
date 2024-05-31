#include <stdio.h>
#include <math.h>
void main(void)
{
    float RES;
    int R, T, Q;//RES como flotante para almacenar el resultado de una expresión matemática y R, T, Q como enteros para los valores de entrada
    printf("ingrese los valores de R, T y Q: ");//Solicita al usuario que ingrese tres valores enteros
    scanf("%d %d %d", &R, &T, &Q);//Lee los tres valores enteros proporcionados por el usuario y los asigna a las variables R, T, y Q
    RES = pow (R, 4) - pow(T, 3) + 4 * pow(Q, 2);// Calcula RES como el resultado de elevar R a la cuarta potencia, restarle T elevado a la tercera potencia, y sumarle cuatro veces Q elevado al cuadrado
    if (RES < 820)//Verifica si el valor de RES es menor que 820
        printf("\nR = %d\tT = %d\t Q = %d", R, T, Q);//Si la condición es verdadera, imprime los valores de R, T, y Q

}
