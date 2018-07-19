#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct
{
    int id;
    int est;
    char nombre[20];
    char tarjeta[20];
    char direccion[20];
}Propietarios;

typedef struct
{
    int id;
    int est;
    char patente[20];
    int marca;
    int propietario;
}Ingresos;

typedef struct
{
    int id;
    char marca[20];
}Marca;

typedef struct
{
    int id;
    int est;
    int marca;
    float importe;

}Egresos;

//PROTOTIPOS

int  menuGeneral();
void cargarPropietario (Propietarios prop[], int cant);
void harcodeo (Propietarios prop[]);
int  initRegProp(Propietarios prop[],int cant);
void harcodeoIngreso (Ingresos ing[]);
void harcodeoEgreso (Egresos egr[]);
void harcodeoMarcas (Marca marc[]);
void listarPropietarios (Propietarios prop[], int cant);
int  buscaIdLibre(Propietarios prop[],int cantidad);
void listarIngreso (Ingresos ing[], int cantidad);
void listarEgreso (Egresos egr[], int cantidad);
void listarMarca (Marca marc[]);
int  buscaId (Propietarios prop[], int cant);
void listarUnPropietario (Propietarios prop[], int cant);
void propMarca (Ingresos ing[], int cant, Propietarios prop[], int canti);
void borrarPropietario(Propietarios prop[],int cant);
int  modificarPropietario(Propietarios prop[],int cant);
void recaudacionTotal (Egresos egr[], int cant);
void recauPorMarca (Egresos egr[], int cant);
int  devolverHorasEstadia();
void EgresoAutos(Ingresos ing[],int cant_ingreso,Egresos egr[],int cant_egreso,Propietarios prop[],int cant_prop);
int  pideDato ();
char responder();
int  buscaIdLibreEgr(Egresos egr[],int cantidad);
void cargaEgresos (Egresos egr[], int cant);
void cargaAuto (Marca marc[]);
void cargaIngreso (Ingresos ing[], int cantidad);
int  buscaIdLibreIng(Ingresos ing[],int cantidad);


#endif // FUNCIONES_H_INCLUDED
