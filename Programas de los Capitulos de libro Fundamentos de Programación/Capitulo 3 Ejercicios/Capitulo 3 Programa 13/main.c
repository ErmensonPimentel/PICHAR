#include <stdio.h>

void main(void)
{
    int I, PRI = 0, SEG = 1, SIG;//Declara cuatro variables de tipo entero: I, PRI, SEG y SIG
    printf("\t %d \t %d", PRI, SEG); //Imprime los valores de PRI y SEG con formato de tabulaci�n (\t) seguido de un n�mero entero (%d)
    for (I = 3; I <= 50; I++)//Inicia un bucle for que inicializa I a 3, luego el bucle se ejecutar� mientras I sea menor o igual a 50, e incrementa I en 1 en cada iteraci�n
    {
        SIG = PRI + SEG;//Calcula el valor de SIG sumando los valores de PRI y SEG
        PRI = SEG; //Asigna el valor de SEG a PRI, preparando para la pr�xima iteraci�n del bucle
        SEG = SIG;//Asigna el valor de SIG a SEG, tambi�n preparando para la pr�xima iteraci�n
        printf("\t %d", SIG); //Imprime el valor de SIG con formato de tabulaci�n
    }
}
