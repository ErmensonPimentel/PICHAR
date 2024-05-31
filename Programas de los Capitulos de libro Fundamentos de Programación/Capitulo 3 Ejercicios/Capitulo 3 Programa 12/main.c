#include <stdio.h>
#include <math.h>

void main(void)
{
 int NUM;//Esta l�nea declara una variable de tipo entero llamada NUM. Esta variable se utilizar� para almacenar el n�mero ingresado por el usuario
 printf("Ingresa el numero para calcular la serie: "); //Esta l�nea imprime un mensaje en la pantalla pidiendo al usuario que ingrese un n�mero para calcular la serie de Ulam
 scanf("%d", &NUM); //Esta l�nea lee un n�mero entero ingresado por el usuario desde el teclado y lo almacena en la variable NUM
 if (NUM > 0) //Esta l�nea inicia una estructura condicional que verifica si el n�mero ingresado es mayor que 0
 {
     printf("\Serie de ULAM\n");//Esta l�nea imprime un encabezado indicando que se mostrar� la serie de Ulam en la pantalla
     printf("%d \t", NUM);//Esta l�nea imprime el valor actual de NUM en la pantalla, seguido de un tabulador, lo que separa los n�meros en la serie
     while (NUM != 1) //Esta l�nea inicia un bucle while que se ejecutar� mientras NUM sea diferente de 1
     {
         if (pow( -1, NUM) > 0)//Esta l�nea verifica si el resultado de elevar -1 a la potencia de NUM es mayor que 0. Esto determina si NUM es par o impar en la serie de Ulam
            NUM = NUM / 2; //Si NUM es par, se divide entre 2
         else//Esta l�nea indica qu� hacer si la condici�n en la l�nea 10 no se cumple
            NUM = NUM * 3 + 1;//Si NUM es impar, se multiplica por 3 y se le suma 1
         printf("%d \t", NUM); //Esta l�nea imprime el valor actual de NUM en la pantalla, seguido de un tabulador
     }
 }
 else//Esta l�nea indica qu� hacer si la condici�n en la l�nea 4 no se cumple
    printf("\n NUM debe ser un entero positivo"); //Esta l�nea imprime un mensaje indicando que el n�mero ingresado debe ser un entero positivo
}
