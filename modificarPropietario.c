#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

#define ON 0
#define OFF 1
#define TAM 4
#define TAMANIO 10


int modificarPropietario(Propietarios prop[],int cant)
{
  //int i;
  int index;
  int ok;
  int ch;
  int opc;

  //i=PedirEntero("Ingrese el id del propietario");
  index = buscaId(prop,cant);
  if(index!=-1)
    {
        prop[index].id = index+1;
        fflush(stdin);

	do
	{

	printf("\nSeleccione la opcion: ");
	printf("\n=======================\n");
	printf("\n1. Modificar Nombre: ");
	printf("\n2. Modificar Tarjeta de Credito: ");
	printf("\n3. Modificar Direccion: ");
	printf("\n4. Modificar Estado: ");
	printf("\n5. Salir");


	do
	{
	printf("\nOpcion: ");
	fflush(stdout);
	if ((ok = scanf("%d", &opc)) == EOF)
	  {
	  return EXIT_FAILURE;
        }

	  if ((ch = getchar()) != '\n')
	    {
	      ok = 0;

	  while ((ch = getchar()) != EOF && ch != '\n');
	    }
	}while(!ok);

	switch(opc)
	{
	  case 1: printf("\nIngrese Nombre: ");
		  fgets(prop[index].nombre, 20, stdin);
		  fflush(stdin);
		  printf("\nDato modificado con exito!!");
		  printf("\n============================\n\n");
		  break;

	  case 2: printf("\nIngrese Numero de tarjeta: ");
		  fgets(prop[index].tarjeta, 20, stdin);
		  fflush(stdin);
		  printf("\nDato modificado con exito!!");
		  printf("\n============================\n\n");
		  break;

	  case 3: printf("\nIngrese nueva direccion: ");
		  fgets(prop[index].direccion, 20, stdin);
		  fflush(stdin);
		  printf("\nDato modificado con exito!!");
		  printf("\n============================\n\n");
		  break;

      case 4: printf("\nIngrese el nuevo estado: ");
		      scanf("%d", &prop[index].est);
		      getchar();
		      printf("\nDato modificado con exito!!");
		      printf("\n============================\n\n");
		      break;
	}
	}while(opc !=5);
    }

    else
    {
        printf("Usuario no encontrado!!!");
    }
    //getchar();
    system("clear");
    return 0;
}
