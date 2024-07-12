#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    char p1; // es utilizado en C para declarar una variable llamada p1 que puede almacenar un solo car�cter
    printf("\nIngrese un caracter para analizar si este es un digito: "); //e utiliza para imprimir un mensaje en la consola que solicita al usuario ingresar un car�cter.
    p1 = getchar(); //se utiliza para leer un solo car�cter desde la entrada est�ndar (normalmente el teclado) y asignarlo a la variable p1, que debe ser de tipo char.
    if (isdigit (p1)) // es utilizado en C para verificar si un car�cter (p1) es un d�gito decimal, permitiendo as� la implementaci�n de l�gica condicional basada en la naturaleza del car�cter ingresado por el usuario.
        printf("%c no es un digito \n", p1); // se utiliza para imprimir un mensaje en la consola que indica que el car�cter almacenado en la variable p1 no es un d�gito.

   else
    printf("%c no es un digito \n", p1); //es utilizado en C para imprimir un mensaje en la consola indicando que el car�cter almacenado en p1 no es un d�gito
   fflush(stdin); // en C no tiene un comportamiento bien definido y su uso no est�ndar puede llevar a comportamientos inesperados en diferentes sistemas.
   printf("\nIngrese un caracter para examinar si este es una letra: ");
   p1 = getchar(); //se utiliza para leer un car�cter desde la entrada est�ndar (normalmente el teclado) y asignarlo a la variable p1, que debe ser de tipo char
   if (isalpha (p1))  //se utiliza para verificar si el car�cter almacenado en la variable p1 es una letra del alfabeto (may�scula o min�scula).
    printf("%c es una letra \n", p1); //se utiliza para imprimir un mensaje en la consola indicando que el car�cter almacenado en la variable p1 es una letra del alfabeto.
   else
    printf("%c no es una letra \n", p1); //se utiliza para imprimir un mensaje en la consola indicando que el car�cter almacenado en la variable p1 no es una letra del alfabeto. Vamos
   fflush(stdin); // en C no tiene un comportamiento bien definido y su uso no est�ndar puede llevar a comportamientos inesperados en diferentes sistemas.
   printf("\nIngrese un caracter para examinar si este es una letra minuscula: "); //se utiliza para imprimir un mensaje en la consola que solicita al usuario ingresar un car�cter
   p1 = getchar(); //se utiliza para leer un car�cter desde la entrada est�ndar (normalmente el teclado) y asignarlo a la variable p1, que debe ser de tipo char
   if (isalpha (p1)) //se esta haciendo una verificaci�n para determinar si el car�cter almacenado en la variable p1 es una letra del alfabeto
    if (islower (p1)) //se esta verificando si el car�cter almacenado en la variable p1 es una letra min�scula del alfabeto.
    printf("%c es una letra minuscula \n", p1); //se utiliza para imprimir un mensaje en la consola indicando que el car�cter almacenado en la variable p1 es una letra min�scula del alfabeto
   else
    printf("%c no es una letra minuscula \n", p1); //se utiliza para imprimir un mensaje en la consola indicando que el car�cter almacenado en la variable p1 no esuna letra min�scula del alfabeto
   else
    printf("%c no es una letra \n", p1); //se utiliza para imprimir un mensaje en la consola indicando que el car�cter almacenado en la variable p1 no es una letra del alfabeto
   fflush(stdin); //en C no tiene un comportamiento bien definido y su uso no est�ndar puede llevar a comportamientos inesperados en diferentes sistemas.
   printf("\nIngrese una letra para convertirla de mayuscula a minuscula: "); //imprimir un mensaje en la consola solicitando al usuario que ingrese una letra del alfabeto.
   p1 = getchar(); //se utiliza para leer un car�cter desde la entrada est�ndar (normalmente el teclado) y asignarlo a la variable p1, que debe ser de tipo char
   if (isalpha (p1)) //se esta haciendo una verificaci�n para determinar si el car�cter almacenado en la variable p1 es una letra del alfabeto
    if (isupper (p1)) //est�s verificando si el car�cter almacenado en la variable p1 es una letra may�scula del alfabeto.
    printf("%c fue convertida de mayuscula a minuscula \n", tolower(p1)); //se utiliza para imprimir un mensaje en la consola indicando que el car�cter convertido de may�scula a min�scula se ha almacenado en la variable p1.
   else
    printf("%c es una letra mayuscula \n", p1); //se utiliza para imprimir un mensaje en la consola indicando que el car�cter almacenado en la variable p1 es una letra may�scula del alfabeto.
   else
    printf("%c no es una letra \n", p1); //se utiliza para imprimir un mensaje en la consola indicando que el car�cter almacenado en la variable p1 no es una letra.
}
