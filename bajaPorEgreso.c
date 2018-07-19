#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

#define TAMANIO 10
#define TAM 4


void EgresoAutos(Ingresos ing[],int cant_ingreso,Egresos egr[],int cant_egreso,Propietarios prop[],int cant_prop)
{
int i;
int j;
int estadia;
int id;
int indice=0;
int Total_pagar;
int PropAux;
int flagIngreso=0;
int primeravez=0;
char resp='N';

if(ing!=NULL && prop !=NULL && prop!=NULL)
{
  listarIngreso(ing,TAMANIO);
  printf("\nIngrese el ID del auto que deja el estacionamiento");

  id = pideDato();

 for(j=0;j<cant_ingreso;j++)
  {
    if(ing[j].propietario==id)
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
case 2: Total_pagar=estadia *100; break;
case 3: Total_pagar=estadia*200;  break;
case 4: Total_pagar=estadia*50; break;
}

//mostrarIngresos(Ingresos ing[indice],cant_egreso);
if(primeravez==0)

{
printf("\n=================================================\n");
printf("\n============TICKET ESTACIONAMIENTO============\n");
printf("\nEl propietario: %d",PropAux);
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

   //listarEgreso(egr,TAMANIO);

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

}
