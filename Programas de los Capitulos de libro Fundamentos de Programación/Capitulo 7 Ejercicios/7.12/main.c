#include <stdio.h>
#include <stdlib.h>

void main(void)
{
char cad[50]; //define un arreglo de caracteres llamado cad con capacidad para almacenar hasta 50 caracteres.
int i = 0, mi = 0, ma = 0; //declara e inicializa tres variables enteras: i, mi, y ma.
printf("\nIngrese la cadena de caracteres (máximo 50 caracteres): "); //es una instrucción para imprimir un mensaje en la consola solicitando al usuario que ingrese una cadena de caracteres, con una limitación de máximo 50 caracteres.
gets(cad); //se utiliza para leer una línea de texto desde la entrada estándar y almacenarla en un arreglo de caracteres (cad).
while(cad[i] != '\0')  // se utiliza para iterar a través de una cadena de caracteres (cad) hasta que se encuentre el carácter nulo ('\0'), que marca el final de la cadena en C.
{
if (islower (cad[i])) //se utiliza para verificar si el carácter en la posición i del arreglo de caracteres cad es una letra minúscula.
mi++; //es un operador de incremento que incrementa el valor de la variable mi en una unidad.
else
if (isupper (cad[i]))  //se utiliza para verificar si el carácter en la posición i del arreglo de caracteres cad es una letra mayúscula.
ma++; //es un operador de incremento que se utiliza para aumentar el valor de la variable ma en una unidad.
i++; //es un operador de incremento que se utiliza para aumentar el valor de la variable ma en una unidad.
}
printf("\n\nNúmero de letras minúsculas: %d", mi); //se utiliza para imprimir en la consola el número de letras minúsculas contadas en algún proceso previo, almacenado en la variable mi.
printf("\nNúmero de letras mayúsculas: %d", ma); //se utiliza para imprimir en la consola el número de letras mayusculas contadas en algún proceso previo, almacenado en la variable ma.
}
