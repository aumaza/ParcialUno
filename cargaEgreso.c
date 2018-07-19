#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"


#define TAMANIO 15

void cargaEgresos (Egresos egr[], int cant)
{
system("clear");

int i;
i=buscaIdLibreEgr(egr,TAMANIO);
char resp='s';


do
{

printf("\nID: ");
scanf("%d", &egr[i].id);
getchar();

printf("\nId Marca: ");
scanf("%d", &egr[i].id);
getchar();

fflush(stdin);

printf("\nIngrese el Importe: ");
fflush(stdin);
scanf("%f", &egr[i].importe);


printf("\nDesea Continuar?: ");
scanf("%c", &resp);
getchar();

}while(resp!='n');



getchar();
system("clear");
}
