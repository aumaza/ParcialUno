#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


#define TAM 20

int buscaIdLibre(Propietarios prop[],int cantidad)

{
int i;
int pos=-1;


if(cantidad>0 && prop!=NULL)
{
    for(i=0;i<cantidad;i++)
    {
        if(prop[i].id==0 && prop[i].id <= cantidad)
        {

        pos=i;
        pos++;
        break;

        }

    }

  printf("\nSiguiente ID libre es: %d", pos);
}

 return pos;
}
