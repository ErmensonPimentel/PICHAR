#include <stdio.h>

void main(void) //Define la función principal del programa. void indica que no devuelve ningún valor
{
    int I; //Declara una variable I
    float SAL, NOM;//Declara dos variables de tipo float: SAL para almacenar el salario ingresado y NOM para almacenar la suma total de los salarios
    NOM = 0;//Inicializa la variable NOM a 0. Esto significa que la suma total de los salarios empieza en cero
    for (I=1; I<=15; I++)//Inicia un bucle for que se ejecuta 15 veces, desde I=1 hasta I=15. I aumenta en 1 con cada iteración
    {
        printf("\Ingrese el salario del profesor%d:\t", I); //Muestra un mensaje en la pantalla solicitando el salario del profesor número I
        scanf("%f", &SAL); //Lee un valor flotante (float) ingresado por el usuario y lo almacena en la variable SAL
        NOM = NOM + SAL; //Suma el valor de SAL a NOM, actualizando la suma total de los salarios
    }
    printf("\nEl total de la nomina es: %.2f", NOM); //Muestra en la pantalla el valor total acumulado de los salarios (NOM), formateado con dos decimales
}
