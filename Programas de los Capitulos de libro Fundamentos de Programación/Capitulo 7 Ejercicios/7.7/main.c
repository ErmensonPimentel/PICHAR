#include <stdio.h>
#include <stdlib.h>

void main(void)
{
int i; //se declara  una variable i de tipo entero (int)
char cad0[20] = "Hola M�xico"; //un arreglo de caracteres cad0 con capacidad para 20 elementos e inicializado con la cadena "Hola M�xico".
char cad1[20] = "Hola Guatemala"; //un arreglo de caracteres cad1 con capacidad para 20 elementos e inicializado con la cadena "Hola Guatemala".
char cad2[20] = "Hola Venezuela"; //un arreglo de caracteres cad2 con capacidad para 20 elementos e inicializado con la cadena "Hola Venezuela".
char cad3[20] = "Hola M�xico";
char *c, c3; //c puede ser usado como un puntero a una cadena de caracteres (char *) y c�mo c3 puede ser usado como una variable char normal.
i = strcmp(cad0, cad1); //se utiliza para comparar dos cadenas de caracteres (char) y asignar el resultado de la comparaci�n a la variable i.
printf("\nResultado de la comparaci�n �cad0 y cad1�: %d", i);
i = strcmp(cad0, cad2); //se utiliza para comparar dos cadenas de caracteres (char) y asignar el resultado de la comparaci�n a la variable i.
printf("\nResultado de la comparaci�n �cad0 y cad2�: %d", i); //imprimir el resultado de la comparaci�n entre las cadenas cad0 y cad2 utilizando la variable i.
i = strcmp(cad0, cad3); //se utiliza para comparar dos cadenas de caracteres (char) y asignar el resultado de la comparaci�n a la variable i.
printf("\nResultado de la comparaci�n �cad0 y cad3�: %d", i);
i = strlen(cad0); // asigna la longitud de la cadena de caracteres almacenada en cad0 a la variable i utilizando la funci�n strlen().
printf("\nLongitud cadena cad0: %d", i);
i = strlen(cad1); // asigna la longitud de la cadena de caracteres almacenada en cad1 a la variable i utilizando la funci�n strlen().
printf("\nLongitud cadena cad1: %d", i); //se utiliza para imprimir la longitud de la cadena de caracteres almacenada en cad1 utilizando el valor entero almacenado en la variable i.
c = strchr(cad1, 'G'); //asigna a la variable c la direcci�n de memoria del primer car�cter 'G' encontrado en la cadena cad1, utilizando la funci�n strchr().
if (c != NULL) //verificamos si el puntero c apunta a una direcci�n de memoria v�lida, es decir, si c no es NULL.
{
c3 = *c;
printf("\nEl valor de c3 es: %c", c3);
}
c = strchr(cad2, 'V');
if (c != NULL)
{
c3 = *c;
printf("\nEl valor de c3 es: %c", c3);
}
}
