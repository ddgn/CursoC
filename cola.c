#include<stdio.h>

int cola[5];
int fin=-1;
int inicio=0;

void entra(int numero);
int sale();
void listar();

main (){

	int valor, numero, num;
	
	do {
	
	
	printf("\n1. Entra \n 2. Sale \n 3. Salir\n 4. Listar");
	scanf("%d", &valor);
	
	if(valor==1){
		printf("\nusuario dame un numero");
		scanf("%d", &numero);
		
		entra(numero);
		
	
		}else if (valor==2){
		
			if(fin>-1){
			
			
			num=sale();
			
			
			}else {
				printf("\ntu cola esta vacia");
				
				
				
			}
		
		
		
		}else if(valor==4){
			
				listar();
			
			}



	}while(valor!=3);
		return 0;
	
	
	
}

void entra(int numero){

	if(fin<5){
		fin++;
		cola[fin]=numero;
		printf("\nSe inserto exitosamente");
		
	
	}else 
		printf("\nTu cola esta llena");

}

int sale(){

	int sea;
	sea=cola[fin];
	inicio++;
	return sea;

}

void listar(){
	
	int i;
	if (fin>-1 && inicio>-1) {
		printf("\nNuestra cola es:\n");
		
		for(i=inicio;i<=fin; i++){
		printf("\n%d", cola[i]);
	
		}
	
	}else 
		printf("\nTu cola esta vacia");
}
