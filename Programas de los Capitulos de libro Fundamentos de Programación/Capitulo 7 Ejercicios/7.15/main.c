#include <stdio.h>
#include <stdlib.h>

void interpreta(char *);
void main(void)
{
char cad[50]; //eclara un arreglo de caracteres llamado cad que puede contener hasta 50 caracteres, incluyendo el car�cter nulo '\0' al final de la cadena.
printf("\nIngrese la cadena de caracteres: "); //se utiliza para imprimir un mensaje en la consola solicitando al usuario que ingrese una cadena de caracteres.
gets(cad); //se utiliza para leer una l�nea completa de texto desde la entrada est�ndar (generalmente el teclado) y almacenarla en el arreglo de caracteres cad.
interpreta(cad); //llamando a una funci�n llamada interpreta y pasando como argumento la cadena de caracteres cad
}
void interpreta(char *cadena) // define una funci�n en C que acepta un puntero a un car�cter como argumento y no devuelve ning�n valor (void).
{
int i = 0, j, k; //define tres variables enteras: i, j y k.
while (cad[i] != '\0') // se utiliza para iterar a trav�s de una cadena de caracteres hasta llegar al car�cter nulo ('\0').
{
if (isalpha (cad[i])) //se utiliza para verificar si el car�cter en la posici�n i del arreglo cad es una letra alfab�tica.
{
k = cad[i - 1] - 48; //est� destinada a convertir un car�cter num�rico (d�gito) almacenado en la cadena cad en su valor num�rico correspondiente.
for (j = 0; j < k; j++) //es una estructura de bucle for que se utiliza para iterar un bloque de c�digo m�ltiples veces, dependiendo del valor de la variable k.
putchar(cad[i]);
}
i++;
}
