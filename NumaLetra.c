#include <stdio.h>



int main (){

int numero[3];
int largo;
int i;
int digitos;


printf("Dame cantidad digitos de tu numero: (3max)\n");
scanf("%d", &digitos);



    if(digitos==3){

        printf("Dame tu numero de 3 digitos separados con espacio:\n");


        scanf("%d %d %d", &numero[0],&numero[1],&numero[2]);


        if((numero[0])==1){
				printf("ciento ");
			}
			if((numero[0])==2){
				printf("doscientos ");
			}
			if((numero[0])==3){
				printf("trescientos ");
			}
			if((numero[0])==4){
				printf("cuatroscientos ");
			}
			if(numero[0]==5){
				printf("quinientos ");
			}
			if(numero[0]==6){
				printf("seiscientios ");
			}
			if(numero[0]==7){
				printf("setecientos ");
			}
			if(numero[0]==8){
				printf("ochocientos ");
			}
			if(numero[0]==9){
				printf("novecientos ");
			}


			if(numero[1]==1){
				printf("dieci ");
			}
			if(numero[1]==2){
				printf("veinti ");
			}
			if(numero[1]==3){
				printf("treinta ");
			}
			if(numero[1]==4){
				printf("cuarenta ");
			}
			if(numero[1]==5){
				printf("cincuenta ");
			}
			if(numero[1]==6){
				printf("sesenta ");
			}
			if(numero[1]==7){
				printf("setenta ");
			}
			if(numero[1]==8){
				printf("ochenta ");
			}
			if(numero[1]==9){
				printf("noventa ");
			}



           if(numero[2]==1){
				printf("uno ");
           }
			if(numero[2]==2){
				printf("dos ");
			}
			if(numero[2]==3){
				printf("tres ");
			}
			if(numero[2]==4){
				printf("cuatro ");
			}
			if(numero[2]==5){
				printf("cinco ");
			}
			if(numero[2]==6){
				printf("seis ");
			}
			if(numero[2]==7){
				printf("siete ");
			}
			if(numero[2]==8){
				printf("ocho ");
			}
			if(numero[2]==9){
				printf("nueve ");
			}



        }


        if(digitos==2){

        printf("Dame tu numero de 2 digitos separados con espacio:\n");


        scanf("%d %d", &numero[0],&numero[1]);

         if(numero[0]==1  && numero[1]==0 ){
            printf("diez");

         }
         if(numero[0]==2  && numero[1]==0 ){
            printf("veinte");
             return 0;
         }
            if(numero[0]==3  && numero[1]==0 ){
            printf("treinta");
             return 0;
            }
            if(numero[0]==4  && numero[1]==0 ){
            printf("cuarenta");

            }
            if(numero[0]==5 && numero[1]==0 ){
            printf("cincuenta");

            }
            if(numero[0]==6  && numero[1]==0 ){
            printf("sesenta");

            }
            if(numero[0]==7  && numero[1]==0 ){
            printf("setenta");

            }
            if(numero[0]==8  && numero[1]==0 ){
            printf("ochenta");

            }
            if(numero[0]==9  && numero[1]==0 ){
            printf("noventa");

            }
            if(numero[0]==1  && numero[1]==1 ){
            printf("once");

            }
            if(numero[0]==1  && numero[1]==2 ){
            printf("doce");

            }
            if(numero[0]==1  && numero[1]==3 ){
            printf("trece");

            }
            if(numero[0]==1  && numero[1]==4 ){
            printf("catorce");

            }
            if(numero[0]==1  && numero[1]==5 ){
            printf("quince");

            }



         if(numero[0]==1){
				printf("dieci ");
        }
			if(numero[0]==2){
				printf("veinti ");
			}
			if(numero[0]==3){
				printf("treinta ");
			}
			if(numero[0]==4){
				printf("cuarenta ");
			}
			if(numero[0]==5){
				printf("cincuenta ");
			}
			if(numero[0]==6){
				printf("sesenta ");
			}
			if(numero[0]==7){
				printf("setenta ");
			}
			if(numero[0]==8){
				printf("ochenta ");
			}
			if(numero[0]==9){
				printf("noventa ");
			}


             if(numero[1]==1){
				printf("uno ");
             }
			if(numero[1]==2){
				printf("dos ");
			}
			if(numero[1]==3){
				printf("tres ");
			}
			if(numero[1]==4){
				printf("cuatro ");
			}
			if(numero[1]==5){
				printf("cinco ");
			}
			if(numero[1]==6){
				printf("seis ");
			}
			if(numero[1]==7){
				printf("siete ");
			}
			if(numero[1]==8){
				printf("ocho ");
			}
			if(numero[1]==9){
				printf("nueve ");
			}




        }


         if(digitos==1){

        printf("Dame tu numero de 1 digitos:\n");


        scanf("%d", &numero[0]);



        if(numero[0]==1){
				printf("uno ");
         }
			if(numero[0]==2){
				printf("dos ");
			}
			if(numero[0]==3){
				printf("tres ");
			}
			if(numero[0]==4){
				printf("cuatro ");
			}
			if(numero[0]==5){
				printf("cinco ");
			}
			if(numero[0]==6){
				printf("seis ");
			}
			if(numero[0]==7){
				printf("siete ");
			}
			if(numero[0]==8){
				printf("ocho ");
			}
			if(numero[0]==9){
				printf("nueve ");
			}


        }





}
