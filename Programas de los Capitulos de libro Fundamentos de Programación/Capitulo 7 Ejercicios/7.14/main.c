#include <stdio.h>
#include <stdlib.h>

int cuenta(char *); //s la declaraci�n de una funci�n llamada cuenta que toma un argumento de tipo puntero a char y devuelve un valor entero (int).
void main(void)
{
int i; //es una declaraci�n en C que define una variable entera llamada i.
char cad[50]; //es una declaraci�n en C que define un arreglo de caracteres capaz de almacenar hasta 50 caracteres.
printf("\nIngrese la cadena de caracteres: "); //es una l�nea de c�digo en C que se utiliza para imprimir un mensaje solicitando al usuario que ingrese una cadena de caracteres.
gets(cad); //es una funci�n obsoleta y no segura en C para leer l�neas de texto. Es preferible utilizar alternativas m�s seguras como fgets para evitar vulnerabilidades de seguridad.
i = cuenta(cad); // la l�nea i = cuenta(cad); en C asume que cuenta es una funci�n que ha sido previamente declarada o definida en tu programa.
printf("\nLongitud de la cadena: %d", i); //es una l�nea de c�digo en C que utiliza printf para imprimir la longitud de una cadena de caracteres previamente calculada y almacenada en la variable i.
}
int cuenta(char *cadena) //Para implementar la funci�n cuenta en C que calcula la longitud de una cadena de caracteres, debes seguir unos pasos simples pero efectivos.
{
if (cadena[0] == '\0') //se utiliza para verificar si el primer car�cter de la cadena apuntada por cadena es el car�cter nulo '\0', que es el car�cter que marca el final de una cadena en C.
return 0;
else
return (1 + cuenta (&cadena[1])); //en una funci�n de C indica una forma recursiva de calcular la longitud de una cadena de caracteres (cadena).
}
