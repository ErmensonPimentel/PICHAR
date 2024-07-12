#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int i; //es una declaración en C que define una variable i de tipo entero.
    double d; // en C es una instrucción que define una variable llamada d de tipo double.
    long l; // es una declaración en C que define una variable l de tipo long.
    char cad0[20], *cad1; // define un arreglo de caracteres de tamaño fijo, útil para almacenar y manipular cadenas de caracteres en C, mientras que char *cad1; define un puntero a char que puede apuntar a una cadena de caracteres en la memoria.
    printf("\nIngrese una cadena de caracteres: ");  //usar printf para solicitar al usuario que ingrese una cadena de caracteres en C
    gets(cad0); // se utilizaba anteriormente para leer una línea de texto desde la entrada estándar y almacenarla en un arreglo de caracteres (char[]).
    i = atoi(cad0); //es útil para convertir cadenas de caracteres que representan números en su equivalente entero en C.
    printf("\n%s \t %d", cad0, i+3); // te permite formatear y imprimir varios tipos de datos en C, incluidas cadenas de caracteres y valores numéricos, de manera controlada y flexible.
    printf("\nIngrese una cadena de caracteres: ");  // imprimir un mensaje de solicitud de entrada al usuario en C.
    gets(cad0); // se utilizaba anteriormente para leer una línea de texto desde la entrada estándar y almacenarla en un arreglo de caracteres (char[]).
    printf("n%s \t %.21f ", cad0, d+1.50); // imprimir una cadena de caracteres (cad0) seguida de un número decimal (d + 1.50) con un formato específico en C usando printf()

    d = strtod(cad0, &cad1);  //se utiliza para convertir una cadena de caracteres que representa un número en su equivalente de tipo double.
    printf("\n%s \t %1d ", cad0, 1+10); //imprimir una cadena de caracteres (cad0) seguida de un número entero (1 + 10) con un formato específico en C usando printf()
    puts(cad1); //tilizar la función puts() en C, es importante recordar que esta función se utiliza para imprimir una cadena de caracteres en la consola y espera que el argumento sea un puntero a una cadena de caracteres (char *).
}
