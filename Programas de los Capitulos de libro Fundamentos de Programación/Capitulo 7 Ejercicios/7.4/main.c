#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    char *cad0 = "Buenos días"; //crea un puntero a una cadena de caracteres (string literal) que contiene la frase "Buenos días".
char cad1[20] = "Hola"; //establece cad1 como un arreglo de caracteres que contiene inicialmente la cadena "Hola"
char cad2[] = "México"; //establece cad2 como un arreglo de caracteres que se inicializa con la cadena "México"
char cad3[] = {'B', 'i', 'e', 'n', 'v', 'e', 'n', 'i', 'd', 'o', '\0'}; //establece cad3 como un arreglo de caracteres que se inicializa con la cadena "Bienvenido"
char cad4[20], cad5[20], cad6[20]; //declara tres arreglos de caracteres en C con capacidad suficiente para almacenar cadenas de hasta 19 caracteres más el caracter nulo \0
printf("\nLa cadena cad0 es: "); // imprime un mensaje específico en la consola, seguido opcionalmente por el contenido de una variable
puts(cad0); //La función puts(cad0); en C se utiliza para imprimir una cadena de caracteres (char *) en la salida estándar, seguida de un salto de línea.
printf("\nLa cadena cad1 es: "); //es una instrucción en C que imprime un mensaje específico en la consola
printf("%s", cad1);
printf("\nLa cadena cad2 es: "); //es una instrucción en C que imprime un mensaje específico en la consola
puts(cad2);  //es una función en C que imprime una cadena de caracteres seguida de un salto de línea en la consola. /
printf("\nLa cadena cad3 es: "); //es una instrucción en C que imprime un mensaje específico en la consola
puts(cad3); // es una función en C que imprime una cadena de caracteres seguida de un salto de línea en la consola.
printf("\nIngrese una línea de texto —se lee con gets—: \n");  //en C es una instrucción de salida que muestra un mensaje en la consola o en la salida estándar. Este mensaje invita al usuario a ingresar una línea de texto utilizando la función gets para capturar la entrada.
gets(cad4); //se utiliza para leer una línea completa de texto desde la entrada estándar (generalmente la consola) y almacenarla en el arreglo de caracteres cad4.
printf("\nLa cadena cad4 es: ");
puts(cad4);  // es una función en C que imprime una cadena de caracteres seguida de un salto de línea en la consola.
fflush(stdin); //fflush(stdin); intenta limpiar el búfer de entrada estándar (stdin), pero su comportamiento no está definido en el estándar de C y no se recomienda su uso.
printf("\nIngrese una línea de texto —se lee con scanf—: \n");  //es una instrucción en C que muestra un mensaje en la consola, indicando al usuario que ingrese una línea de texto.
scanf("%s", cad5);  // es una forma común de leer y almacenar una cadena de caracteres desde la entrada estándar en C.
printf("\nLa cadena cad5 es: ");  //es una instrucción en C que muestra un mensaje en la consola antes de imprimir la cadena de caracteres almacenada en el arreglo cad5.
printf("%s", cad5);  // se utiliza para imprimir una cadena de caracteres almacenada en el arreglo cad5 en la salida estándar (usualmente la consola).
fflush(stdin); // se utiliza para imprimir una cadena de caracteres almacenada en el arreglo cad5 en la salida estándar (usualmente la consola).
char p;  //simplemente define una variable llamada p que puede almacenar un solo carácter.
int i = 0;  //es una declaración en C que define una variable i de tipo entero y le asigna el valor inicial 0.
printf("\nIngrese una línea de texto —se lee cada caracter con getchar—: \n");  //es una instrucción en C que muestra un mensaje en la consola, indicando al usuario que debe ingresar una línea de texto.
while ((p = getchar())!= '\n')  //es una construcción de bucle while que utiliza la función getchar() para leer caracteres de la entrada estándar (generalmente la consola) hasta que se encuentra un salto de línea ('\n').
cad6[i++] = p;  //es una instrucción en C que se utiliza para almacenar el carácter p en la posición actual i del arreglo cad6, y luego incrementa i para apuntar al siguiente espacio disponible en el arreglo.
cad6[i] = '\0';  //se utiliza para agregar explícitamente el carácter nulo ('\0') al final de una cadena de caracteres representada por el arreglo cad6.
printf("\nLa cadena cad6 es: "); // es una forma estándar en C de imprimir el contenido de un arreglo de caracteres como una cadena de texto utilizando printf con el especificador de formato %s.
puts(cad6);
}
