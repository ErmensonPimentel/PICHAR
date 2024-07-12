#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    char p1, p2, p3 = '$';  //define tres variables de tipo char: p1, p2 y p3.
    printf ("\Ingrese un caracter: "); //el mensaje es "Ingrese un caracter".
    p1=getchar(); //p1 = getchar(); es una forma com�n de capturar un �nico car�cter desde la entrada est�ndar en C y asignarlo a una variable para su posterior procesamiento en el programa.
    putchar(p1); //putchar(p1); es una forma de imprimir un car�cter espec�fico en la consola en C, utilizando la variable p1 que contiene el car�cter que queremos mostrar.
    printf("\n"); //es utilizado para imprimir un salto de l�nea en la consola, asegurando que el pr�ximo texto impreso comience en una nueva l�nea.
    printf("\nEl caracter p3 es: "); //es utilizado para imprimir un mensaje en la consola
    printf("\n"); //es utilizado para imprimir un salto de l�nea en la consola
    printf("\nIngrese otro caracter: ");  //se utiliza para imprimir un mensaje en la consola que solicita al usuario ingresar un car�cter.
    fflush(stdin); //se utiliza para limpiar o "vaciar" el b�fer de entrada (stdin), que es la entrada est�ndar del programa.
    scanf("%c", p2); //se utiliza para leer un �nico car�cter desde la entrada est�ndar (usualmente el teclado) y almacenarlo en la direcci�n de memoria apuntada por la variable p2.
    printf("%c", p2);  //s utilizado para imprimir el valor de una variable de tipo char en la consola en forma de car�cter, permitiendo visualizar caracteres espec�ficos almacenados en variables en programas escritos en C.
}
