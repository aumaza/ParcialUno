#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

#define TAMANIO 20



void EgresoAutos(Ingresos ing[],int cant_ingreso,Egresos egr[],int cant_egreso,Propietarios prop[],int cant_prop)
{
int i=0;
int j;
int estadia;
int id;
int indice=0;
int Total_pagar=0;
int PropAux;
int flagIngreso=0;
int primeravez=0;
char resp='N';

if(ing!=NULL && prop !=NULL && prop!=NULL)
{
  listarIngreso(ing,TAMANIO);
  printf("\nIngrese el ID de Ingreso de la patente que deja el estacionamiento");

  id = pideDato();

 for(j=0;j<cant_ingreso;j++)
  {
    if(ing[j].id==id)
    indice=j;
  }


if(indice>0)

  {
   for(i=0;i<cant_prop;i++)
     {
      flagIngreso=1;

       if(ing[indice].propietario==prop[i].id && prop[i].est>0)
         {
          estadia=devolverHorasEstadia();
          PropAux=prop[i].id;

switch (ing[i].marca)

{
case 1: Total_pagar=estadia*150; break;
case 2: Total_pagar=estadia*100; break;
case 3: Total_pagar=estadia*200; break;
case 4: Total_pagar=estadia*50;  break;
}

//mostrarIngresos(Ingresos ing[indice],cant_egreso);
if(primeravez==0)

{
printf("\n=================================================\n");
printf("\n============TICKET ESTACIONAMIENTO============\n");
printf("\nID del Propietario: %d", prop[PropAux-1].id);
printf("\nNOMBRE Y APELLIDO: %s", prop[PropAux-1].nombre);
printf("\nPATENTE: %s", ing[indice].patente);
primeravez=1;
}

printf("\n=================================================\n");
printf("\n Tiempo de Estadia: %d",estadia);
printf("\tTotal a abonar: %d\n",Total_pagar);
getchar();

}//fin for
}//fin if lista
}//fin for

resp = responder();
if((resp='S'))
  {
   ing[i].est=0;

/*printf("\nID: %d", ing[i].id);
printf("\nPATENTE: %s", ing[i].patente);*/

printf("\n==========EGRESO REALIZADO===========\n");
getchar();

  }

if(flagIngreso==0)
{
printf("\nNo se encuentra ingresado el propietario");
}

getchar();


}//fin if distinto de Null
//system("clear");
system("cls");

}
