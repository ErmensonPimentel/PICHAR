#include <stdio.h>

void main(void)
{
    int I, MAT, MAMAT, MEMAT; //Aquí se están declarando cuatro variables de tipo entero: I, MAT, MAMAT y MEMAT
    float SUM, PRO, CAL, MAPRO = 0.0, MEPRO = 11.0; //Se declaran cuatro variables de tipo flotante: SUM, PRO, CAL, MAPRO e MEPRO. MAPRO se inicializa en 0.0 y MEPRO en 11.0
    printf("Ingrese la matricula del primer alumno:\t"); //Se muestra en la pantalla un mensaje pidiendo al usuario que ingrese la matrícula del primer alumno.
    scanf("%d", &MAT); //Se espera a que el usuario ingrese un valor entero para la matrícula del primer alumno y se almacena en la variable MAT.
    while (MAT) //Se inicia un bucle while que se ejecutará siempre que el valor de MAT sea diferente de cero.
    {
        SUM = 0; //Se inicializa la variable SUM en 0, esta variable almacenará la suma de las calificaciones de un alumno.
        for (I = 1; I <= 5; I++)// Se inicia un bucle for que se ejecutará cinco veces, desde I igual a 1 hasta que I sea menor o igual a 5, incrementando I en cada iteración.
        {
            printf("\tIngrese la calificacion del alumno: ", I); //Se muestra en pantalla un mensaje pidiendo al usuario que ingrese la calificación del alumno. Nota: el valor de I no se está utilizando aquí.
            scanf("%f", &CAL); //Se espera a que el usuario ingrese un valor flotante para la calificación y se almacena en la variable CAL.
            SUM += CAL; //Se suma el valor de CAL a la variable SUM, acumulando así las calificaciones ingresadas.
        }
        PRO = SUM / 5; //Se calcula el promedio (PRO) dividiendo la suma total de las calificaciones (SUM) entre 5 (ya que se ingresaron 5 calificaciones)
        printf("\nMatricula:%d\tPromedio:%5.2f", MAT, PRO); //Se muestra en pantalla la matrícula del alumno y su promedio.
        if (PRO > MAPRO) //Se verifica si el promedio (PRO) del alumno actual es mayor que el máximo promedio (MAPRO) encontrado hasta ahora.
        {
            MAPRO = PRO;
            MAMAT = MAT;//Si el promedio del alumno actual es mayor que el máximo promedio encontrado hasta ahora, se actualiza MAPRO con el nuevo promedio y se guarda la matrícula del alumno en MAMAT.
        }
        if (PRO < MEPRO) //Se verifica si el promedio (PRO) del alumno actual es menor que el mínimo promedio (MEPRO) encontrado hasta ahora.
        {
            MEPRO = PRO;
            MEMAT = MAT;//Si el promedio del alumno actual es menor que el mínimo promedio encontrado hasta ahora, se actualiza MEPRO con el nuevo promedio y se guarda la matrícula del alumno en MEMAT.
        }
        printf("\n\nIngrese la matricula del siguiente alumno: "); //Se pide al usuario que ingrese la matrícula del siguiente alumno.
        scanf("%d", &MAT); //Se espera a que el usuario ingrese un valor entero para la matrícula del siguiente alumno y se almacena en la variable MAT.
    }
    printf("\n\nAlumno con mejor Promedio:\t%d\t\%5.2f", MAMAT, MAPRO); //Se muestra en pantalla la matrícula y el promedio del alumno con el mejor promedio.
    printf("\n\nAlumno con peor Promedio:\t%d\t\%5.2f", MEMAT, MAPRO); //Se muestra en pantalla la matrícula y el promedio del alumno con el peor promedio.
}
