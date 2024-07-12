#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    char p1; // es utilizado en C para declarar una variable llamada p1 que puede almacenar un solo carácter
    printf("\nIngrese un caracter para analizar si este es un digito: "); //e utiliza para imprimir un mensaje en la consola que solicita al usuario ingresar un carácter.
    p1 = getchar(); //se utiliza para leer un solo carácter desde la entrada estándar (normalmente el teclado) y asignarlo a la variable p1, que debe ser de tipo char.
    if (isdigit (p1)) // es utilizado en C para verificar si un carácter (p1) es un dígito decimal, permitiendo así la implementación de lógica condicional basada en la naturaleza del carácter ingresado por el usuario.
        printf("%c no es un digito \n", p1); // se utiliza para imprimir un mensaje en la consola que indica que el carácter almacenado en la variable p1 no es un dígito.

   else
    printf("%c no es un digito \n", p1); //es utilizado en C para imprimir un mensaje en la consola indicando que el carácter almacenado en p1 no es un dígito
   fflush(stdin); // en C no tiene un comportamiento bien definido y su uso no estándar puede llevar a comportamientos inesperados en diferentes sistemas.
   printf("\nIngrese un caracter para examinar si este es una letra: ");
   p1 = getchar(); //se utiliza para leer un carácter desde la entrada estándar (normalmente el teclado) y asignarlo a la variable p1, que debe ser de tipo char
   if (isalpha (p1))  //se utiliza para verificar si el carácter almacenado en la variable p1 es una letra del alfabeto (mayúscula o minúscula).
    printf("%c es una letra \n", p1); //se utiliza para imprimir un mensaje en la consola indicando que el carácter almacenado en la variable p1 es una letra del alfabeto.
   else
    printf("%c no es una letra \n", p1); //se utiliza para imprimir un mensaje en la consola indicando que el carácter almacenado en la variable p1 no es una letra del alfabeto. Vamos
   fflush(stdin); // en C no tiene un comportamiento bien definido y su uso no estándar puede llevar a comportamientos inesperados en diferentes sistemas.
   printf("\nIngrese un caracter para examinar si este es una letra minuscula: "); //se utiliza para imprimir un mensaje en la consola que solicita al usuario ingresar un carácter
   p1 = getchar(); //se utiliza para leer un carácter desde la entrada estándar (normalmente el teclado) y asignarlo a la variable p1, que debe ser de tipo char
   if (isalpha (p1)) //se esta haciendo una verificación para determinar si el carácter almacenado en la variable p1 es una letra del alfabeto
    if (islower (p1)) //se esta verificando si el carácter almacenado en la variable p1 es una letra minúscula del alfabeto.
    printf("%c es una letra minuscula \n", p1); //se utiliza para imprimir un mensaje en la consola indicando que el carácter almacenado en la variable p1 es una letra minúscula del alfabeto
   else
    printf("%c no es una letra minuscula \n", p1); //se utiliza para imprimir un mensaje en la consola indicando que el carácter almacenado en la variable p1 no esuna letra minúscula del alfabeto
   else
    printf("%c no es una letra \n", p1); //se utiliza para imprimir un mensaje en la consola indicando que el carácter almacenado en la variable p1 no es una letra del alfabeto
   fflush(stdin); //en C no tiene un comportamiento bien definido y su uso no estándar puede llevar a comportamientos inesperados en diferentes sistemas.
   printf("\nIngrese una letra para convertirla de mayuscula a minuscula: "); //imprimir un mensaje en la consola solicitando al usuario que ingrese una letra del alfabeto.
   p1 = getchar(); //se utiliza para leer un carácter desde la entrada estándar (normalmente el teclado) y asignarlo a la variable p1, que debe ser de tipo char
   if (isalpha (p1)) //se esta haciendo una verificación para determinar si el carácter almacenado en la variable p1 es una letra del alfabeto
    if (isupper (p1)) //estás verificando si el carácter almacenado en la variable p1 es una letra mayúscula del alfabeto.
    printf("%c fue convertida de mayuscula a minuscula \n", tolower(p1)); //se utiliza para imprimir un mensaje en la consola indicando que el carácter convertido de mayúscula a minúscula se ha almacenado en la variable p1.
   else
    printf("%c es una letra mayuscula \n", p1); //se utiliza para imprimir un mensaje en la consola indicando que el carácter almacenado en la variable p1 es una letra mayúscula del alfabeto.
   else
    printf("%c no es una letra \n", p1); //se utiliza para imprimir un mensaje en la consola indicando que el carácter almacenado en la variable p1 no es una letra.
}
