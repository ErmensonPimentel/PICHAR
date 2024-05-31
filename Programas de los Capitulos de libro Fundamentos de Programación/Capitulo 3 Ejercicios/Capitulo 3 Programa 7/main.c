#include <stdio.h>

void main(void)
{
    int I, N;//Declara dos variables enteras (int): I (que se usará como contador en el bucle) y N (para almacenar el número de lanzamientos)
    float LAN, SLA = 0; //Declara dos variables de tipo flotante (float): LAN (para almacenar el valor de cada lanzamiento) y SLA (para la suma acumulada de los lanzamientos, inicializada a 0)
    do//Inicia un bucle do-while que se ejecutará al menos una vez
    {
        printf("Ingrese el numero de lanzamientos:\t");//Muestra el mensaje "Ingrese el numero de lanzamientos:" en la consola
        scanf("%d", &N);//Lee un valor entero ingresado por el usuario y lo almacena en la variable N
    }
    while (N < 1 || N > 11); //Repite el bucle do-while mientras N sea menor que 1 o mayor que 11, asegurándose de que N esté en el rango de 1 a 11
    for (I=1; I<=N; I++)//Inicia un bucle for que se ejecuta desde I = 1 hasta I sea menor o igual a N
    {
        printf("\nIngrese el lanzamiento %d: ", I);//Muestra el mensaje "Ingrese el lanzamiento X:" en la consola, donde X es el valor actual de I
        scanf("%f", &LAN);//Lee un valor flotante ingresado por el usuario y lo almacena en la variable LAN
        SLA = SLA + LAN;//Suma el valor de LAN a la variable SLA (acumulando los lanzamientos)
    }
    SLA = SLA / N;//Calcula el promedio de los lanzamientos dividiendo SLA (la suma de los lanzamientos) por N (el número de lanzamientos)
    printf("\nEl promedio de lanzamientoss es: %.2f", SLA);//Muestra el promedio de los lanzamientos en la consola con dos decimales
}
