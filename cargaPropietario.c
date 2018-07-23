#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "funciones.h"
#define TAM 20


void cargarPropietario (Propietarios prop[], int cant)

{
  //system("clear");
  system("cls");

  int i=0;
  char resp='s';

  do
  {
    i = buscaIdLibre(prop,TAM);
    prop[i].est=1;

    printf("\nIngrese el ID: ");
    scanf("%d", &prop[i].id);
    getchar();


    printf("Ingrese el Nombre: ");
    fflush(stdin);
    fgets(prop[i].nombre, 20, stdin);

    printf("Ingrese Tarjeta: ");
    fflush(stdin);
    fgets(prop[i].tarjeta, 20, stdin);


    printf("Ingrese Direccion: ");
    fflush(stdin);
    fgets(prop[i].direccion, 20, stdin);


    printf("\nDesea continuar? (s/n): ");
    scanf("%c", &resp);
    getchar();

  }while(resp!='n');


  //system("clear");
  system("cls");
}
