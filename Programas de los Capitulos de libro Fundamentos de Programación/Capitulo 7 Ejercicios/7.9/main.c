#include <stdio.h>
#include <stdlib.h>

int cuenta(char *, char); //La línea de código int cuenta(char *, char); es la declaración de una función en C o C++.
void main(void)
{
char car, cad[50]; //es una declaración en C++ que define dos variables: car, para almacenar un solo carácter, y cad, un arreglo de caracteres para almacenar una cadena de hasta 50 caracteres.
int res; //establece una variable llamada res de tipo entero.
printf("\nIngrese la cadena de caracteres: "); // imprime un mensaje en la consola
gets(cad); // utilizada para leer una línea de texto desde la entrada estándar (normalmente el teclado) y almacenarla en un arreglo de caracteres (cadena).
fflush(stdin); //tiene un comportamiento indefinido según el estándar del lenguaje.
printf("\nIngrese el caracter: ");  // se utiliza para imprimir un mensaje solicitando al usuario que ingrese un único caracter en la consola.
car = getchar(); //es una línea de código en C o C++ que se utiliza para leer un único carácter ingresado por el usuario desde la consola y almacenarlo en una variable de tipo char.
res = cuenta(cad, car);
printf("\n\n%c se encuentra %d veces en la cadena %s", car, res, cad); // es una línea de código en C o C++ que se utiliza para imprimir un mensaje formateado en la consola, utilizando valores específicos almacenados en las variables car, res y cad.
}
int cuenta(char *cad, char car) //define una función en C o C++ que cuenta cuántas veces aparece un carácter específico en una cadena dada.
{
int i = 0, r = 0; //define dos variables enteras
while (cad[i] != '\0') //e utiliza para iterar sobre una cadena de caracteres (char *cad) hasta que se encuentre el carácter nulo ('\0')
{
if (cad[i] == car) //se utiliza para verificar si el carácter en la posición i de la cadena cad es igual al carácter car.
r++; //es una instrucción que se utiliza para incrementar en uno el valor de la variable r.
i++;
}
return (r); //indica que la función actual debe finalizar y devolver el valor de la variable r.
}
