#include <stdio.h>
#include <math.h>

void main(void)
{
    int NUM; //Declara una variable entera llamada NUM
    long CUA, SUC = 0; //Declara dos variables de tipo long llamadas CUA y SUC. SUC se inicializa en 0
    printf("\nIngrese un numero entero -0 para terminar-:\t"); //Muestra un mensaje en pantalla pidiendo al usuario que ingrese un número entero. El mensaje dice que ingrese "0" para terminar
    scanf("%d", &NUM); //Lee un número entero ingresado por el usuario y lo almacena en la variable NUM
    while (NUM) //Inicia un bucle while que se ejecuta mientras NUM no sea cero
    {
        CUA = pow (NUM, 2); //Calcula el cuadrado de NUM usando la función pow y almacena el resultado en CUA
        printf("%d al cubo es %ld", NUM, CUA); //Muestra en pantalla el número ingresado y su cuadrado
        SUC = SUC + CUA; //Suma el cuadrado calculado (CUA) a la variable SUC
        printf("\nIngrese un numero entero -0 para terminar-:\t");//Muestra nuevamente el mensaje en pantalla pidiendo al usuario que ingrese otro número entero
        scanf("%d", NUM); //Lee el nuevo número ingresado por el usuario y lo almacena en NUM. El bucle se repetirá si NUM no es cero
    }
    printf("\nLa suma de los cuadrados es %ld", SUC); //Muestra en pantalla la suma de todos los cuadrados calculados
}
