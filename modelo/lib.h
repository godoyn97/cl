
/** \brief muestra un menu de opciones por consola
 * \param cadena de caracteres que se va a imprimir por consola
 * \return un entero que es la opcion selecionada
 */

int menu(char[]);

typedef struct
{
    int codigo;
    int numero;
    char nombre[50];
    char apellido[50];
    char abilitado[3];
    int estado;//0:No esta cargado o 1:Si esta cargado
}eAbonado;

typedef struct
{
    int idReclamo;
    char motivo[30];
    int minutos;
    int segundos;
    char solucion[30];

}eReclamo;

void modificarAbonado(eAbonado[],int);

void altaAbonado(eAbonado[],int);

void bajaAbonado(eAbonado[],int);

void informar(eAbonado[],int);

void regisReclamo(eReclamo[],int);
//void inicializarAbonado(eAbonado[], int);

