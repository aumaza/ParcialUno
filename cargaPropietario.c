#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "funciones.h"
#define TAM 20


void cargarPropietario (Propietarios prop[], int cant)

{
  system("clear");

  int i=0;
  char resp='s';
  int index=0;

  do
  {
    prop[index].id = buscaIdLibre(prop,TAM);

    printf("\nIngrese el ID: ");
    scanf("%d", &prop[i].id);
    getchar();


    printf("\nIngrese el Nombre: ");
    fflush(stdin);
    fgets(prop[i].nombre, 20, stdin);

    printf("\nIngrese Tarjeta: ");
    fflush(stdin);
    fgets(prop[i].tarjeta, 20, stdin);


    printf("\nIngrese Direccion: ");
    fflush(stdin);
    fgets(prop[i].direccion, 20, stdin);


    printf("\nDesea continuar? (s/n): ");
    scanf("%c", &resp);
    getchar();
  }while(resp!='n');


  system("clear");
}
