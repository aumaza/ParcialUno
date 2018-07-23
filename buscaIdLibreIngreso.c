#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


#define TAM 20

int buscaIdLibreIng(Ingresos ing[],int cantidad)
{
int i;
int posicion=-1;
int flag=0;

if(cantidad>0 && ing!=NULL)
{
    for(i=0;i<cantidad;i++)
    {
        if(ing[i].id>0 && ing[i].est==0)
        {
            posicion=i;
            flag=1;
            break;
        }

        else if(flag==1)
        {
            posicion=i+1;
        }
    }
    printf("\nSiguiente ID libre es: %d", (posicion+1));
}
 return posicion;
}
