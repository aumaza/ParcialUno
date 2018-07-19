#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


#define TAM 20

int buscaIdLibreEgr(Egresos egr[],int cantidad)
{
int i;
int posicion=-1;

if(cantidad>0 && egr!=NULL)
{
    for(i=0;i<cantidad;i++)
    {
        if(egr[i].id==0)
        {
            posicion=i;
            posicion++;
            break;
        }
    }
    printf("\nSiguiente ID libre es: %d", posicion);
}
 return posicion;
}
