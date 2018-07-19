#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

#define TAM 10

void recaudacionTotal (Egresos egr[], int cant)

{
system("clear");

int i;
float acum=0;
int conta=0;



for(i=0; i<cant; i++)
{
conta++;
acum +=egr[i].importe;
}
printf("\n==================================\n");
printf("========RECAUDACION TOTAL========");
printf("\n==================================\n");
printf("Cantidad Autos\t Recaudacion Total");
printf("\n==================================\n");
printf("%8d\t", conta);
printf("%15.2f\t", acum);
printf("\n==================================\n");

    getchar();
    system("clear");
}
