#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

//#define TAM 4




void listarPropietarios (Propietarios prop[], int cant)
{
//system("clear");
system("cls");
    int i;

    printf("\nID\tESTADO\t    NOMBRE\t    TARJETA\t    DIRECCION\n");
    printf("\n==============================================================\n");
    for(i=0; i<cant; i++)
    {
        if(prop[i].est == 1)
        {
        printf("%d\t", prop[i].id);
        printf("%d\t", prop[i].est);
        printf("%10s\t", prop[i].nombre);
        printf("%10s\t", prop[i].tarjeta);
        printf("%10s\t", prop[i].direccion);
        printf("\n==============================================================\n");
        }
    }

    getchar();
    //system("clear");
    system("cls");
}
