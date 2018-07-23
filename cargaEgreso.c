#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"


#define TAMANIO 15

void cargaEgresos (Egresos egr[], int cant)
{
//system("clear");
system("cls");

int i;

char resp='s';


do
{
i=buscaIdLibreEgr(egr,TAMANIO);
egr[i].est=1;

printf("\nID: ");
scanf("%d", &egr[i].id);
getchar();

printf("\nId Marca: ");
scanf("%d", &egr[i].marca);
getchar();

fflush(stdin);

printf("\nIngrese el Importe: ");
fflush(stdin);
scanf("%f", &egr[i].importe);
getchar();


printf("\nDesea Continuar? (s/n): ");
scanf("%c", &resp);
getchar();


}while(resp !='n');

//system("clear");
system("cls");
}
