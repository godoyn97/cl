#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
#define TAM 5




int main()
{
    eAbonado listaAbonado[TAM];
    int i;
    int opcion;
    for(i=0; i<TAM; i++)
    {
        listaAbonado[i].estado = 0;
    }

    do
    {
        opcion=menu("1.ALTA DEL ABONADO\n2.MODIFICAR DATOS DEL ABONADO\n3.BAJA DEL ABONADO\n4.NUEVA LLAMADA\n5.FIN LLAMADA\n6.INFORMAR\n7.SALIR\n ");
        switch(opcion)
        {
        case 1:
            //cargarMedicamentos(listaMedicamentos, TAM);
            altaAbonado(listaAbonado,TAM);
            break;
        case 2:
            modificarAbonado(listaAbonado, TAM);
            break;
        case 3:
            //ordenarMedicamentos(listaMedicamentos,TAM);
            break;
        case 4:
            //editarLaboratorio(listaMedicamentos,TAM);
            break;
        case 5:
            //bajaMedicamentos(listaMedicamentos,TAM);
            break;
        case 6:
            informar(listaAbonado, TAM);
            break;
        case 7:
            break;
        }

    }
    while(opcion!=7);


    return 0;
}



