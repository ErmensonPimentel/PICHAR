#include <stdio.h>
#include <stdlib.h>

void main(void)
{
char *cad0 = "Hola M�xico"; //define cad0 como un puntero a una cadena constante en C, �til cuando solo necesitas acceder y utilizar la cadena sin necesidad de modificar su contenido.
char cad1[20], cad2[20], cad3[20] = ", buenos d�as!!!"; //define tres arreglos de caracteres donde cad3 est� inicializado expl�citamente con una cadena de caracteres
strcpy(cad1, cad0); //es una forma est�ndar y com�n en C para copiar cadenas de caracteres de una variable a otra, asegur�ndose de incluir el car�cter nulo \0 al final.
printf("\nPrueba de la funci�n strcpy. Se copia la cadena cad0 a cad1: %s\n", cad1); //imprimir el resultado de la funci�n strcpy() que copia la cadena cad0 a cad1 en C, puedes usar printf()
strcpy(cad1, cad3); //copiando el contenido de la cadena cad3 en la cadena cad1./
printf("\nPrueba de la funci�n strcpy. Se copia la cadena cad3 a cad1: %s\n", cad1);  //imprimir el resultado de la funci�n strcpy() que copia la cadena cad3 a cad1 en C, puedes usar printf()
strcpy(cad1, "XX"); //es una forma est�ndar y com�n en C para copiar una cadena literal en un arreglo de caracteres, y printf() se usa para imprimir el resultado despu�s de la operaci�n de copia.
printf("\nPrueba de la funci�n strcpy. Se copia la cadena XX a cad1: %s\n", cad1);
strncpy(cad2, cad0, 4); //es una forma segura y controlada en C para copiar una cantidad espec�fica de caracteres desde una cadena de origen en un arreglo de destino
cad2[4] = '\0'; //es fundamental para asegurar que el arreglo de caracteres cad2 termine correctamente con un car�cter nulo ('\0').
printf("\nPrueba de la funci�n strncpy. Se copian 4 caracteres de cad0 a cad2: %s\n", cad2); //strncpy() para copiar una cantidad espec�fica de caracteres desde una cadena de origen en un arreglo de destino en C
strncpy(cad2, cad3, 3); //est�s copiando hasta 3 caracteres desde la cadena cad3 en el arreglo cad2.
cad2[3] = '\0'; //Esta asignaci�n establece expl�citamente que el cuarto elemento (�ndice 3) del arreglo cad2 ser� un car�cter nulo ('\0')
printf("\nPrueba de la funci�n strncpy. Se copian 3 caracteres de cad3 a cad2: %s\n", cad2); //es una forma segura y controlada en C para copiar una cantidad espec�fica de caracteres desde una cadena de origen en un arreglo de destino, y printf() se usa para imprimir el resultado despu�s de la operaci�n de copia.
strcat(cad0, cad3); // es una forma est�ndar y eficiente en C para concatenar dos cadenas de caracteres y construir una cadena m�s larga, y printf() se utiliza para mostrar el resultado de la concatenaci�n.
printf("\nPrueba de la funci�n strcat. Se incorpora la cadena cad3 a cad0: %s\n", cad0);
strcat(cad1, " YY"); //strcat(cad1, " YY"); es una forma est�ndar y eficiente en C para agregar texto adicional al final de una cadena existente, y printf() se utiliza para mostrar el resultado de la concatenaci�n.
printf("\nPrueba de la funci�n strcat. Se incorpora la cadena YY a cad1: %s\n", cad1);
strcat(cad2, " "); // es una forma est�ndar y eficiente en C para agregar texto adicional al final de una cadena existente, y printf() se utiliza para mostrar el resultado de la concatenaci�n.
strncat(cad2, cad0, 4);
printf("\nPrueba de la funci�n strncat. Se incorporan 4 caracteres de cad0 a cad2: %s\n", cad2); //es una forma eficiente y segura en C para concatenar una cantidad espec�fica de caracteres desde una cadena de origen al final de una cadena de destino, y printf() se utiliza para mostrar el resultado de la concatenaci�n.
cad0 = strstr(cad0, "M�xico"); //strstr(cad0, "M�xico"); es una forma �til en C para buscar y obtener el inicio de la primera aparici�n de una subcadena dentro de otra cadena, y printf() se utiliza para mostrar el resultado encontrado.
printf("\nPrueba de la funci�n strstr. Se trata de localizar la cadena M�xico dentro de cad0: %s\n", cad0);
cad0 = strstr(cad0, "Guatemala");
printf("\nPrueba de la funci�n strstr. Se trata de localizar la cadena Guatemala dentro de cad0: %s\n", cad0);
}

