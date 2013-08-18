#include <stdio.h>
#include <string.h>

int main(){
char cadenauno[]="HOLA";
 char cadenados[]="ADIOS";


 char uno[]="Hola";
 char dos[]=" y ";
 char tres[]="Adios";



char primero[] = "Hola";
  char segundo[]="Adios";


 puts (cadenauno);
 printf("\n");
 puts (cadenados);



 strcpy(cadenados,cadenauno);
 printf("\n%s\n",cadenados);
 printf("%s\n",uno);
 strcat(uno,dos);
 printf("%s\n",uno);
 strcat(uno,tres);
 printf("%s\n",uno);

 printf("\nCadena 1: %s", primero);
  printf("\nCadena 2: %s", segundo);

  if(strcmp(primero, "HOLA")==0 && strcmp(segundo, "HOLA")==0)
  {

      printf("Cadenas iguales");

  }else
  printf("\nCadenas diferentes");









}

