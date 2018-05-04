
typedef struct{
    int idProducto;
    char nombre[40];
    int stock;
    float precio;

}eProductos;

typedef struct{

    int idUsuario;
    char nombre[40];
    int estado;

}eUsuarios;


int eUsuarios_mostrarListado(eUsuarios [],int );
int eUsuarios_alta(eUsuarios  [],int );
int eUsuarios_siguienteId(eUsuarios l[],int );
int eUsuarios_buscarLugarLibre(eUsuarios [],int );
void eUsuarios_init(eUsuarios [],int );
