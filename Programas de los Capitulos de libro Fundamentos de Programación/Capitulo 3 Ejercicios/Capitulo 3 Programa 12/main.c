#include <stdio.h>
#include <math.h>

void main(void)
{
 int NUM;//Esta línea declara una variable de tipo entero llamada NUM. Esta variable se utilizará para almacenar el número ingresado por el usuario
 printf("Ingresa el numero para calcular la serie: "); //Esta línea imprime un mensaje en la pantalla pidiendo al usuario que ingrese un número para calcular la serie de Ulam
 scanf("%d", &NUM); //Esta línea lee un número entero ingresado por el usuario desde el teclado y lo almacena en la variable NUM
 if (NUM > 0) //Esta línea inicia una estructura condicional que verifica si el número ingresado es mayor que 0
 {
     printf("\Serie de ULAM\n");//Esta línea imprime un encabezado indicando que se mostrará la serie de Ulam en la pantalla
     printf("%d \t", NUM);//Esta línea imprime el valor actual de NUM en la pantalla, seguido de un tabulador, lo que separa los números en la serie
     while (NUM != 1) //Esta línea inicia un bucle while que se ejecutará mientras NUM sea diferente de 1
     {
         if (pow( -1, NUM) > 0)//Esta línea verifica si el resultado de elevar -1 a la potencia de NUM es mayor que 0. Esto determina si NUM es par o impar en la serie de Ulam
            NUM = NUM / 2; //Si NUM es par, se divide entre 2
         else//Esta línea indica qué hacer si la condición en la línea 10 no se cumple
            NUM = NUM * 3 + 1;//Si NUM es impar, se multiplica por 3 y se le suma 1
         printf("%d \t", NUM); //Esta línea imprime el valor actual de NUM en la pantalla, seguido de un tabulador
     }
 }
 else//Esta línea indica qué hacer si la condición en la línea 4 no se cumple
    printf("\n NUM debe ser un entero positivo"); //Esta línea imprime un mensaje indicando que el número ingresado debe ser un entero positivo
}
