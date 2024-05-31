#include <stdio.h>
#include <math.h>

void main(void)
{
    int I = 1, B = 0, C;//Declara tres variables de tipo entero I, B y C, inicializa I en 1, B en 0 y C no tiene un valor inicial definido.
    double RES;//Declara una variable de tipo doble llamada RES, que será utilizada para almacenar el resultado de una operación
    RES = 4.0 / I; //Divide 4.0 por el valor de I (que es 1 en este momento) y asigna el resultado a RES.
    C = 1; //Asigna el valor 1 a la variable C.
    while ((fabs (3.1415 - RES)) > 0.0005)// Inicia un bucle while que continuará ejecutándose mientras la diferencia absoluta entre 3.1415 y RES sea mayor que 0.0005
    {
        I += 2 ; //Incrementa el valor de I en 2 en cada iteración del bucle
        if (B) //Comprueba si el valor de B es verdadero (no nulo)
        {
            RES += (double) (4.0 / I);//Si B es verdadero, suma 4.0 dividido por I a RES
            B = 0; // Asigna 0 a B.
        }
        else//Si la condición del if no se cumple, ejecuta el siguiente bloque de código
        {
            RES -= (double) (4.0 / I);//Resta 4.0 dividido por I de RES
            B = 1;//Asigna 1 a B.
        }
        C++;//Incrementa el valor de C en cada iteración del bucle
    }
    printf("\nNumero de terminos:%d", C); //Imprime en la consola el número de términos (el valor de C)
}
