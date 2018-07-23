#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

#define ON 0
#define OFF 1
#define TAMANIO 20

void propMarca (Ingresos ing[], int cant, Propietarios prop[], int canti)
{
system("cls");
int i;
int j;
Ingresos auxiliar;

for(i=0;i<cant-1;i++) //ordeno
{
    for(j=i+1;j<cant;j++)
    {
        if(strcmp(ing[i].patente,ing[j].patente)>0)
        {
            auxiliar=ing[i];
            ing[i]=ing[j];
            ing[j]=auxiliar;
        }
    }

}//fin for
system("clear");
printf("\nLISTADO DE PATENTES Y SUS PROPIETARIOS");
printf("\n==============================================================\n");
for(i=0;i<cant;i++)
{
    if(ing[i].est==1)
    {

    printf("\nPATENTE: %s\t\t",ing[i].patente);
    printf("\n==============================================================\n");
    for(j=0;j<canti;j++)
    {
        if(ing[i].propietario==prop[j].id && prop[j].est==1)
        {

    printf("\nID\tESTADO\t    NOMBRE\t    TARJETA\t    DIRECCION\n");
    printf("\n==============================================================\n");
    printf("%d", prop[j].id);
    printf("%10d\t", prop[j].est);
    printf("%10s\t", prop[j].nombre);
    printf("%10s\t", prop[j].tarjeta);
    printf("%10s\t", prop[j].direccion);
    printf("\n==============================================================\n");

	  //listarUnPropietario(prop[j],TAMANIO);

        }
    }
    }

}

getchar();
//system("clear");
system("cls");

}
