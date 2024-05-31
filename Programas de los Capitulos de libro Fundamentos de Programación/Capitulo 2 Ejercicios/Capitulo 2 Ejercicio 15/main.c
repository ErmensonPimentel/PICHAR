#include <stdio.h>

void main(void)
{
    int TRA, EDA, DIA;//Declara tres variables enteras: TRA (tipo de tratamiento), EDA (edad), y DIA (días)
    float COS;//Declara una variable flotante COS para almacenar el costo
    printf("Ingrese tipo de tratamiento edad y dias: ");//Muestra un mensaje pidiendo al usuario que ingrese el tipo de tratamiento, la edad y los días
    scanf("%d %d %d", &TRA, &EDA, &DIA);//Lee tres números enteros del usuario y los almacena en TRA, EDA, y DIA
    switch(TRA)//Comienza una estructura de selección múltiple basada en el valor de TRA
    {
        case 1: COS = DIA * 2800; break;//Si TRA es 1, calcula el costo como DIA multiplicado por 2800 y sale del switch
        case 2: COS = DIA * 1950; break;//Si TRA es 2, calcula el costo como DIA multiplicado por 1950
        case 3: COS = DIA * 2500; break;//Si TRA es 3, calcula el costo como DIA multiplicado por 2500
        case 4: COS = DIA * 1150; break;//Si TRA es 4, calcula el costo como DIA multiplicado por 1150
        default: COS = -1; break;//Si TRA no coincide con ninguno de los casos anteriores, establece COS en -1
    }
    if (COS != -1)//Verifica si COS no es -1 (es decir, si la clave del tratamiento es válida)
    {
        if (EDA >= 60)//Si la edad (EDA) es mayor o igual a 60 años, aplica un descuento del 25%
            COS = COS * 0.75;//Si la edad (EDA) es mayor o igual a 60 años, aplica un descuento del 25%
            else
            if (EDA <= 25)//Si la edad (EDA) es menor o igual a 25 años, aplica un descuento del 15%
            COS = COS *0.85;//Calcula el costo con un descuento del 15%
        printf("\nClave tratamiento: %d\t Dias: %d\t Costo total: %8.2f", TRA, DIA, COS);//Imprime la clave del tratamiento, los días y el costo total con dos decimales y un ancho de 8 caracteres
    }
        else
            printf("\nLa clave del tratamiento es incorrecta");//Si COS es -1, imprime un mensaje indicando que la clave del tratamiento es incorrecta
}
