#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

#define ALPHA_ROMEO 1
#define FERRARI 2
#define AUDI 3
#define OTROS 4

void cargaAuto (Marca marc[])
{
    int i;
    int cant;

    printf("\nIngrese cantidad de Marcas: ");
    scanf("%d", &cant);
    getchar();

    for(i=0; i<cant; i++)
    {
        printf("\nId: ");
        scanf("%d", &marc[i].id);
        getchar();

        printf("\nMarca: ");
        fgets(marc[i].marca, 20, stdin);
    }
system("clear");
}
