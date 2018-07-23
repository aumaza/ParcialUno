#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"


#define TAMANIO 10


void listarEgreso (Egresos egr[], int cantidad)
{
   //system("clear");
   system("cls");
   int i;

   printf("\nID\tMARCA\tIMPORTE");
   printf("\n==================================\n");

    for(i=0; i<cantidad; i++)
    {
      if(egr[i].id>0 && egr[i].est==1)
      {
        printf("%d", egr[i].id);
        printf("%10d", egr[i].marca);
        printf("%12.2f", egr[i].importe);
        printf("\n==================================\n");
      }
    }
    getchar();
    //system("clear");
    system("cls");
}
