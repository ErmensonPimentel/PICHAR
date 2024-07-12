#include <stdio.h>
#include <stdlib.h>

void main(void)
{
char cad1[50], cad2[50], *cad0 = ""; //realiza varias acciones relacionadas con la declaraci�n de variables de tipo char.
int i = 0; //inicializa una variable entera llamada i con el valor 0.
printf("\n Ingrese la primera cadena de caracteres: "); // se utiliza para mostrar un mensaje en la consola o terminal, solicitando al usuario que ingrese una cadena de caracteres.
gets(cad1); //se utiliza para leer una l�nea de texto (cadena de caracteres) desde la entrada est�ndar (generalmente el teclado) y almacenarla en un arreglo de caracteres proporcionado como argumento.
printf("\n Ingrese la cadena a buscar: ");
gets(cad2); //se utiliza para leer una l�nea de texto (cadena de caracteres) desde la entrada est�ndar (generalmente el teclado) y almacenarla en un arreglo de caracteres proporcionado como argumento.
strcpy(cad0, cad1); //es utilizada para imprimir un mensaje en la consola o terminal, solicitando al usuario que ingrese una cadena de caracteres espec�fica que ser� utilizada para b�squeda u otro prop�sito dentro del programa.
cad0 = strstr (cad0, cad2); // se utiliza para encontrar la primera ocurrencia de una subcadena dentro de una cadena m�s grande. Aqu� te explico c�mo funciona strstr() y c�mo se utiliza en la l�nea de c�digo cad0 = strstr(cad0, cad2);.
while (cad0 != NULL) //El bucle while con la condici�n cad0 != NULL se utiliza para iterar mientras el puntero cad0 no apunte a NULL.
{
i++; //es una forma concisa y eficiente de incrementar el valor de una variable entera i en 1 unidad en muchos lenguajes de programaci�n, facilitando la escritura y legibilidad del c�digo.
cad0 = strstr (cad0 + 1, cad2); //es una instrucci�n que utiliza la funci�n strstr para buscar la primera aparici�n de la subcadena cad2 dentro de la cadena cad0, pero empezando la b�squeda desde la posici�n siguiente a donde se encontr� la �ltima coincidencia de cad2.
}
printf("\nEl n�mero de veces que aparece la segunda cadena es: %d", i); //un mensaje que incluye el valor de la variable i.
}
