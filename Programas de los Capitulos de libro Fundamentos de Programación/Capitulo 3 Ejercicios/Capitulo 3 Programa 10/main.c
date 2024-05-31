#include <stdio.h>
#include <math.h>

void main(void)
{
    int I, N, NUM, SPA = 0, SIM = 0, CIM = 0;//Declara varias variables de tipo entero: I, N, NUM, SPA, SIM y CIM, inicializ�ndolas a 0
    printf("Ingrese el numero de datos que se van a procesar:\t"); //Muestra en la pantalla un mensaje pidiendo al usuario que ingrese el n�mero de datos que se van a procesar
    scanf("%d", &N); //Lee el n�mero ingresado por el usuario y lo guarda en la variable N
    if (N > 0) //Comprueba si el valor ingresado en N es mayor que 0
    {
        for (I=1; I <= N; I++) //Un bucle que se ejecuta desde 1 hasta el valor de N, incrementando I en cada iteraci�n
        {
            printf("\nIngrese el numero %d: ", I); //Muestra en pantalla un mensaje pidiendo al usuario que ingrese un n�mero, indicando el n�mero de iteraci�n actual
            scanf("%d", &NUM);//Lee el n�mero ingresado por el usuario y lo guarda en la variable NUM
            if (NUM) //Comprueba si el valor de NUM es verdadero (diferente de cero)
                if (pow(-1, NUM) > 0) //Comprueba si el resultado de elevar -1 a la potencia NUM es mayor que 0
                SPA = SPA + NUM; //Si la condici�n del paso 12 es verdadera, suma el valor de NUM a la variable SPA
            else //Si la condici�n del paso 12 es falsa (o sea, si el n�mero es impar)
            {
                SIM = SIM + NUM; //Suma el valor de NUM a la variable SIM
                CIM++; //Incrementa en 1 el valor de CIM
            }
        }
        printf("\n La suma de los numeros pares es: %d", SPA); //Muestra en pantalla la suma de los n�meros pares
        printf("\n El promedio de los numeros impares es: %5.2f", (float)(SIM / CIM));//Muestra en pantalla el promedio de los n�meros impares. Es importante notar que se convierte la divisi�n SIM / CIM a float para obtener un resultado decimal
    }
    else//Si la condici�n del paso 4 es falsa (o sea, si N es menor o igual a 0)
        printf("\n El valor de N es incorrecto");//Muestra en pantalla un mensaje indicando que el valor de N es incorrecto
}
