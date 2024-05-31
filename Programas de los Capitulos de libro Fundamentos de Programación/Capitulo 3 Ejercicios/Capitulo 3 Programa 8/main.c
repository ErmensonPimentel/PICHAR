#include <stdio.h>

void main(void)
{
    int I, NUM;//Se declaran dos variables enteras I y NUM
    long FAC;//Se declara una variable FAC de tipo long (entero largo)
    printf("\nIngrese el numero: ");//Se imprime el mensaje "\nIngrese el numero: " en la pantalla para pedir al usuario que ingrese un número
    scanf("%d", &NUM); //Se lee un número entero ingresado por el usuario y se almacena en la variable NUM
    if (NUM >= 0) //Se verifica si el número ingresado NUM es mayor o igual a cero
    {
        FAC = 1//Se inicializa la variable FAC a 1
        for (I=1; I <= NUM; I++) //Se inicia un bucle for donde I empieza en 1 y se incrementa hasta que sea igual a NUM
         FAC *= I;//Dentro del bucle, se multiplica FAC por I y se almacena el resultado en FAC (esto calcula el factorial)
        printf("\El factorial de %d es: %ld", NUM, FAC); //Después del bucle, se imprime el resultado del factorial, mostrando NUM y FAC
    }
    else//Si la condición del if no se cumple (es decir, si NUM es menor que 0), se ejecuta el bloque elsE
        printf("\nError en el dato ingresado");//Se imprime un mensaje de error indicando que el dato ingresado es incorrecto
}
