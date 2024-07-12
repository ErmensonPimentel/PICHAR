#include <stdio.h>
#include <stdlib.h>

void main(void)
{
char cad1[50], cad2[50], *cad0 = ""; //realiza varias acciones relacionadas con la declaración de variables de tipo char.
int i = 0; //inicializa una variable entera llamada i con el valor 0.
printf("\n Ingrese la primera cadena de caracteres: "); // se utiliza para mostrar un mensaje en la consola o terminal, solicitando al usuario que ingrese una cadena de caracteres.
gets(cad1); //se utiliza para leer una línea de texto (cadena de caracteres) desde la entrada estándar (generalmente el teclado) y almacenarla en un arreglo de caracteres proporcionado como argumento.
printf("\n Ingrese la cadena a buscar: ");
gets(cad2); //se utiliza para leer una línea de texto (cadena de caracteres) desde la entrada estándar (generalmente el teclado) y almacenarla en un arreglo de caracteres proporcionado como argumento.
strcpy(cad0, cad1); //es utilizada para imprimir un mensaje en la consola o terminal, solicitando al usuario que ingrese una cadena de caracteres específica que será utilizada para búsqueda u otro propósito dentro del programa.
cad0 = strstr (cad0, cad2); // se utiliza para encontrar la primera ocurrencia de una subcadena dentro de una cadena más grande. Aquí te explico cómo funciona strstr() y cómo se utiliza en la línea de código cad0 = strstr(cad0, cad2);.
while (cad0 != NULL) //El bucle while con la condición cad0 != NULL se utiliza para iterar mientras el puntero cad0 no apunte a NULL.
{
i++; //es una forma concisa y eficiente de incrementar el valor de una variable entera i en 1 unidad en muchos lenguajes de programación, facilitando la escritura y legibilidad del código.
cad0 = strstr (cad0 + 1, cad2); //es una instrucción que utiliza la función strstr para buscar la primera aparición de la subcadena cad2 dentro de la cadena cad0, pero empezando la búsqueda desde la posición siguiente a donde se encontró la última coincidencia de cad2.
}
printf("\nEl número de veces que aparece la segunda cadena es: %d", i); //un mensaje que incluye el valor de la variable i.
}
