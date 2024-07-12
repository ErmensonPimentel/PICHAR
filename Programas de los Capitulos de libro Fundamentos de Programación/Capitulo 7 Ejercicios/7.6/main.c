#include <stdio.h>
#include <stdlib.h>

void main(void)
{
char *cad0 = "Hola México"; //define cad0 como un puntero a una cadena constante en C, útil cuando solo necesitas acceder y utilizar la cadena sin necesidad de modificar su contenido.
char cad1[20], cad2[20], cad3[20] = ", buenos días!!!"; //define tres arreglos de caracteres donde cad3 está inicializado explícitamente con una cadena de caracteres
strcpy(cad1, cad0); //es una forma estándar y común en C para copiar cadenas de caracteres de una variable a otra, asegurándose de incluir el carácter nulo \0 al final.
printf("\nPrueba de la función strcpy. Se copia la cadena cad0 a cad1: %s\n", cad1); //imprimir el resultado de la función strcpy() que copia la cadena cad0 a cad1 en C, puedes usar printf()
strcpy(cad1, cad3); //copiando el contenido de la cadena cad3 en la cadena cad1./
printf("\nPrueba de la función strcpy. Se copia la cadena cad3 a cad1: %s\n", cad1);  //imprimir el resultado de la función strcpy() que copia la cadena cad3 a cad1 en C, puedes usar printf()
strcpy(cad1, "XX"); //es una forma estándar y común en C para copiar una cadena literal en un arreglo de caracteres, y printf() se usa para imprimir el resultado después de la operación de copia.
printf("\nPrueba de la función strcpy. Se copia la cadena XX a cad1: %s\n", cad1);
strncpy(cad2, cad0, 4); //es una forma segura y controlada en C para copiar una cantidad específica de caracteres desde una cadena de origen en un arreglo de destino
cad2[4] = '\0'; //es fundamental para asegurar que el arreglo de caracteres cad2 termine correctamente con un carácter nulo ('\0').
printf("\nPrueba de la función strncpy. Se copian 4 caracteres de cad0 a cad2: %s\n", cad2); //strncpy() para copiar una cantidad específica de caracteres desde una cadena de origen en un arreglo de destino en C
strncpy(cad2, cad3, 3); //estás copiando hasta 3 caracteres desde la cadena cad3 en el arreglo cad2.
cad2[3] = '\0'; //Esta asignación establece explícitamente que el cuarto elemento (índice 3) del arreglo cad2 será un carácter nulo ('\0')
printf("\nPrueba de la función strncpy. Se copian 3 caracteres de cad3 a cad2: %s\n", cad2); //es una forma segura y controlada en C para copiar una cantidad específica de caracteres desde una cadena de origen en un arreglo de destino, y printf() se usa para imprimir el resultado después de la operación de copia.
strcat(cad0, cad3); // es una forma estándar y eficiente en C para concatenar dos cadenas de caracteres y construir una cadena más larga, y printf() se utiliza para mostrar el resultado de la concatenación.
printf("\nPrueba de la función strcat. Se incorpora la cadena cad3 a cad0: %s\n", cad0);
strcat(cad1, " YY"); //strcat(cad1, " YY"); es una forma estándar y eficiente en C para agregar texto adicional al final de una cadena existente, y printf() se utiliza para mostrar el resultado de la concatenación.
printf("\nPrueba de la función strcat. Se incorpora la cadena YY a cad1: %s\n", cad1);
strcat(cad2, " "); // es una forma estándar y eficiente en C para agregar texto adicional al final de una cadena existente, y printf() se utiliza para mostrar el resultado de la concatenación.
strncat(cad2, cad0, 4);
printf("\nPrueba de la función strncat. Se incorporan 4 caracteres de cad0 a cad2: %s\n", cad2); //es una forma eficiente y segura en C para concatenar una cantidad específica de caracteres desde una cadena de origen al final de una cadena de destino, y printf() se utiliza para mostrar el resultado de la concatenación.
cad0 = strstr(cad0, "México"); //strstr(cad0, "México"); es una forma útil en C para buscar y obtener el inicio de la primera aparición de una subcadena dentro de otra cadena, y printf() se utiliza para mostrar el resultado encontrado.
printf("\nPrueba de la función strstr. Se trata de localizar la cadena México dentro de cad0: %s\n", cad0);
cad0 = strstr(cad0, "Guatemala");
printf("\nPrueba de la función strstr. Se trata de localizar la cadena Guatemala dentro de cad0: %s\n", cad0);
}

