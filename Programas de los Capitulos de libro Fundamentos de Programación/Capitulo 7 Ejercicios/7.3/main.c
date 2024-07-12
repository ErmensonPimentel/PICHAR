#include <stdio.h>
#include <stdlib.h>

void main(void)
{
   char *cad0 = "Buenos d�as";  //sirve para declarar y definir una variable cad0 que es un puntero a char (es decir, un puntero a una cadena de caracteres). En este caso, cad0 apunta a la direcci�n de memoria donde comienza la cadena "Buenos d�as".
char cad1[20] = "Hola"; //e utiliza para crear un arreglo de caracteres est�tico con capacidad para almacenar una cadena de hasta 19 caracteres (m�s el caracter nulo \0).
char cad2[] = "M�xico"; //se utiliza para declarar y definir un arreglo de caracteres en C que contiene la cadena de caracteres "M�xico".
char cad3[] = {'B', 'i', 'e', 'n', 'v', 'e', 'n', 'i', 'd', 'o', '\0'}; //sirve para declarar e inicializar un arreglo de caracteres (char) llamado cad3 con la cadena de caracteres "Bienvenido".
char cad4[20], cad5[20], cad6[20];  // te proporciona tres arreglos de caracteres en C, cada uno con una capacidad de 20 caracteres
printf("\nLa cadena cad0 es: "); // imprimir el contenido de la cadena cad0 usando la funci�n printf en C, necesitas asegurarte de que cad0 est� correctamente definida e inicializada previamente en tu programa.
puts(cad0);  //es una forma conveniente y eficiente de imprimir una cadena de caracteres en la consola en C, seguida de un salto de l�nea autom�tico.
printf("\nLa cadena cad1 es: "); //Aqu� se define un arreglo de caracteres cad1 con capacidad para almacenar hasta 19 caracteres m�s el caracter nulo \0, y se inicializa con la cadena "Hola".
printf("%s", cad1); //imprimir el contenido de una cadena de caracteres utilizando printf en C, partiendo del supuesto de que cad1 ya est� correctamente definida e inicializada en tu c�digo.
printf("\nLa cadena cad2 es: "); //deseas imprimir el mensaje "La cadena cad2 es: " en la consola utilizando la funci�n printf en C
puts(cad2);  //imprimir el contenido de una cadena de caracteres utilizando puts en C, partiendo del supuesto de que cad2 ya est� correctamente definida e inicializada en tu c�digo.
printf("\nLa cadena cad3 es: "); //en la consola utilizando la funci�n printf en C
puts(cad3); //La funci�n puts() en C se utiliza para imprimir cadenas de caracteres en la consola, seguidas autom�ticamente por un salto de l�nea ('\n').
printf("\nIngrese una l�nea de texto �se lee con gets�: \n");  // se utiliza para imprimir un mensaje en la consola, invitando al usuario a ingresar una l�nea de texto.
gets(cad4); //La funci�n puts() en C se utiliza para imprimir cadenas de caracteres en la consola, seguidas autom�ticamente por un salto de l�nea ('\n').
printf("\nLa cadena cad4 es: "); //La cadena cad4 es: " en la consola utilizando la funci�n printf en C
puts(cad4); //Si deseas imprimir el contenido de la cadena cad4 utilizando la funci�n puts en C
fflush(stdin); // es una expresi�n que intenta limpiar el b�fer de entrada est�ndar (stdin) en C.
printf("\nIngrese una l�nea de texto �se lee con scanf�: \n"); //imprimir el mensaje "Ingrese una l�nea de texto �se lee con scanf�: " utilizando printf en C.
scanf("%s", cad5); //es �til para leer palabras (secuencias de caracteres sin espacios) desde la entrada est�ndar y almacenarlas en un arreglo en C
printf("\nLa cadena cad5 es: ");  //imprimir el contenido de una cadena de caracteres (cad5) utilizando printf en C
printf("%s", cad5);
fflush(stdin); // es una expresi�n que intenta limpiar el b�fer de entrada est�ndar (stdin) en C.
char p;
int i = 0;
printf("\nIngrese una l�nea de texto �se lee cada caracter con getchar�: \n"); // imprimir el mensaje "Ingrese una l�nea de texto
while ((p = getchar())!= '\n') // utilizar un bucle while junto con getchar() para leer y procesar caracteres ingresados por el usuario hasta que se presione Enter.
cad6[i++] = p;
cad6[i] = '\0';
printf("\nLa cadena cad6 es: ");
puts(cad6);
}
