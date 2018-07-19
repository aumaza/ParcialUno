#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char responder()

{
    char resp;


    printf("\nDesea Continuar? S(si) / N(no): ");
    fflush(stdin);
    scanf("%s",&resp);
    resp=toupper(resp);
    while(resp!='S'&& resp!='N')
    {
      printf("\nDebe ingresar S(si) N(no)\n");
      scanf("%s",&resp);
      resp=toupper(resp);
    }

    return resp;
}
