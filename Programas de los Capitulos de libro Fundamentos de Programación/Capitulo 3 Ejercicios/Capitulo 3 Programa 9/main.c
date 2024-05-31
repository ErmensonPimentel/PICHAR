#include <stdio.h>

void main(void)
{
    int I = 2, CAM = 1;//Define dos variables enteras (int). I se inicializa a 2 y CAM se inicializa a 1
    long SSE = 0;//Define una variable de tipo long llamada SSE e inicialízala en 0. Esta variable se usará para almacenar una suma
    while (I <= 2500)//Inicia un bucle while que se ejecutará mientras I sea menor o igual a 2500
    {
        SSE = SSE + I;//Suma el valor actual de I a SSE y almacena el resultado en SSE
        printf("\t %d", I); //Imprime el valor actual de I con un tabulador antes (\t)
        if (CAM)//Verifica el valor de CAM
        {
            I += 5;
            CAM--;//Si CAM es diferente de 0 (verdadero), suma 5 a I y decrementa CAM en 1
        }
        else
        {
            I += 3;
            CAM++;//Si CAM es 0 (falso), suma 3 a I y aumenta CAM en 1
        }
    }
    printf("\nLa suma de la serie es: %ld", SSE);//Imprime un mensaje que muestra la suma de la serie almacenada en SSE
}
