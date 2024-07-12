#include <stdio.h>
#include <stdlib.h>

void main(void)
{
char p, cad[50]; //se utiliza para imprimir el promedio de una serie de valores calculado como sum / i.
int n; // es una declaraci�n est�ndar en C que define una variable n capaz de almacenar valores enteros.
printf("\nIngrese la cadena de caracteres (m�ximo 50): "); //se utiliza para mostrar un mensaje en la consola solicitando al usuario que ingrese una cadena de caracteres.
gets(cad);  //se utiliza para leer una l�nea de texto desde la entrada est�ndar (generalmente el teclado) y almacenarla en el arreglo de caracteres cad.
printf("\nIngrese la posici�n en la cadena que desea verificar: ");  //se utiliza para mostrar un mensaje en la consola solicitando al usuario que ingrese la posici�n dentro de una cadena de caracteres que desea verificar o acceder.
scanf("%d", &n);  //sirve para leer un n�mero entero ingresado por el usuario desde la entrada est�ndar (usualmente el teclado) y almacenarlo en la variable n.
if ((n >= 0) && (n < 50))  // es una condici�n en C que eval�a si el valor de la variable n est� dentro del rango de n�meros enteros desde 0 hasta 49
{
p = cad[n-1]; // asigna el valor de la posici�n n-1 de un arreglo de caracteres (cad) a la variable p.
if (islower(p)) // verifica si el valor almacenado en la variable p es un car�cter min�sculo (letra min�scula).
printf("\n%c es una letra min�scula", p);  //imprimir� en la consola un mensaje formateado que indica que el valor almacenado en la variable p es una letra min�scula.
else
printf("\n%c no es una letra min�scula", p); // imprimir� en la consola un mensaje formateado indicando que el valor almacenado en la variable p no es una letra min�scula.
}
else
printf("\nEl valor ingresado de n es incorrecto"); //Imprime un mensaje
}
