#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Organizar la info para crear distintos tipos de datos
*/
void mostrarAlumno(eAlumno);

typedef struct
{
    int legajo;
    char nombre[50];
    float promedio;

}eAlumno;//(estructura alumno)//son tipos de datos por valor

int main()
{
    //creamos variable de tipo eAlumno.cargamos dato por extension
    eAlumno miAlumno;
    eAlumno otroAlumno;
    /*eAlumno miAlumno={1,"Juan",3.25};
    eAlumno otroAlumno;
    otroAlumno.legajo=1232;*/

    //creamos alumno pidiendo datos.
    printf("Ingrese legajo: ");
    scanf("%d",&miAlumno.legajo);
    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(miAlumno.nombre);
    printf("Ingrese promedio: ");
    scanf("f",&miAlumno.promedio);

    //otroAlumno.nombre="Nicolas"; NO SE ASIGNA STRING CON EL IGUAL. "STRCPY"
    strcpy(otroAlumno.nombre,"Nicolas");
    otroAlumno.promedio=2.3;
    otroAlumno.promedio=6;
    //las estructuras son datos por valor, entonces las puedo copiar a otro alumno.
    miAlumno=otroAlumno;

    //mostramos los alumnos.
    printf("%d --%s --%f\n",miAlumno.legajo,miAlumno.nombre,miAlumno.promedio);
    printf("%d --%s --%f\n",otroAlumno.legajo,otroAlumno.nombre,otroAlumno.promedio);
    //mostrarAlumno(miAlumno);
    return 0;
}

/*void mostrarAlumno (eAlumno unALumno)
{
    printf("%d --%s --%f \n",unAlumno.legajo,unAlumno.nombre,unAlumno.promedio);
}
*/
