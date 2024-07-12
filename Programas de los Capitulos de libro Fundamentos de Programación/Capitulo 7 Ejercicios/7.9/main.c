#include <stdio.h>
#include <stdlib.h>

int cuenta(char *, char); //La l�nea de c�digo int cuenta(char *, char); es la declaraci�n de una funci�n en C o C++.
void main(void)
{
char car, cad[50]; //es una declaraci�n en C++ que define dos variables: car, para almacenar un solo car�cter, y cad, un arreglo de caracteres para almacenar una cadena de hasta 50 caracteres.
int res; //establece una variable llamada res de tipo entero.
printf("\nIngrese la cadena de caracteres: "); // imprime un mensaje en la consola
gets(cad); // utilizada para leer una l�nea de texto desde la entrada est�ndar (normalmente el teclado) y almacenarla en un arreglo de caracteres (cadena).
fflush(stdin); //tiene un comportamiento indefinido seg�n el est�ndar del lenguaje.
printf("\nIngrese el caracter: ");  // se utiliza para imprimir un mensaje solicitando al usuario que ingrese un �nico caracter en la consola.
car = getchar(); //es una l�nea de c�digo en C o C++ que se utiliza para leer un �nico car�cter ingresado por el usuario desde la consola y almacenarlo en una variable de tipo char.
res = cuenta(cad, car);
printf("\n\n%c se encuentra %d veces en la cadena %s", car, res, cad); // es una l�nea de c�digo en C o C++ que se utiliza para imprimir un mensaje formateado en la consola, utilizando valores espec�ficos almacenados en las variables car, res y cad.
}
int cuenta(char *cad, char car) //define una funci�n en C o C++ que cuenta cu�ntas veces aparece un car�cter espec�fico en una cadena dada.
{
int i = 0, r = 0; //define dos variables enteras
while (cad[i] != '\0') //e utiliza para iterar sobre una cadena de caracteres (char *cad) hasta que se encuentre el car�cter nulo ('\0')
{
if (cad[i] == car) //se utiliza para verificar si el car�cter en la posici�n i de la cadena cad es igual al car�cter car.
r++; //es una instrucci�n que se utiliza para incrementar en uno el valor de la variable r.
i++;
}
return (r); //indica que la funci�n actual debe finalizar y devolver el valor de la variable r.
}
