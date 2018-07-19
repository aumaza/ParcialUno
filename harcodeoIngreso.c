#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "funciones.h"

#define ON 0
#define OFF 1
#define ALPHA_ROMEO 1
#define FERRARI 2
#define AUDI 3
#define OTROS 4

void harcodeoIngreso (Ingresos ing[])

{

int i;
int id[]= {1,2,3,4,5,6,7,8,9,10};
char patente[][20]= {"AAA","CCC","DDD","BBB","ZZZ","III","HHH","EEE","FFF","GGG"};
int marca[]= {1,3,3,2,2,3,3,4,3,1};
int propietario[]={2,1,2,1,3,3,2,1,2,3};
int est[]= {OFF,OFF,OFF,OFF,OFF,OFF,OFF,OFF,OFF,OFF};


for(i=0; i<10; i++)
{

    ing[i].id=id[i];
    strcpy(ing[i].patente,patente[i]);
    ing[i].marca=marca[i];
    ing[i].propietario=propietario[i];
    ing[i].est = est[i];

}
}
