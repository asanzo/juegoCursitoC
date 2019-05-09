#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <commons/log.h>
#include <commons/collections/list.h>

typedef struct
{
  char inicial;
  int anioNac;
  int cantAprobadas;
  char *nombre;
} alumno;

typedef struct
{
  int legajo;
} docente;

alumno *createAlumno(char inicial, int anio, int cantAprobados, char *nombre)
{
  alumno *miAlu = malloc(sizeof(alumno));
  miAlu->inicial = inicial;
  miAlu->anioNac = anio;
  miAlu->cantAprobadas = cantAprobados;
  miAlu->nombre = malloc((strlen(nombre) + 1) * sizeof(char));
  strcpy(miAlu->nombre, nombre);
  return miAlu;
}

void imprimirAlumno(alumno *wachin)
{
  printf("anio nacimiento:%d, inicial:%c, cantAprobadas:%d, nombre:%s.\n", wachin->anioNac, wachin->inicial, wachin->cantAprobadas, wachin->nombre);
}

int parsearAnio(char *streeeeeng)
{
  char anio[5];
  strncpy(anio, streeeeeng, 4);
  anio[4] = '\0';
  return atoi(anio);
}

int parsearAprobadas(char *streeeeeng)
{
  return atoi(streeeeeng);
}

void main()
{
  t_list *alumnos = list_create();

  //acá está la línea en donde se lee del socket
  //char *leido = "d98888";
  char *leido = "ap199810PepeGonzalez";

  if (leido[0] == 'a')
  {
    alumno *nuevo = createAlumno(leido[1], parsearAnio(&(leido[2])), parsearAprobadas(&(leido[6])), &(leido[8]));
    list_add(alumnos, nuevo);
    printf("el tamanio es: %d.\n", list_size(alumnos));
    imprimirAlumno(list_get(alumnos, 0));
  }
}