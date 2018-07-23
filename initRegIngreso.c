#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"


//#define TAM 4
//#define TAMANIO 10

int initRegIngreso(Ingresos ing[],int cant)
{
   int i;
   int retorno=-1;
   if(cant > 0 && ing != NULL)
   {
       for(i=0;i<cant;i++)
       {
           retorno=0;
           ing[i].est=0;
        }
   }
    return retorno;
}
