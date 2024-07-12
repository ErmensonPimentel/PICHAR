#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    char p1, p2, p3 = '$';  //define tres variables de tipo char: p1, p2 y p3.
    printf ("\Ingrese un caracter: "); //el mensaje es "Ingrese un caracter".
    p1=getchar(); //p1 = getchar(); es una forma común de capturar un único carácter desde la entrada estándar en C y asignarlo a una variable para su posterior procesamiento en el programa.
    putchar(p1); //putchar(p1); es una forma de imprimir un carácter específico en la consola en C, utilizando la variable p1 que contiene el carácter que queremos mostrar.
    printf("\n"); //es utilizado para imprimir un salto de línea en la consola, asegurando que el próximo texto impreso comience en una nueva línea.
    printf("\nEl caracter p3 es: "); //es utilizado para imprimir un mensaje en la consola
    printf("\n"); //es utilizado para imprimir un salto de línea en la consola
    printf("\nIngrese otro caracter: ");  //se utiliza para imprimir un mensaje en la consola que solicita al usuario ingresar un carácter.
    fflush(stdin); //se utiliza para limpiar o "vaciar" el búfer de entrada (stdin), que es la entrada estándar del programa.
    scanf("%c", p2); //se utiliza para leer un único carácter desde la entrada estándar (usualmente el teclado) y almacenarlo en la dirección de memoria apuntada por la variable p2.
    printf("%c", p2);  //s utilizado para imprimir el valor de una variable de tipo char en la consola en forma de carácter, permitiendo visualizar caracteres específicos almacenados en variables en programas escritos en C.
}
