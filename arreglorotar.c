//Arreglo tamaño 5 y que lo llene. imprimir
//quieres rotar hacia la derecha
//todas las veces que quiera

#include<stdio.h>

int arreglo[4];

int rotar(int arreglo[]){

int aux;
int i;
aux=arreglo[4];
    for(i=3;i>=0;i--){
    arreglo[i+1]=arreglo[i];
                     }
    arreglo[0]=aux;

    	for (i=0; i<5; i++)
		{
		printf("\nValor arreglo[%d]: %d", i, arreglo[i]);
                        }


}


int main() {

int i;
int a;
int valor;
int aux;



	for (i=0; i<5 ;i++){

	printf("\nElemento arreglo[%d]:", i);


	scanf("%d", &arreglo[i]);


	}
		for (i=0; i<5; i++)
		{
		printf("\nValor arreglo[%d]: %d\n", i, arreglo[i]);


		}



    do{

            rotar(arreglo);


    printf("\n 1 Para Rotar otra vez");
    scanf("%d", &a);





    }while(a=1);
}
