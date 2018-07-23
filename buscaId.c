#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

#define TAM 4

int buscaId (Propietarios prop[], int cant)

{
//system("clear");
system("cls");
int i=0;
int dato;
int indice=0;
char flag='F';

printf("\nIngrese el ID a Buscar: ");
scanf("%d", &dato);
getchar();

while ((flag=='F') && (prop[i].id>0 && prop[i].id<=cant))
{
if(prop[i].id == dato)
{
    flag = 'V';
    indice=i;
}
i++;
}

if(flag=='F')
{

printf("\nEl ID Inexistente");
printf("\n=========================================\n");

}

else if(flag=='V')
{
printf("\nID Existente");
printf("\nID\tESTADO\t    NOMBRE\t    TARJETA\t    DIRECCION\n");
printf("\n==============================================================\n");
printf("%d\t", prop[indice].id);
printf("%d\t", prop[indice].est);
printf("%10s\t", prop[indice].nombre);
printf("%10s\t", prop[indice].tarjeta);
printf("%10s\t", prop[indice].direccion);
printf("\n==============================================================\n");
}
    getchar();
    //system("clear");
    system("cls");

  return indice;

}
