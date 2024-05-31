#include <stdio.h>

void main(void)
{
    int R1 = 0, R2 = 0, R3 = 0, R4 = 0, R5= 0;//Se definen cinco variables enteras (int) llamadas R1, R2, R3, R4 y R5, inicializadas todas a 0. Estas variables se utilizarán para contar las calificaciones en diferentes rangos
    float CAL; //Se declara una variable flotante (float) llamada CAL que se utilizará para almacenar la calificación del alumno
    printf("Ingresa la calificacion del alumno: "); //Se muestra en la consola un mensaje pidiendo al usuario que ingrese la calificación del alumno
    scanf("%f", &CAL);//Se lee la calificación ingresada por el usuario y se almacena en la variable CAL
    while (CAL != -1) //Comienza un bucle while que se repetirá mientras la calificación ingresada no sea igual a -1
    {
        if (CAL < 4) //Se comprueba si la calificación es menor que 4
            R1++; //Si la calificación es menor que 4, se incrementa en uno el valor de R1, que cuenta las calificaciones en el rango de 0 a 3.99
        else
            if (CAL < 6)//Si la calificación no es menor que 4, pero es menor que 6, se ejecuta este bloque
                R2++;//Si la calificación es menor que 6, se incrementa en uno el valor de R2, que cuenta las calificaciones en el rango de 4 a 5.99
            else
                if (CAL < 8)//Si la calificación no es menor que 6 pero es menor que 8, se ejecuta este bloque
                    R3++;//Si la calificación es menor que 8, se incrementa en uno el valor de R3, que cuenta las calificaciones en el rango de 6 a 7.99
                else
                    if (CAL < 9)//Si la calificación no es menor que 8 pero es menor que 9, se ejecuta este bloque
                        R4++;//Si la calificación es menor que 9, se incrementa en uno el valor de R4, que cuenta las calificaciones en el rango de 8 a 8.99
                    else//Si la calificación no es menor que 9, se ejecuta este bloque
                        R5++;//Si la calificación no se encuentra en ninguno de los rangos anteriores (es decir, es 9 o mayor), se incrementa en uno el valor de R5, que cuenta las calificaciones en el rango de 9 a 10
        printf("Ingresa la calificacion del alumno: ");//Se solicita al usuario ingresar otra calificación para continuar el bucle
        scanf("%f", &CAL);//Se lee la próxima calificación ingresada por el usuario y se almacena en la variable CAL
    }
    printf("\n0..3.99 =%d", R1);
    printf("\n4..5.99 =%d", R2);
    printf("\n6..7.99 =%d", R3);
    printf("\n8..8.99 =%d", R4);
    printf("\n9..10   =%d", R5);
}
