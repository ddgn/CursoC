#include <stdio.h>


int main(){

int a;
int suma=0;
int entrada;
int i;

scanf("%d", &entrada);

    for(i=1;i<=entrada;i++)
    {
        scanf("%d", &a);
        suma=suma+a;


    }

    printf("%d", suma);

}
