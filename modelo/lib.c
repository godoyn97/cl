#include "lib.h"
#include <stdio.h>
#include <string.h>

int menu(char texto[])
{
    int opcion;
    printf("%s", texto);
    scanf("%d", &opcion);

    return opcion;
}

void mostrarAbonado(eAbonado abo)
{
    printf("\n Nombre: %s\nApellido: %s", abo.nombre, abo.apellido);
}

void modificarAbonado(eAbonado lista[],int tam)
{
    int code;
    int i;
    char auxAbonado[50];
    printf("ingrese ID del abonado a editar");
    scanf("%d",&code);

    for(i=0; i<tam; i++)
    {
        if(lista[i].codigo==code)
        {
            mostrarAbonado(lista[i]);
            system("pause");
            printf("Ingrese el nuevo nombre: ");
            fflush(stdin);
            gets(auxAbonado);
            strcpy(lista[i].nombre,auxAbonado);
            mostrarAbonado(lista[i]);
            system("pause");
            printf("Ingrese el nuevo apellido: ");
            fflush(stdin);
            gets(auxAbonado);
            strcpy(lista[i].apellido,auxAbonado);

            //strcpy(lista[i]abilitado,abilitado[i]);

        }
    }
}

void altaAbonado(eAbonado lista[], int t)
{
    int i;
    //int id = 0;
    for(i=0; i<t; i++)
    {
        if(lista[i].estado==0)
        {
            lista[i].codigo=i;

            printf("Ingrese nombre: ");
            fflush(stdin);
            gets(lista[i].nombre);
            printf("Ingrese apellido: ");
            fflush(stdin);
            gets(lista[i].apellido);
            printf("Ingrese numero: ");
            scanf("%d",&lista[i].numero);

            regisReclamo(i,t);



            lista[i].estado = 1;

            break;
        }
    }

}

void bajaAbonado(eAbonado lista[],int tam)
{
    int code;
    int i;
    printf("Ingrese el ID que desea dar de baja: ");
    scanf("%d",&code);

    for(i=0; i<tam; i++)
    {
        if(lista[i].codigo==code)
        {
            lista[i].estado=0;
        }
    }



}

void informar(eAbonado lista[],int t)
{
    int i;
    for(i=0; i<t; i++)
    {
        if(lista[i].estado==1)
        {
            mostrarAbonado(lista[i]);
        }

    }
}

void regisReclamo(eReclamo listaR[],int t)
{
    int i;
    for(i=0;i<t;i++)
    {
        listaR[i].idReclamo=i;
        printf("Ingrese motivo del reclamo: ");
        fflush(stdin);
        gets(listaR[i].motivo);
        printf("Ingrese el tiempo que duro la llamada (minutos): ");
        scanf("%d",listaR[i].minutos);
        printf("Ingrese los segundos que duro la llamada");
        scanf("%d",listaR[i].segundos);
        printf("Escriba si fue: SOLUCIONADO; NO SOLUCIONADO; EN CURSO");
        gets(listaR[i].solucion);
    }

}


