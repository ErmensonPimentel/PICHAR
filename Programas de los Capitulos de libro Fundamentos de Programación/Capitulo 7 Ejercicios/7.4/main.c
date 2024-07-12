#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    char *cad0 = "Buenos d�as"; //crea un puntero a una cadena de caracteres (string literal) que contiene la frase "Buenos d�as".
char cad1[20] = "Hola"; //establece cad1 como un arreglo de caracteres que contiene inicialmente la cadena "Hola"
char cad2[] = "M�xico"; //establece cad2 como un arreglo de caracteres que se inicializa con la cadena "M�xico"
char cad3[] = {'B', 'i', 'e', 'n', 'v', 'e', 'n', 'i', 'd', 'o', '\0'}; //establece cad3 como un arreglo de caracteres que se inicializa con la cadena "Bienvenido"
char cad4[20], cad5[20], cad6[20]; //declara tres arreglos de caracteres en C con capacidad suficiente para almacenar cadenas de hasta 19 caracteres m�s el caracter nulo \0
printf("\nLa cadena cad0 es: "); // imprime un mensaje espec�fico en la consola, seguido opcionalmente por el contenido de una variable
puts(cad0); //La funci�n puts(cad0); en C se utiliza para imprimir una cadena de caracteres (char *) en la salida est�ndar, seguida de un salto de l�nea.
printf("\nLa cadena cad1 es: "); //es una instrucci�n en C que imprime un mensaje espec�fico en la consola
printf("%s", cad1);
printf("\nLa cadena cad2 es: "); //es una instrucci�n en C que imprime un mensaje espec�fico en la consola
puts(cad2);  //es una funci�n en C que imprime una cadena de caracteres seguida de un salto de l�nea en la consola. /
printf("\nLa cadena cad3 es: "); //es una instrucci�n en C que imprime un mensaje espec�fico en la consola
puts(cad3); // es una funci�n en C que imprime una cadena de caracteres seguida de un salto de l�nea en la consola.
printf("\nIngrese una l�nea de texto �se lee con gets�: \n");  //en C es una instrucci�n de salida que muestra un mensaje en la consola o en la salida est�ndar. Este mensaje invita al usuario a ingresar una l�nea de texto utilizando la funci�n gets para capturar la entrada.
gets(cad4); //se utiliza para leer una l�nea completa de texto desde la entrada est�ndar (generalmente la consola) y almacenarla en el arreglo de caracteres cad4.
printf("\nLa cadena cad4 es: ");
puts(cad4);  // es una funci�n en C que imprime una cadena de caracteres seguida de un salto de l�nea en la consola.
fflush(stdin); //fflush(stdin); intenta limpiar el b�fer de entrada est�ndar (stdin), pero su comportamiento no est� definido en el est�ndar de C y no se recomienda su uso.
printf("\nIngrese una l�nea de texto �se lee con scanf�: \n");  //es una instrucci�n en C que muestra un mensaje en la consola, indicando al usuario que ingrese una l�nea de texto.
scanf("%s", cad5);  // es una forma com�n de leer y almacenar una cadena de caracteres desde la entrada est�ndar en C.
printf("\nLa cadena cad5 es: ");  //es una instrucci�n en C que muestra un mensaje en la consola antes de imprimir la cadena de caracteres almacenada en el arreglo cad5.
printf("%s", cad5);  // se utiliza para imprimir una cadena de caracteres almacenada en el arreglo cad5 en la salida est�ndar (usualmente la consola).
fflush(stdin); // se utiliza para imprimir una cadena de caracteres almacenada en el arreglo cad5 en la salida est�ndar (usualmente la consola).
char p;  //simplemente define una variable llamada p que puede almacenar un solo car�cter.
int i = 0;  //es una declaraci�n en C que define una variable i de tipo entero y le asigna el valor inicial 0.
printf("\nIngrese una l�nea de texto �se lee cada caracter con getchar�: \n");  //es una instrucci�n en C que muestra un mensaje en la consola, indicando al usuario que debe ingresar una l�nea de texto.
while ((p = getchar())!= '\n')  //es una construcci�n de bucle while que utiliza la funci�n getchar() para leer caracteres de la entrada est�ndar (generalmente la consola) hasta que se encuentra un salto de l�nea ('\n').
cad6[i++] = p;  //es una instrucci�n en C que se utiliza para almacenar el car�cter p en la posici�n actual i del arreglo cad6, y luego incrementa i para apuntar al siguiente espacio disponible en el arreglo.
cad6[i] = '\0';  //se utiliza para agregar expl�citamente el car�cter nulo ('\0') al final de una cadena de caracteres representada por el arreglo cad6.
printf("\nLa cadena cad6 es: "); // es una forma est�ndar en C de imprimir el contenido de un arreglo de caracteres como una cadena de texto utilizando printf con el especificador de formato %s.
puts(cad6);
}
