#include<stdio.h>
#include<string.h>
#include<stdlib.h>


struct prebe {
	char nombre[20];
	float promedio;
	int semestre;



}prebe[8];

int main(){

	struct prebe p;

	int i;

	for(i=0;i<8;i++){

	printf("\nNombre: ");
	scanf("%s", &(prebe[i].nombre));



	printf("\nPromedio: ");
	scanf("%f", &prebe[i].promedio);


	printf("\nSemestre: ");
	scanf("%d", &prebe[i].semestre);


	}
    for(i=0;i<8;i++){
            printf("\nNombre: %s", prebe[i].nombre);
            printf("\nPromedio: %f", prebe[i].promedio);
            printf("\nSemestre: %d", prebe[i].semestre);
    }

return 0;

}
