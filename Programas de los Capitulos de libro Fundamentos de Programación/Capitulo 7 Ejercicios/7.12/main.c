#include <stdio.h>
#include <stdlib.h>

void main(void)
{
char cad[50]; //define un arreglo de caracteres llamado cad con capacidad para almacenar hasta 50 caracteres.
int i = 0, mi = 0, ma = 0; //declara e inicializa tres variables enteras: i, mi, y ma.
printf("\nIngrese la cadena de caracteres (m�ximo 50 caracteres): "); //es una instrucci�n para imprimir un mensaje en la consola solicitando al usuario que ingrese una cadena de caracteres, con una limitaci�n de m�ximo 50 caracteres.
gets(cad); //se utiliza para leer una l�nea de texto desde la entrada est�ndar y almacenarla en un arreglo de caracteres (cad).
while(cad[i] != '\0')  // se utiliza para iterar a trav�s de una cadena de caracteres (cad) hasta que se encuentre el car�cter nulo ('\0'), que marca el final de la cadena en C.
{
if (islower (cad[i])) //se utiliza para verificar si el car�cter en la posici�n i del arreglo de caracteres cad es una letra min�scula.
mi++; //es un operador de incremento que incrementa el valor de la variable mi en una unidad.
else
if (isupper (cad[i]))  //se utiliza para verificar si el car�cter en la posici�n i del arreglo de caracteres cad es una letra may�scula.
ma++; //es un operador de incremento que se utiliza para aumentar el valor de la variable ma en una unidad.
i++; //es un operador de incremento que se utiliza para aumentar el valor de la variable ma en una unidad.
}
printf("\n\nN�mero de letras min�sculas: %d", mi); //se utiliza para imprimir en la consola el n�mero de letras min�sculas contadas en alg�n proceso previo, almacenado en la variable mi.
printf("\nN�mero de letras may�sculas: %d", ma); //se utiliza para imprimir en la consola el n�mero de letras mayusculas contadas en alg�n proceso previo, almacenado en la variable ma.
}
