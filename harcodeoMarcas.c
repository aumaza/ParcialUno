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



void harcodeoMarcas (Marca marc[])

{
int i;

int id[]= {1,2,3,4};
char marca[][20]={"ALPHA_ROMEO","FERRARI","AUDI","OTROS"};

for(i=0; i<4; i++)
{
    marc[i].id=id[i];
    strcpy(marc[i].marca,marca[i]);
}

}
