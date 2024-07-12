#include <stdio.h>
#include <stdlib.h>

int cuenta(char *); //es una declaraci�n de funci�n que especifica que habr� una funci�n llamada cuenta que toma un puntero a char como argumento y devuelve un valor de tipo entero (int).
void main(void)
{
int i; //declara una variable llamada i de tipo entero (int).
char cad[50]; //define un arreglo de caracteres llamado cad que puede contener hasta 50 elementos.
printf("\nIngrese la cadena de caracteres: "); //se utiliza para imprimir un mensaje en la consola que solicita al usuario que ingrese una cadena de caracteres.
gets(cad); //se utiliza para leer una l�nea completa de texto desde la entrada est�ndar (generalmente el teclado) y almacenarla en el arreglo de caracteres cad.
i = cuenta(cad); //es una l�nea de c�digo que llama a la funci�n cuenta con cad como argumento, y luego asigna el resultado devuelto por cuenta a la variable i.
printf("\nLongitud de la cadena: %d", i); //es una instrucci�n en C que se utiliza para imprimir la longitud de una cadena de caracteres calculada previamente y almacenada en la variable i.
}
int cuenta(char *cadena) //es la declaraci�n de una funci�n llamada cuenta que toma un argumento de tipo puntero a char (es decir, una cadena de caracteres) y devuelve un valor entero (int).
{
int c = 0; //es una l�nea de c�digo que declara una variable llamada c de tipo entero (int) e inicializa su valor a 0.
while (!cadena[c] == '\0') //es una estructura de control de bucle while que verifica si el car�cter en la posici�n c del arreglo cadena no es igual al car�cter nulo '\0'.
c++;
return (c);
}

