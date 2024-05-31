#include <stdio.h>
void main(void)
{
    float SAL;//Declara la variable SAL para almacenar el salario como número decimal
    int NIV;//Declara la variable NIV para almacenar el nivel académico como un número entero
    printf("Ingrese el nivel academico del profesor: ");//Pide al usuario que ingrese el nivel académico del profesor
    scanf("%d", &NIV);//Lee el nivel ingresado y lo guarda en NIV
    printf("Ingrese el salario: ");//Pide al usuario que ingrese el salario del profesor
    scanf("%f", &SAL);//Lee el salario ingresado y lo guarda en SAL
    switch(NIV)// Evalúa la variable NIV para determinar el ajuste del salario según el nivel académico
    printf("Ingrese el salario: ");//Pide al usuario que ingrese el salario del profesor
    scanf("%f", &SAL);//Lee el salario ingresado y lo guarda en SAL
    switch(NIV)// Evalúa la variable NIV para determinar el ajuste del salario según el nivel académico
    {
        case 1: SAL = SAL * 1.0035; break;//Si NIV es 1, incrementa SAL en un 0.35%
        case 2: SAL = SAL * 1.0041; break;//Si NIV es 2, incrementa SAL en un 0.41%
        case 3: SAL = SAL * 1.0048; break;//Si NIV es 3, incrementa SAL en un 0.48%
        case 4: SAL = SAL * 1.0053; break;//Si NIV es 4, incrementa SAL en un 0.53%
    }
    printf("\n\nNivel: %d \tNuevo salario: %8.2f",NIV, SAL);//Muestra el nivel académico y el nuevo salario con 2 decimales
}
