#include <stdio.h>
#include <stdlib.h>

int main(){

 char uno[11] = "123456.123";

   printf( "Cadena %s se convierte en flotante con atof: %f\n", uno, atof(uno) );
     printf( "Cadena %s se convierte en entero con atoi: %d\n", uno, atoi(uno) );
       printf( "Cadena %s se convierte en long con atol: %d\n", uno, atol(uno) );

   return 0;



}
