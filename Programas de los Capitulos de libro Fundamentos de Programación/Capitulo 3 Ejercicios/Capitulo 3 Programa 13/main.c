#include <stdio.h>

void main(void)
{
    int I, PRI = 0, SEG = 1, SIG;//Declara cuatro variables de tipo entero: I, PRI, SEG y SIG
    printf("\t %d \t %d", PRI, SEG); //Imprime los valores de PRI y SEG con formato de tabulación (\t) seguido de un número entero (%d)
    for (I = 3; I <= 50; I++)//Inicia un bucle for que inicializa I a 3, luego el bucle se ejecutará mientras I sea menor o igual a 50, e incrementa I en 1 en cada iteración
    {
        SIG = PRI + SEG;//Calcula el valor de SIG sumando los valores de PRI y SEG
        PRI = SEG; //Asigna el valor de SEG a PRI, preparando para la próxima iteración del bucle
        SEG = SIG;//Asigna el valor de SIG a SEG, también preparando para la próxima iteración
        printf("\t %d", SIG); //Imprime el valor de SIG con formato de tabulación
    }
}
