#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

#define ALPHA_ROMEO 1
#define FERRARI 2
#define AUDI 3
#define OTROS 4
#define TAM 10

void recauPorMarca (Egresos egr[], int cant)

{

int i;
    float importe[4]={0};
    float total=0;

    system("clear");
        printf("\n==========================================================================================\n");
        printf("\t\n                                RECAUDACION TOTAL POR MARCA\n");
        printf("\n==========================================================================================\n");

        for(i=0;i<cant;i++)
        {
            if(egr[i].importe>0)
                total+=egr[i].importe;
            {
                switch(egr[i].marca)
                {
                case 1:
                    importe[0]+=egr[i].importe;
                    break;
                case 2:
                    importe[1]+=egr[i].importe;
                    break;
                case 3:
                    importe[2]+=egr[i].importe;
                    break;
                case 4:
                    importe[3]+=egr[i].importe;
                    break;
                }//fin switch

            }//fin if

        }

printf("\nALPHA_ROMEO\t     FERRARI\t           AUDI\t               OTROS\t             TOTAL\n");
printf("\n==========================================================================================\n");


printf("%5.2f %20.2f %20.2f %20.2f %20.2f", importe[0], importe[1], importe[2], importe[3], total);
printf("\n==========================================================================================\n");

        getchar();
        system("clear");
}
