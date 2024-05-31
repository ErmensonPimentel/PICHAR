#include <stdio.h>

void main(void)
{
    int I, J, NUM, SUM, C = 0;//Declara cinco variables de tipo entero: I, J, NUM, SUM y C. Inicializa C con el valor 0.
    printf("\nIngrese el numero limite: "); //Imprime en la consola el mensaje "Ingrese el número límite: "
    scanf("%d", &NUM); //Escanea un número entero ingresado por el usuario y lo guarda en la variable NUM.
    for (I = 1; I <= NUM; I++) //Comienza un bucle que se ejecutará desde I = 1 hasta que I sea menor o igual que NUM, aumentando I en cada iteración.
    {
        SUM = 0; //Inicializa la variable SUM con el valor 0 en cada iteración del bucle exterior
        for (J = 1; J<= (I / 2); J++) //Comienza un bucle anidado que se ejecutará desde J = 1 hasta la mitad de I, aumentando J en cada iteración
            if ((I % J) == 0) //Verifica si I es divisible por J sin dejar residuo.
            SUM += J; //Si I es divisible por J, suma el valor de J a SUM.
        if (SUM == I) //Verifica si SUM es igual a I, lo que indica que I es un número perfecto.
        {
            printf("\n%d es un numero perfecto", I);//Imprime en la consola que el número I es un número perfecto.
            C++; //Incrementa en 1 el valor de C, que cuenta la cantidad de números perfectos encontrados.
        }
    }
    printf("\nEntre 1 y %d hay un %d numeros perfectos", NUM, C); //Imprime en la consola la cantidad de números perfectos encontrados en el rango de 1 a NUM.
}
