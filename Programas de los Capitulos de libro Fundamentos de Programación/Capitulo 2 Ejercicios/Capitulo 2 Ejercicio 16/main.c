#include <stdio.h>

void main(void)
{
    int CLA, CAT, ANT, RES;//Declara cuatro variables enteras: CLA (clave del trabajador), CAT (categor�a), ANT (antig�edad), y RES (resultado)
    printf("\nIngrese la clave, categoria y antiguedad del trabajador: ");//Muestra un mensaje pidiendo al usuario que ingrese la clave, categor�a y antig�edad del trabajador
    scanf("%d %d %d", &CLA, &CAT, &ANT);//Lee tres n�meros enteros del usuario y los almacena en CLA, CAT, y ANT
    switch(CAT)//Comienza una estructura de selecci�n m�ltiple basada en el valor de CAT
    {
    case 3://Si CAT es 3, contin�a con el caso siguiente
        case 4: if (ANT >= 5)
        RES = 1;
        else
            RES = 0;//Si CAT es 3 o 4 y ANT (antig�edad) es mayor o igual a 5 a�os, establece RES en 1 (cumple las condiciones). Si no, establece RES en 0
        break;
        case 2: if (ANT >= 7)
        RES = 1;
        else
            RES = 0;//Si CAT es 2 y ANT es mayor o igual a 7 a�os, establece RES en 1. Si no, establece RES en 0
        break;
        default: RES = 0;//Para cualquier otra categor�a, establece RES en 0 (no cumple las condiciones)
        break;

    }
    if (RES)//Verifica si RES es 1
        printf("\nEl trabajador con clave %d reune las condiciones para el puesto", CLA);//Si RES es 1, imprime que el trabajador cumple las condiciones para el puesto
    else
        printf("\nEl trabajador con la clave %d no reune las condiciones para el puesto", CLA);//Si RES es 0, imprime que el trabajador no cumple las condiciones para el puesto
}
