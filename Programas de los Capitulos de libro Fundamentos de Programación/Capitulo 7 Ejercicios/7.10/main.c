#include <stdio.h>
#include <stdlib.h>

void main(void)
{
char c, cad[10]; //define variables para almacenar un car�cter individual (c) y una cadena de hasta 10 caracteres (cad).
int i = 0; //define una variable entera llamada i y la inicializa con el valor 0.
float sum = 0.0; //define una variable llamada sum de tipo float y la inicializa con el valor 0.0.
printf("\nDesea ingresar una cadena de caracteres (S/N)? "); //es una instrucci�n que muestra un mensaje solicitando una respuesta del usuario, generalmente utilizada para dirigir el flujo del programa en funci�n de la entrada del usuario.
c = getchar(); //se utiliza para leer un car�cter desde la entrada est�ndar (generalmente el teclado) y asignarlo a la variable c.
while (c == 'S') //es una construcci�n utilizada para repetir un bloque de c�digo mientras la variable c tenga el valor 'S',
{
printf("\nIngrese la cadena de caracteres: ");  // en C o C++ se utiliza para mostrar un mensaje en la consola solicitando al usuario que ingrese una cadena de caracteres.
fflush(stdin);
gets(cad); //en C es utilizada para leer una l�nea completa de texto desde la entrada est�ndar (generalmente el teclado) y almacenarla en el arreglo de caracteres cad.
i++,
sum += atof(cad); // se utiliza para sumar un valor convertido de una cadena de caracteres (cad) a una variable de tipo float o double (sum).
printf("\nDesea ingresar otra cadena de caracteres (S/N)? ");  //es una forma est�ndar de solicitar una respuesta del usuario en programas C o C++ y es �til para gestionar la interacci�n y el flujo del programa basado en la entrada del usuario./
c = getchar();  //se utiliza para leer un solo car�cter desde la entrada est�ndar (generalmente el teclado) y almacenarlo en la variable c.
}
printf("\nSuma: %.2f", sum); //se utiliza para imprimir el valor de la variable sum en la consola con un formato espec�fico.
printf("\nPromedio: %.2f", sum / i); //se utiliza para imprimir el valor de la variable sum en la consola con un formato espec�fico.
}
