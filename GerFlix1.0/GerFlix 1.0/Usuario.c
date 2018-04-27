
#include "Usuario.h"

/** \brief
 *
 * \param usuario[] eUsuario
 * \param TAMU int
 * \param serie[] eSerie
 * \param TAMS int
 * \return void
 *
 */
void seriesConUsuario(eUsuario usuario[], int TAMU, eSerie serie[], int TAMS)
{
    int i;
    int j;
    for(i=0;i<TAMS;i++)
    {
        if(serie[i].estado==1)
        {
            printf("La serie %s es vista por : \n",serie[i].nombre);
            for(j=0;j<TAMU;j++)
            {

                if(usuario[j].idSerie==serie[i].idSerie && usuario[j].estado==1)
                {
                    printf("%s  \n",usuario[j].nombre);

                }



            }
        }
    }


}

void mostrarUsuarioConSuSerie(eUsuario usuario[], int TAMU, eSerie serie[], int TAMS)
{
    int i;
    int j;
    for(i=0;i<TAMU;i++)
    {
        for(j=0;j<TAMS;j++)
        {
            if(usuario[i].idSerie==serie[j].idSerie && serie[j].estado==1)
        {
            printf("Usuario %s --- serie %s \n",usuario[i].nombre,serie[j].nombre);
            break;
        }

        }
    }


}

void mostrarListaUsuarios(eUsuario usuario[], int TAM)
{
    int i;
    for(i=0;i<TAM;i++)
    {
        if (usuario[i].estado==1)
        {
            printf("ID Usuario: %d -- Nombre : %s \n ",usuario[i].idUsuario,usuario[i].nombre);

        }
    }
    }


void inicializarUsuariosEstado(eUsuario usuarios[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        usuarios[i].estado = 0;
    }
}
void inicializarUsuariosHardCode(eUsuario usuarios[])
{


    int id[15] = {1000,1001,1002,1003,1004, 1005,1006,1007,1008,1009, 1010,1011,1012,1013,1014};
    char nombre[][50]= {"Juan","Maria","Pedro","Vanesa","Jose","Luisa","Laura","Marcelo","German","Victoria","Dafne","Antonela","Gisele","Dario","Pedro"};

    int serie[15] = {100,100,101,101,102,100,100,103,101,102,103,101,100,100,101};



    int i;

    for(i=0; i<15; i++)
    {
        usuarios[i].idUsuario=id[i];
        usuarios[i].idSerie=serie[i];
        usuarios[i].estado = 1;
        strcpy(usuarios[i].nombre, nombre[i]);

    }









}
