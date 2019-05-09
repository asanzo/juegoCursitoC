#include <stdio.h>
#include <string.h>

void printArray(char *, int);

void main()
{
  char letra;
  letra = 'a';

  char otroMensaje[10];

  char *mensaje;
  char *miHol = "hol";

  // otroMensaje[0] = 'h';
  // otroMensaje[1] = 'o';
  // otroMensaje[2] = 'l';
  // otroMensaje[3] = '\0';
  // Estas cuatro lineas anteriores hacen lo mismo q el strcpy
  strcpy(otroMensaje, miHol);

  // miHol[1] = 'A'; Segmentation fault

  mensaje = otroMensaje;
  //otroMensaje = mensaje; lvalue not modifiable

  otroMensaje[1] = 'Z';
  mensaje[2] = 'J';
  mensaje[3] = 'F';

  printf("%s\n", otroMensaje);
  printf("%s\n", mensaje);
  printArray(mensaje, 10);
}

void printArray(char *pepe, int largo)
{
  for (int i = 0; i < largo; i++)
  {
    printf("Caracter en la posición %d: %c.\n", i, pepe[i]);
  }
}

typedef struct
{
  char inicial;
  int anioNac;
  int cantAprobadas;
  char *nombre;
} alumno;
void aprobarMateria(alumno *);

// int main(void)
// {
//   int cantAlumnos;
//   cantAlumnos = 26;
//   int *dir;
//   dir = &cantAlumnos;
//   printf("Valor:%d.\nPuntero:%p.\nValorDesdePuntero:%d.\n", cantAlumnos, dir, *dir);
// }

//#include "saludar.h"
// int main(void)
// {
//   int fafafa;
//   fafafa = 3;
//   saludar(fafafa);
//   fafafa = 5;
// }

// void main(int cant, char *argv[])
// {
//   alumno yo;         //linea 1
//   yo.anioNac = 1996; //linea 2
//   yo.inicial = 'm';  //linea 3
//   yo.cantAprobadas = 0;

//   aprobarMateria(&yo);

//   printf("anio nacimiento:%d, inicial:%c, cantAprobadas:%d.\n", yo.anioNac, yo.inicial, yo.cantAprobadas);
// }

// void aprobarMateria(alumno *dirWacho)
// {
//   //(*dirWacho).cantAprobadas = (*dirWacho).cantAprobadas + 1;
//   dirWacho->cantAprobadas = dirWacho->cantAprobadas + 1;
//   //wacho.cantAprobadas = wacho.cantAprobadas + 1;
// }
// void main(int cant, char *argv[])
// {
//   alumno yo;         //linea 1
//   yo.anioNac = 1996; //linea 2
//   yo.inicial = 'm';  //linea 3

//   int *b;
//   b = &(yo.anioNac);
//   int c = (*b) + 1;
//   (*b) = 31;

//   printf("anio nacimiento:%d, inicial:%c.\n", yo.anioNac, yo.inicial);
//   printf("c:%d.\n", c);
// }

//////////////////////////////7

/*
int main()
{


  int nro;
  char letra;
  nro = 5;
  letra = 'h';
  printf("Esto tiene nro adentro:%d, y esto tiene letra:%c.\n", letra, nro);
}
*/