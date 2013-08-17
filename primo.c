//funcion usuario le de un numero y que diga si es primo o no
// luego sacar cuántos numeros primas hay entre el 2 y el numero que de el usuario
#include <stdio.h>


void primo (int num1){
int a=0;
int b;
int i;


	for(i=1;i<=num1;i++)

	{
		if(num1%i==0)
		a=a+1;

	}

    if(a==2){

    printf("Si es primo");
    }
    else{

    printf("No es primo");
    }





}



int main () {

int num1;


	printf("Dame tu numero\n");
	scanf("%d", &num1);


	primo(num1);

 system("pause");



}
