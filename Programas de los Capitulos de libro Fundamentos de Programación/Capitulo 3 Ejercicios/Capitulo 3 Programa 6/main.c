#include <stdio.h>

void main(void)
{
    int I = 0;//Declara una variable entera I y la inicializa a 0. Esta variable se usará para contar el número de salarios ingresados
    float SAL, PRO, NOM = 0; //Declara tres variables de tipo flotante. SAL almacenará el salario ingresado, PRO será el promedio de los salarios y NOM es la suma acumulada de los salarios, que se inicializa a 0
    printf("Ingrese el salario del profesor:\t"); //Imprime un mensaje en la consola pidiendo al usuario que ingrese el salario del profesor
    scanf("%f", &SAL); //Lee un número flotante ingresado por el usuario y lo almacena en la variable SAL
    do //Comienza un bucle do-while, que asegura que el bloque de código se ejecute al menos una vez
    {
        NOM = NOM + SAL; //Suma el salario ingresado SAL a la variable NOM, que acumula la suma de todos los salarios ingresados
        I = I + 1; //Incrementa el contador I en 1
        printf("Ingrese el salario del profesor -0 para terminar- :\t");//Imprime un mensaje pidiendo al usuario que ingrese otro salario o 0 para terminar
        scanf("%f", &SAL); //Lee el siguiente salario ingresado por el usuario y lo almacena en la variable SAL
    }
    while (SAL); //La condición del bucle do-while. El bucle se repite mientras SAL no sea 0
    PRO = NOM / I; //Calcula el promedio de los salarios dividiendo la suma total NOM por el contador I
    printf("\nNomina: %.2f \t Promedio de salarios: %.2f", NOM, PRO); //Imprime en la consola la nómina total NOM y el promedio de salarios PRO, con dos decimales
}
