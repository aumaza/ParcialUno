#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


#define TAM 20

int buscaIdLibre(Propietarios prop[],int cantidad)

{
int i;
int pos=-1;
int flag=0;


if(cantidad>0 && prop!=NULL)
{
    for(i=0;i<cantidad;i++)
    {
        if(prop[i].id>0 && prop[i].est==0)
        {

        pos=i;
        flag=1;
        break;

        }

        else if(flag==1)
        {
            pos=i+1;
        }

    }

printf("\nSiguiente ID libre es: %d", (pos+1));
}

 return pos;
}
