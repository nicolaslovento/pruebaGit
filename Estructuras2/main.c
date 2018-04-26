#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 3


void mostrarAlumno(eAlumno[],int);

typedef struct
{
    int legajo;
    char nombre[50];
    float promedio;

}eAlumno;

int main()
{
    //printf("TAM: %d,sizeof()") para saber los bits.
    eAlumno clase[T];
    int i;
    for(i=0;i<T;i++)
    {
        printf("Ingrese legajo: ");
        scanf("%d",&clase[i].legajo);
        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(clase[i].nombre);
        printf("Ingrese promedio: ");
        scanf("f", &clase[i].promedio);
        fflush(stdin);
        mostrarAlumno(clase,3);
    }
    return 0;
}
void mostrarAlumno(eAlumno clase[],int TAM)
{
    int i;

    for(i=0;i<TAM;i++)
    {
        printf("%d --%s --%f \n",clase[i].legajo,clase[i].nombre,clase[i].promedio);
    }


}
