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

void harcodeoEgreso (Egresos egr[])

{

int i;
int id[]={1,2,3,4,5,6,7,8,9,10};
int marca[]= {1,1,2,3,2,2,3,4,1,1};
float importe[]= {100,200,100,300,100,100,200,200,100,100};
int est[]= {OFF,OFF,OFF,OFF,OFF,OFF,OFF,OFF,OFF,OFF};


for(i=0; i<10; i++)
{

    egr[i].id=id[i];
    egr[i].marca=marca[i];
    egr[i].importe=importe[i];
    egr[i].est=est[i];


}
}
