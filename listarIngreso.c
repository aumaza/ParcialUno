#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

#define TAM 4
#define TAMANIO 10

void listarIngreso (Ingresos ing[], int cantidad)
{
    system("clear");

    int i;

    printf("\nID\t ESTADO\t\t  PATENTE\t    MARCA\t    PROPIETARIO\n");
    printf("\n========================================================================\n");

    for(i=0; i<cantidad; i++)
    {
      if(ing[i].id>0 && ing[i].id <=cantidad)
      {
        printf("%d", ing[i].id);
        printf("%10d\t", ing[i].est);
        printf("%15s\t", ing[i].patente);
        printf("%15d\t", ing[i].marca);
        printf("%18d\t", ing[i].propietario);
        printf("\n====================================================================\n");
      }
    }
    getchar();
    system("clear");
}
