#include <stdio.h>
void main(void)
{
    float P, R, S;//Declara tres variables P, R y S para almacenar las ventas de los tres vendedores
    printf("\nIngrese las ventas de los tres vendedores: ");//Pide al usuario que ingrese las ventas de los tres vendedores
    scanf("%f %f %f", &P, &S, &R);//Lee las ventas ingresadas y las guarda en P, S y R
    if (P > S)//Comprueba si las ventas de P son mayores que las de S
        if (P > R)//Si P es mayor que S, comprueba si también es mayor que R
            if (S > R)//Si P es mayor que R, comprueba si S es mayor que R
                printf("\n\n El orden es P, S y R: %8.2f %8.2f %8.2f", P, S, R);//Si P > S > R, muestra el orden P, S, R
            else//Si S no es mayor que R
                printf("\n\n El orden es P, R y S: %8.2f %8.2f %8.2f", P, R, S);//Si P > R > S, muestra el orden P, R, S
        else//Si P no es mayor que R
            printf("\n\n El orden es R, P y S: %8.2f %8.2f %8.2f", R, P, S);//Si R > P > S, muestra el orden R, P, S
    else if (S > R)//Si P no es mayor que S, comprueba si S es mayor que R
        if (P > R)//Si S es mayor que R, comprueba si P es mayor que R
            printf("\n\n El orden es S, P y R: %8.2f %8.2f %8.2f", S, P, R);//Si S > P > R, muestra el orden S, P, R
        else//Si P no es mayor que R
            printf("\n\n El orden es S, R y P: %8.2f %8.2f %8.2f", S, R, P);//Si S > R > P, muestra el orden S, R, P
    else//Si S no es mayor que R
        printf("\n\n El orden es R, S y P: %8.2f %8.2f %8.2f", R, S, P);//Si R > S > P, muestra el orden R, S, P
}
