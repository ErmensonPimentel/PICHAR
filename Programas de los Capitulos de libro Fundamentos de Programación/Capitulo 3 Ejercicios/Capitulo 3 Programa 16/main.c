#include <stdio.h>

void main(void)
{
    int I, MAT, MAMAT, MEMAT; //Aqu� se est�n declarando cuatro variables de tipo entero: I, MAT, MAMAT y MEMAT
    float SUM, PRO, CAL, MAPRO = 0.0, MEPRO = 11.0; //Se declaran cuatro variables de tipo flotante: SUM, PRO, CAL, MAPRO e MEPRO. MAPRO se inicializa en 0.0 y MEPRO en 11.0
    printf("Ingrese la matricula del primer alumno:\t"); //Se muestra en la pantalla un mensaje pidiendo al usuario que ingrese la matr�cula del primer alumno.
    scanf("%d", &MAT); //Se espera a que el usuario ingrese un valor entero para la matr�cula del primer alumno y se almacena en la variable MAT.
    while (MAT) //Se inicia un bucle while que se ejecutar� siempre que el valor de MAT sea diferente de cero.
    {
        SUM = 0; //Se inicializa la variable SUM en 0, esta variable almacenar� la suma de las calificaciones de un alumno.
        for (I = 1; I <= 5; I++)// Se inicia un bucle for que se ejecutar� cinco veces, desde I igual a 1 hasta que I sea menor o igual a 5, incrementando I en cada iteraci�n.
        {
            printf("\tIngrese la calificacion del alumno: ", I); //Se muestra en pantalla un mensaje pidiendo al usuario que ingrese la calificaci�n del alumno. Nota: el valor de I no se est� utilizando aqu�.
            scanf("%f", &CAL); //Se espera a que el usuario ingrese un valor flotante para la calificaci�n y se almacena en la variable CAL.
            SUM += CAL; //Se suma el valor de CAL a la variable SUM, acumulando as� las calificaciones ingresadas.
        }
        PRO = SUM / 5; //Se calcula el promedio (PRO) dividiendo la suma total de las calificaciones (SUM) entre 5 (ya que se ingresaron 5 calificaciones)
        printf("\nMatricula:%d\tPromedio:%5.2f", MAT, PRO); //Se muestra en pantalla la matr�cula del alumno y su promedio.
        if (PRO > MAPRO) //Se verifica si el promedio (PRO) del alumno actual es mayor que el m�ximo promedio (MAPRO) encontrado hasta ahora.
        {
            MAPRO = PRO;
            MAMAT = MAT;//Si el promedio del alumno actual es mayor que el m�ximo promedio encontrado hasta ahora, se actualiza MAPRO con el nuevo promedio y se guarda la matr�cula del alumno en MAMAT.
        }
        if (PRO < MEPRO) //Se verifica si el promedio (PRO) del alumno actual es menor que el m�nimo promedio (MEPRO) encontrado hasta ahora.
        {
            MEPRO = PRO;
            MEMAT = MAT;//Si el promedio del alumno actual es menor que el m�nimo promedio encontrado hasta ahora, se actualiza MEPRO con el nuevo promedio y se guarda la matr�cula del alumno en MEMAT.
        }
        printf("\n\nIngrese la matricula del siguiente alumno: "); //Se pide al usuario que ingrese la matr�cula del siguiente alumno.
        scanf("%d", &MAT); //Se espera a que el usuario ingrese un valor entero para la matr�cula del siguiente alumno y se almacena en la variable MAT.
    }
    printf("\n\nAlumno con mejor Promedio:\t%d\t\%5.2f", MAMAT, MAPRO); //Se muestra en pantalla la matr�cula y el promedio del alumno con el mejor promedio.
    printf("\n\nAlumno con peor Promedio:\t%d\t\%5.2f", MEMAT, MAPRO); //Se muestra en pantalla la matr�cula y el promedio del alumno con el peor promedio.
}
