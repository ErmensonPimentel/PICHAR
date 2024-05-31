#include <stdio.h>
void main(void)
{
    int CLA, TIE;//Declara dos variables enteras: CLA para la clave y TIE para el tiempo
    float COS;//Declara una variable flotante COS para el costo
    printf("Ingresa la clave y el tiempo: ");//Muestra un mensaje pidiendo al usuario que ingrese la clave y el tiempo
    scanf("%d %d", &CLA, &TIE);//Lee dos números enteros del usuario y los almacena en CLA y TIE
    switch(CLA)//Comienza una estructura de selección múltiple basada en el valor de CLA
    {
    case 1:
        COS = TIE * 0.13 / 60;//Si CLA es 1, calcula el costo como el tiempo multiplicado por 0.13 y dividido por 60, luego sale del switch
        break;
    case 2:
        COS = TIE * 0.11 / 60;//Si CLA es 2, calcula el costo como el tiempo multiplicado por 0.11 y dividido por 60
        break;
    case 5:
        COS = TIE * 0.22 / 60;//Si CLA es 5, calcula el costo como el tiempo multiplicado por 0.22 y dividido por 60
        break;
    case 6:
        COS = TIE * 0.19 / 60;//Si CLA es 6, calcula el costo como el tiempo multiplicado por 0.19 y dividido por 60
        break;
    case 7://Si CLA es 7, continúa con el siguiente caso
    case 9:
        COS = TIE * 0.17 / 60;//Si CLA es 7 o 9, calcula el costo como el tiempo multiplicado por 0.17 y dividido por 60
        break;
    case 10:
        COS = TIE * 0.20 / 60;//Si CLA es 10, calcula el costo como el tiempo multiplicado por 0.20 y dividido por 60
        break;
    case 15:
        COS = TIE * 0.39 / 60;//Si CLA es 15, calcula el costo como el tiempo multiplicado por 0.39 y dividido por 60
        break;
    case 20:
        COS = TIE * 0.28 / 60;//Si CLA es 20, calcula el costo como el tiempo multiplicado por 0.28 y dividido por 60
        break;
    default :
        COS = -1;
        break;//Si CLA no coincide con ninguno de los casos anteriores, establece COS en -1
    }
    if (COS != -1)//Verifica si COS no es -1
        printf("\n\nClave: %d\tTiempo: %d\tCosto: %6.2f", CLA, TIE, COS);//Si COS no es -1, imprime la clave, el tiempo y el costo
    else
        printf("\nError en la clave");//Si COS es -1, imprime un mensaje de error indicando que la clave es incorrecta
}
