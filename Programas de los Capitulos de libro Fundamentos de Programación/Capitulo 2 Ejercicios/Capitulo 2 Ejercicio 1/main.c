#include <stdio.h>
#include <stdlib.h>

void main(void)//define como funcion principal a Void y main es el punto donde inicia el programa
{
    float PRO;// declara una variable de tipo float para almacenar datos llamada PRO
    printf("ingrese el promedio del alumno: "); //Muestra el mensaje usando el comando printf usado para mostrar el texto en pantalla
    scanf("%f", &PRO); // lee un numero ingresado por el usauraio
    if (PRO >= 6) // revisa si el valor de pro es igual a 6 o si se cumplen las condciones
        printf("\nAprobado"); // y si se cumplen las condiciones proporcionadas por if anteriormente. aparecera el mensaje en pantalla
}
