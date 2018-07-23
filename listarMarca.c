#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

#define ALPHA_ROMEO 1
#define FERRARI 2
#define AUDI 3
#define OTROS 4


void listarMarca (Marca marc[])
{
    //system("clear");
    system("cls");

    int i;

    printf("\nID\t    MARCA");
    printf("\n==================================\n");

    for(i=0; i<4; i++)
    {

        printf("%d", marc[i].id);
        printf("%15s", marc[i].marca);
        printf("\n==================================\n");

    }
    getchar();
    //system("clear");
    system("cls");
}
