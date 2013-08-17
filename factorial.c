//Factorial

#include<stdio.h>


int main(){

int b,c;
int num;
int suma=0;
int resultado=1;

printf("Dame un numero para obtener su factorial\n");
scanf("%i",&num);

int i;

	for(i=num;i>0;i--)
	
	{
	
	resultado=resultado*i;
	
	
	
	
	}

printf("El factorial es: %i", resultado);

system("pause");






}
