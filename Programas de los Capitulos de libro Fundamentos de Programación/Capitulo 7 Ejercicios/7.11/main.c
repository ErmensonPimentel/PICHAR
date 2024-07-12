#include <stdio.h>
#include <stdlib.h>

void main(void)
{
char p, cad[50]; //se utiliza para imprimir el promedio de una serie de valores calculado como sum / i.
int n; // es una declaración estándar en C que define una variable n capaz de almacenar valores enteros.
printf("\nIngrese la cadena de caracteres (máximo 50): "); //se utiliza para mostrar un mensaje en la consola solicitando al usuario que ingrese una cadena de caracteres.
gets(cad);  //se utiliza para leer una línea de texto desde la entrada estándar (generalmente el teclado) y almacenarla en el arreglo de caracteres cad.
printf("\nIngrese la posición en la cadena que desea verificar: ");  //se utiliza para mostrar un mensaje en la consola solicitando al usuario que ingrese la posición dentro de una cadena de caracteres que desea verificar o acceder.
scanf("%d", &n);  //sirve para leer un número entero ingresado por el usuario desde la entrada estándar (usualmente el teclado) y almacenarlo en la variable n.
if ((n >= 0) && (n < 50))  // es una condición en C que evalúa si el valor de la variable n está dentro del rango de números enteros desde 0 hasta 49
{
p = cad[n-1]; // asigna el valor de la posición n-1 de un arreglo de caracteres (cad) a la variable p.
if (islower(p)) // verifica si el valor almacenado en la variable p es un carácter minúsculo (letra minúscula).
printf("\n%c es una letra minúscula", p);  //imprimirá en la consola un mensaje formateado que indica que el valor almacenado en la variable p es una letra minúscula.
else
printf("\n%c no es una letra minúscula", p); // imprimirá en la consola un mensaje formateado indicando que el valor almacenado en la variable p no es una letra minúscula.
}
else
printf("\nEl valor ingresado de n es incorrecto"); //Imprime un mensaje
}
