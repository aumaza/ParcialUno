#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

#define TAM 4




void listarUnPropietario (Propietarios prop[], int cant)
{
//system("clear");
system("cls");
    int i=0;


    printf("\nID\tESTADO\t    NOMBRE\t    TARJETA\t    DIRECCION\n");
    printf("\n==============================================================\n");
    printf("%d", prop[i-1].id);
    printf("%10d\t", prop[i-1].est);
    printf("%10s\t", prop[i-1].nombre);
    printf("%10s\t", prop[i-1].tarjeta);
    printf("%10s\t", prop[i-1].direccion);

    getchar();
    //system("clear");
    system("cls");


}
