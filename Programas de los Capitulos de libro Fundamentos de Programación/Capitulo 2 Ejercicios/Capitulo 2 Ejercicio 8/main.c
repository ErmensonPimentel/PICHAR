#include <stdio.h>

void main(void)
{
    int MAT, CAR, SEM;
    float PRO;//Declara variables para almacenar matrícula (MAT), carrera (CAR), semestre (SEM) y promedio (PRO)
    printf ("Ingrese matricula: ");
    scanf("%d", &MAT);
    printf("Ingrese carrera (1-Industrial 2-Telematica 3-Computacion 4-Mecanica) : ");
    scanf("%d", &CAR);
    printf("Ingrese Semestre: ");
    scanf("%d", &SEM);
    printf("Ingrese promedio: ");//Solicita al usuario la matrícula, carrera (con opciones enumeradas), semestre y promedio del estudiante
    scanf("%f", &PRO);
    switch(CAR)//Evalúa la variable CAR para decidir qué acciones tomar en función de la carrera del estudiante
    {
    case 1:
        if (SEM >= 6 && PRO >= 8.5)
            printf("\n%d %d %5.2f", MAT, CAR, PRO);//Si el estudiante está en el semestre 6 o superior y tiene un promedio de 8.5 o más, imprime su matrícula, carrera y promedio
        break;
    case 2:
        if (SEM >= 5 && PRO >= 9.0)
            printf("\n%d %d %5.2f", MAT, CAR, PRO);//Requiere semestre 5 o superior y promedio de 9.0 o más para mostrar la misma información
        break;
    case 3:
        if (SEM >= 6 && PRO >= 8.8)
            printf("\n%d %d %5.2f", MAT, CAR, PRO);//Pide semestre 6 o superior y un promedio de 8.8 o más
        break;
    case 4:
        if (SEM >= 7 && PRO >= 9.0)
            printf("\n%d %d %5.2f", MAT, CAR, PRO);//Exige estar en el semestre 7 o más y tener un promedio de 9.0 o más
        break;
    default:
        printf("\n Error en la carrera");//Si la carrera ingresada no coincide con ninguna de las enumeradas, muestra un mensaje de error
        break;
    }
}
