#include<stdio.h>

int pila[5];
int fin=-1;

void push(int numero);
int pop();
void listar();

main (){

	int valor, numero, num;
	
	do {
	
	
	printf("\n1. Push \n 2. Pop \n 3. Salir\n 4. Listar");
	scanf("%d", &valor);
	
	if(valor==1){
		printf("\nusuario dame un numero");
		scanf("%d", &numero);
		
		push(numero);
		
	
		}else if (valor==2){
		
			if(fin>-1){
			
			
			num=pop();
			
			
			}else {
				printf("\ntu pila esta vacia");
				
				
				
			}
		
		
		
		}else if(valor==4){
			
				listar();
			
			}



	}while(valor!=3);
		return 0;
	
	
	
}

void push(int numero){

	if(fin<5){
		fin++;
		pila[fin]=numero;
		printf("\nSe inserto exitosamente");
		
	
	}else 
		printf("\nTu pila esta llena");

}

int pop(){

	int sea;
	sea=pila[fin];
	fin--;
	return sea;

}

void listar(){
	
	int i;
	if (fin>-1) {
		printf("\nNuestra pila es:\n");
		for(i=0;i<=fin; i++){
		printf("\n%d", pila[i]);
	
		}
	
	}else 
		printf("\nTu pila esta vacia");
}

