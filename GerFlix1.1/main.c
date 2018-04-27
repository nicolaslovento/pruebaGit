#include <stdio.h>
#include <stdlib.h>
#include "Usuario.h"
#define TAMS 15
#define TAMU 100
int main()
{
    eSerie listadoDeSerie[TAMS];
    eUsuario listadoDeUsuario[TAMU];

    inicializarSeriesEstado(listadoDeSerie,TAMS);
    inicializarSeriesHardCode(listadoDeSerie);

    inicializarUsuariosEstado(listadoDeUsuario,TAMU);
    inicializarUsuariosHardCode(listadoDeUsuario);


    char salida='n';
    int opcion;
    do{
        printf("1. Mostrar lista de series.");
        printf("2. Mostrar lista de usuarios");


        switch(opcion)
        {
        case 1:








        }


        printf("Seleccione una opcion: ");
        scanf("%d",&opcion);




    }while(salida=='n');



    return 0;
}
