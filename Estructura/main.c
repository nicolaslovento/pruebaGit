#include <stdio.h>
#include <stdlib.h>

//composicion de datos.(ANIDAR)
typedef struct
{
    char calle[50];
    int numero;
    char localidad[50];
    int piso;
    char depto;
    int cp;

}eDomicilio;

typedef struct
{
    int legajo;
    char nombre[50];
    eDomicilio domicilio;



}eAlumno;

typedef struct
{
    int legajo;
    char nombre[50];
    eDomicilio domicilio;

}eProfesor;

int main()
{
    eAlumno miAlumno;
    miAlumno.legajo=400;
    miAlumno.domicilio.cp=123;

    printf("Legajo: %d --- %d",miAlumno.domicilio.cp,miAlumno.legajo);
    return 0;
}
