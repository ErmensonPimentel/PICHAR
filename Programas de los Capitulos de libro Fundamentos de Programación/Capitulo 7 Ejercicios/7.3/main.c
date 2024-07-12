#include <stdio.h>
#include <stdlib.h>

void main(void)
{
   char *cad0 = "Buenos días";  //sirve para declarar y definir una variable cad0 que es un puntero a char (es decir, un puntero a una cadena de caracteres). En este caso, cad0 apunta a la dirección de memoria donde comienza la cadena "Buenos días".
char cad1[20] = "Hola"; //e utiliza para crear un arreglo de caracteres estático con capacidad para almacenar una cadena de hasta 19 caracteres (más el caracter nulo \0).
char cad2[] = "México"; //se utiliza para declarar y definir un arreglo de caracteres en C que contiene la cadena de caracteres "México".
char cad3[] = {'B', 'i', 'e', 'n', 'v', 'e', 'n', 'i', 'd', 'o', '\0'}; //sirve para declarar e inicializar un arreglo de caracteres (char) llamado cad3 con la cadena de caracteres "Bienvenido".
char cad4[20], cad5[20], cad6[20];  // te proporciona tres arreglos de caracteres en C, cada uno con una capacidad de 20 caracteres
printf("\nLa cadena cad0 es: "); // imprimir el contenido de la cadena cad0 usando la función printf en C, necesitas asegurarte de que cad0 esté correctamente definida e inicializada previamente en tu programa.
puts(cad0);  //es una forma conveniente y eficiente de imprimir una cadena de caracteres en la consola en C, seguida de un salto de línea automático.
printf("\nLa cadena cad1 es: "); //Aquí se define un arreglo de caracteres cad1 con capacidad para almacenar hasta 19 caracteres más el caracter nulo \0, y se inicializa con la cadena "Hola".
printf("%s", cad1); //imprimir el contenido de una cadena de caracteres utilizando printf en C, partiendo del supuesto de que cad1 ya está correctamente definida e inicializada en tu código.
printf("\nLa cadena cad2 es: "); //deseas imprimir el mensaje "La cadena cad2 es: " en la consola utilizando la función printf en C
puts(cad2);  //imprimir el contenido de una cadena de caracteres utilizando puts en C, partiendo del supuesto de que cad2 ya está correctamente definida e inicializada en tu código.
printf("\nLa cadena cad3 es: "); //en la consola utilizando la función printf en C
puts(cad3); //La función puts() en C se utiliza para imprimir cadenas de caracteres en la consola, seguidas automáticamente por un salto de línea ('\n').
printf("\nIngrese una línea de texto —se lee con gets—: \n");  // se utiliza para imprimir un mensaje en la consola, invitando al usuario a ingresar una línea de texto.
gets(cad4); //La función puts() en C se utiliza para imprimir cadenas de caracteres en la consola, seguidas automáticamente por un salto de línea ('\n').
printf("\nLa cadena cad4 es: "); //La cadena cad4 es: " en la consola utilizando la función printf en C
puts(cad4); //Si deseas imprimir el contenido de la cadena cad4 utilizando la función puts en C
fflush(stdin); // es una expresión que intenta limpiar el búfer de entrada estándar (stdin) en C.
printf("\nIngrese una línea de texto —se lee con scanf—: \n"); //imprimir el mensaje "Ingrese una línea de texto —se lee con scanf—: " utilizando printf en C.
scanf("%s", cad5); //es útil para leer palabras (secuencias de caracteres sin espacios) desde la entrada estándar y almacenarlas en un arreglo en C
printf("\nLa cadena cad5 es: ");  //imprimir el contenido de una cadena de caracteres (cad5) utilizando printf en C
printf("%s", cad5);
fflush(stdin); // es una expresión que intenta limpiar el búfer de entrada estándar (stdin) en C.
char p;
int i = 0;
printf("\nIngrese una línea de texto —se lee cada caracter con getchar—: \n"); // imprimir el mensaje "Ingrese una línea de texto
while ((p = getchar())!= '\n') // utilizar un bucle while junto con getchar() para leer y procesar caracteres ingresados por el usuario hasta que se presione Enter.
cad6[i++] = p;
cad6[i] = '\0';
printf("\nLa cadena cad6 es: ");
puts(cad6);
}
