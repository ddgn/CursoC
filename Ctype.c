#include <stdio.h>
#include <ctype.h>

int main()
{
    char letra;
    char a,b,c;
    int i,j;
   char cadena[]="12345Hola";
   char cadenados[] = "ESTOESUNACADENADEPRUEBA\n";

   puts(cadena);

for (i=0; i<=8; i++){

    printf("\ncadena[%d]: %c", i, cadena[i]);
     printf( "\nEl valor de retorno con isdigit es: %i\n", isdigit(cadena[i]));

}

for (i=0; i<=8; i++){

    printf("\ncadena[%d]: %c", i, cadena[i]);
     printf( "\nEl valor de retorno con isalpha es: %i\n", isalpha(cadena[i]));

}


for (i=0; i<=8; i++){

    printf("\ncadena[%d]: %c", i, cadena[i]);
     printf( "\nEl valor de retorno con isalnum es: %d\n", isalnum(cadena[i]));

}

for (i=0; i<=8; i++){

    printf("\ncadena[%d]: %c", i, cadena[i]);
     printf( "\nEl valor de retorno con islower es: %i\n\n\n", islower(cadena[i]));

}


    puts(cadenados);

     while (cadenados[i])
  {
    c=cadenados[i];
    putchar (tolower(c));
    i++;
  }



 printf("Ingrese una letra:\n");
 scanf("%c", &letra);

 letra = toupper(letra);
 printf("\nLa letra en mayúscula es: %c", letra);


}
