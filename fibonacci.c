//Fibonacci

#include<stdio.h>


int main(){

int a=0;
int b=1;
int c;
int veces;


printf("Dame numero de elementos de la serie\n");
scanf("%i",&veces);

int i;


	for(i=0;i<=veces;i++)
    {

	c=a+b;
    a=b;
    b=c;
    printf("%i\n", a);


    }

}










