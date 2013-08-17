#include<stdio.h>
#include<limits.h> //Esta Biblioteca cuenta con las funciones SHRT_MAX, SHRT_MIN, etc. que nos permite obtener el rango
                    // de valores de cierto tipo de datos.




int main () {

printf("\t\tTamano y rango de algunos Tipos de Datos\n\n");

printf("El tamano de Int es %d bytes \n", sizeof(int));
printf("El tamano de Short es %d bytes\n", sizeof(short));
printf("El tamano de Float es %d bytes\n", sizeof(float));
printf("El tamano de Char es %d bytes\n", sizeof(char));
printf("El tamano de Unsigned Int %d bytes\n", sizeof(unsigned int));
printf("El tamano de Unsigned Short %d bytes\n",sizeof(unsigned short));
printf("El tamano de Long Double: %d bytes\n\n\n",sizeof(long double));


printf("El rango de Short es de %d a %d\n",SHRT_MAX, SHRT_MIN);
printf("El rango de Long es de %d a %d\n",LONG_MAX, LONG_MIN);




getchar();

}
