#include <stdio.h>

void main(void)
{
    int VOT, C1 = 0, C2 = 0, C3 = 0, C4 = 0, C5 = 0, NU = 0, SVO;//Declara varias variables de tipo entero (int), incluyendo VOT, C1, C2, C3, C4, C5, NU y SVO
    float PO1, PO2, PO3, PO4, PO5, PON;//Declara varias variables de tipo flotante (float), incluyendo PO1, PO2, PO3, PO4, PO5 y PON.
    printf("Ingrese el primer voto: "); //Muestra un mensaje en la consola solicitando al usuario que ingrese el primer voto.
    scanf("%d", &VOT);//Lee el valor ingresado por el usuario y lo almacena en la variable VOT.
    while (VOT)//nicia un bucle while que se ejecutará mientras VOT sea diferente de 0 (es decir, mientras el usuario no ingrese "0" para terminar)
    {
        switch(VOT) //Inicia una estructura de selección switch que evalúa el valor de VOT.
        {
            case 1: C1++; break;//Si VOT es igual a 1, incrementa el contador C1 en 1.
            case 2: C2++; break;//Si VOT es igual a 2, incrementa el contador C2 en 1.
            case 3: C3++; break;//Si VOT es igual a 3, incrementa el contador C3 en 1.
            case 4: C4++; break;//Si VOT es igual a 4, incrementa el contador C4 en 1.
            case 5: C5++; break;//Si VOT es igual a 5, incrementa el contador C5 en 1.
            default: NU++; break;//Si VOT no coincide con ningún caso anterior, incrementa el contador NU en 1 para contabilizar votos nulos.
        }
        printf("Ingrese el siguiente voto -0 para terminar-: ");//Muestra un mensaje solicitando al usuario que ingrese el siguiente voto, indicando que puede ingresar "0" para terminar
        scanf("%d", &VOT);//Lee el siguiente valor ingresado por el usuario y lo almacena en la variable VOT.
    }
    SVO = C1 + C2 + C3 + C4 + C5 + NU;//Calcula el total de votos sumando los contadores de cada candidato y los votos nulos.
    PO1 = ((float) C1 / SVO) * 100;//Calcula el porcentaje de votos para el candidato 1, convirtiendo C1 a tipo flotante para obtener una división decimal.
    PO2 = ((float) C2 / SVO) * 100;//Calcula el porcentaje de votos para el candidato 1, convirtiendo C2 a tipo flotante para obtener una división decimal.
    PO3 = ((float) C3 / SVO) * 100;//Calcula el porcentaje de votos para el candidato 1, convirtiendo C3 a tipo flotante para obtener una división decimal.
    PO4 = ((float) C4 / SVO) * 100;//Calcula el porcentaje de votos para el candidato 1, convirtiendo C4 a tipo flotante para obtener una división decimal.
    PO5 = ((float) C5 / SVO) * 100;//Calcula el porcentaje de votos para el candidato 1, convirtiendo C5 a tipo flotante para obtener una división decimal.
    PON = ((float) NU / SVO) * 100;//Calcula el porcentaje de votos para el candidato 1, convirtiendo NU a tipo flotante para obtener una división decimal.
    printf("\nTotal de votos: %d", SVO);
    printf("\n\nCandidato 1: %d votos -- Porcentaje: %5.2f", C1, PO1);
    printf("\nCandidato 2: %d votos -- Porcentaje: %5.2f", C2, PO2);
    printf("\nCandidato 3: %d votos -- Porcentaje: %5.2f", C3, PO3);
    printf("\nCandidato 4: %d votos -- Porcentaje: %5.2f", C4, PO4);
    printf("\nCandidato 5: %d votos -- Porcentaje: %5.2f", C5, PO5);
    printf("\nNulos: %d votos -- Porcentaje: %5.2f", NU, PON);
}
