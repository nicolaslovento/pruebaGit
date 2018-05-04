#include <stdio.h>
#include <stdlib.h>
#define TAMU 100
#define TAMP 1000
#include "Funciones.h"
int main()
{
    eUsuarios listaDeUsuarios[TAMU];
    eProductos listaDeProductos[TAMP];
    eUsuarios_init(listaDeUsuarios,TAMU);

    char seguir='s';
    int opcion;
    do
    {


        printf("1- ALTA USUARIO \n");
        printf("2- \n");
        printf("3- \n");
        printf("4-\n");
        printf("5- \n");
        printf("6- \n");
        printf("7- \n");
        printf("8- \n");
        printf("9-\n");
        printf("10-LISTAR USUARIOS. \n");
        printf("11- SALIR.");


        scanf(" %d",&opcion);

        switch(opcion)
        {

            case 1:
                eUsuarios_buscarLugarLibre(listaDeUsuarios,TAMU);
                eUsuarios_alta(listaDeUsuarios,TAMU);
                eUsuarios_siguienteId(listaDeUsuarios,TAMU);
            break;

            case 2:
            break;

            case 3:

            break;

            case 4:
            break;

            case 5:
            break;

            case 6:
            break;

            case 7:
            break;

            case 8:
            break;

            case 9:
            break;

            case 10:

                eUsuarios_mostrarListado(listaDeUsuarios,TAMU);
            break;



            case 11:
                seguir='n';
            break;

        }

}while(seguir=='s');

return 0;
}
