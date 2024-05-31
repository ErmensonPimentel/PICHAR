#include <stdio.h>

void main(void)
{
    int I, N, NUM, SUM;  //Declara cuatro variables enteras: I, N, NUM, y SUM
    SUM = 0; //Inicializa la variable SUM a 0. SUM se usará para acumular la suma de los números positivos
    printf("Ingrese el numero de datos:\t"); //Imprime en la pantalla el mensaje "Ingrese el numero de datos:"
    scanf("%d", &N); //Lee un número entero desde el teclado y lo almacena en la variable N
    for (I=1; I<=N; I++) //Inicia un bucle for que iterará desde I = 1 hasta I <= N
    {
        printf("Ingrese el dato numero %d\t", I); //Imprime en la pantalla el mensaje "Ingrese el dato numero X" donde X es el valor actual de I
        scanf("%d", &NUM); //Lee un número entero desde el teclado y lo almacena en la variable NUM
        if (NUM > 0) //Comprueba si el número ingresado NUM es mayor que 0
            SUM = SUM + NUM;//Si NUM es mayor que 0, lo suma a SUM
    }
    printf("\nLa suma de los numeros positivos es: %d", SUM); //Imprime en la pantalla el mensaje "La suma de los numeros positivos es:" seguido del valor de SUMs
}
