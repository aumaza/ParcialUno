#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

#define ON 0
#define OFF 1
//#define TAM 4
#define TAMANIO 10

int initRegProp(Propietarios prop[],int cant)
{
   int i;
   int retorno=-1;
   if(cant > 0 && prop != NULL)
   {
       for(i=0;i<cant;i++)
       {
           retorno=0;
           prop[i].est=OFF;
        }
   }
    return retorno;
}
