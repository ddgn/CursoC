#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void rellenar(int []); //en el prototipo no es necesario ponerle el nombre
void imprimir (int []);




void main(){

	int a[6] = {0}; //todos los elementos se inicializan a 0
	
	//rellenar arreglo con numeros aleatorios
	rellenar(a); //para pasar como par�metro de una funci�n un arreglo, s�lo indicamos el nombre
	imprimir(a);
	

}


void rellenar(int a[6]) {

	int i;
	
	for(i=0;i<6;i++)
	
		a[i] = rand() % 10; //Genera n�meros entre 0-9
		




}

void imprimir(int a[6]){


	int i;
	
	for(i=0;i<6;i++)
	
		printf("%d ", a[i]);

}