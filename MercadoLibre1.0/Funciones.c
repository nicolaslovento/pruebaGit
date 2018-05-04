#include "Funciones.h"
#include <stdio.h>
#include <stdlib.h>











int eUsuarios_mostrarUno(eUsuarios parametro)
{
     printf("\n %s - %d - %d\n",parametro.nombre,parametro.idUsuario,parametro.estado);

}

int eUsuarios_mostrarListado(eUsuarios listado[],int limite)
{
    int retorno=-1;
    int i;
    for(i=0; i<limite; i++)
        {
            if(listado[i].estado==1)
            {

                eUsuarios_mostrarUno(listado[i]);
                retorno=0;
            }
        }
        return retorno;
    }



int eUsuarios_alta(eUsuarios  listado[],int limite)
{
    int retorno = -1;
    char nombre[50];
    int id;
    int indice;

    if(limite > 0 && listado != NULL)
    {
        retorno = -2;
        indice = eUsuarios_buscarLugarLibre(listado,limite);
        if(indice >= 0)
        {
            retorno = -3;
            id = eUsuarios_siguienteId(listado,limite);

            //if(!getValidString("Nombre?","Error","Overflow", nombre,50,2))
            //{
                retorno = 0;
                printf("Ingrese un nombre: ");
                fflush(stdin);
                gets(listado[indice].nombre);
                listado[indice].idUsuario = id;
                listado[indice].estado = 1;
            //}
        }
    }
    return retorno;
}

int eUsuarios_siguienteId(eUsuarios listado[],int limite)
{
    int retorno = 0;
    int i;
    if(limite > 0 && listado != NULL)
    {
        for(i=0; i<limite; i++)
        {
            if(listado[i].estado == 1)
            {
                    if(listado[i].idUsuario>retorno)
                    {
                         retorno=listado[i].idUsuario;
                    }

            }
        }
    }
     return retorno+1;
}

int eUsuarios_buscarLugarLibre(eUsuarios listado[],int limite)
{
    int retorno = -1;
    int i;
    if(limite > 0 && listado != NULL)
    {
        retorno = -2;
        for(i=0;i<limite;i++)
        {
            if(listado[i].estado == 0)
            {
                retorno = i;
                break;
            }
        }
    }
    return retorno;
}

void eUsuarios_init(eUsuarios listado[],int limite)
{
    int retorno = -1;
    int i;
    if(limite > 0 && listado != NULL)
    {
        retorno = 0;
        for(i=0; i<limite; i++)
        {
            listado[i].estado= 0;
            listado[i].idUsuario= 0;
        }
    }
    return retorno;
}
