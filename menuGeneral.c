#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

#define TAM 20
#define TAMANIO 20

int menuGeneral()

{
 system("clear");

Propietarios prop[TAM];
Ingresos ing[TAMANIO];
Egresos egr[TAMANIO];
Marca marc[TAM];

  int ok;
  int ch;
  int opc;

initRegProp(prop,TAM);
harcodeo(prop);
harcodeoIngreso(ing);
harcodeoEgreso(egr);
harcodeoMarcas(marc);

  do
  {

    printf("\n===============================\n");
    printf("==========MENU GENERAL=========");
    printf("\n===============================\n");
    printf("=========CARGA DE DATOS========");
    printf("\n===============================\n");
    printf("\n1. Cargar Propietario");
    printf("\n2. Cargar Ingreso");
    printf("\n3. Cargar Egreso");
    printf("\n4. Cargar Marca");
    printf("\n===============================\n");
    printf("==========LISTAR DATOS=========");
    printf("\n===============================\n");
    printf("\n5. Listar Propietarios");
    printf("\n6. Listar Ingresos");
    printf("\n7. Listar Egresos");
    printf("\n8. Listar marcas");
    printf("\n9. Listar un Propietario por ID");
    printf("\n10. Recaudacion Total");
    printf("\n11. Recaudacion por Marcas");
    printf("\n12. Propietario/Marca");
    printf("\n===============================\n");
    printf("======MODIFICACION DATOS=======");
    printf("\n===============================\n");
    printf("\n13. Baja Propietario");
    printf("\n14. Modificar Datos Propietario");
    printf("\n15. Baja/Egreso");
    printf("\n===============================\n");
    printf("\n16. SALIR");
    printf("\n===============================\n");


    do
    {
      printf("\nOpcion: ");
      fflush(stdout);
      if ((ok = scanf("%d", &opc)) == EOF)
         return EXIT_FAILURE;


      if ((ch = getchar()) != '\n')
      {
         ok = 0;

         while ((ch = getchar()) != EOF && ch != '\n');
      }
   }while(!ok);

printf("\n===============================\n");


switch(opc)
{
case 1: initRegProp(prop,TAM);
	    cargarPropietario(prop, TAM); break;
case 2: cargaIngreso(ing,TAMANIO); break;
case 3: cargaEgresos(egr,TAMANIO); break;
case 4: cargaAuto(marc); break;
case 5: listarPropietarios(prop,TAM); break;
case 6: listarIngreso(ing,TAMANIO); break;
case 7: listarEgreso(egr,TAMANIO); break;
case 8: listarMarca(marc); break;
case 9:  buscaId(prop,TAM); break;
case 10: recaudacionTotal(egr,TAMANIO); break;
case 11: recauPorMarca(egr,TAMANIO); break;
case 12: propMarca(ing,TAMANIO,prop, TAMANIO); break;
case 13: borrarPropietario(prop,TAM); break;
case 14: modificarPropietario(prop,TAM); break;
case 15: EgresoAutos(ing,TAMANIO,egr, TAMANIO,prop,TAM); break;
}
}while(opc!=16);


printf("\nHA DECIDIDO SALIR.\nHASTA LUEGO.\n");
printf("\n===============================\n");

return 0;
getchar();
system("clear");
}
