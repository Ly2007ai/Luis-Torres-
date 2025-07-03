
//Luis Eduardo Torres Blanco 
//cd: 32331586
// seccion 10


#include<stdio.h>
#include<string.h>
#include<windows.h>
#define RED "\033[1;31m" 
#define GREEN   "\033[1;32m"
#define  RESET   "\033[0m"

int main (){
    
	int i=0, longitud=0;
	int cantidad;
	char titulo[7][90],Genero[7][90],Autor[7][40];
	float buscar;
	float precio[cantidad];	
	int stock[cantidad];
	float ganancia[cantidad];
	char isbm[7][90];
	
	printf("\nINGRESE LA CANTIDAD DE LIBROS:");
	scanf("%d",&cantidad);
	
		for (i=0;i<cantidad;i++){
			
				printf("\nINGRESE EL TITULO DEL LIBRO:");
				scanf("%s",&titulo[i]);
				
				printf("INGRESE EL AUTOR DEL LIBRO:");
				scanf("%s",&Autor[i]);
				
				printf("INGRESE EL GENERO DEL LIBRO:");
				scanf("%10s",&Genero[i]);
			
		        do{
		    	printf("ingrese el isbn:");
		        scanf("%s",&isbm[i]);
		        longitud = strlen(isbm[i]);
			   }while(longitud != 10);	
			
				printf("SU PRECIO %d:",i+1);
				scanf("%f",&precio[i]);
				
			 while(precio [i] < 0.0f){
					printf("INGRESE UN NUMERO POSITIVO:\n");
					scanf("%f",&precio[i]);
				}
		
			    printf("CANTIDAD DE LIBROS DE STOCK:");
			    scanf("%d",&stock[i]);
				printf("\n");
				
				ganancia[i] = precio[i] * stock[i];

printf("| %-25s | %-20s | %-20s | %-12s | %9s | %9s | %12s |\n","TITULO", "AUTOR", "GENERO", "ISBN", "PRECIO", "STOCK", "GANANCIA");

printf("|---------------------------|----------------------|----------------------|--------------|-----------|-----------|--------------|\n");

for (i = 0; i < cantidad; i++) {
   printf("| %-25s | %-20s | %-20s | %-12s | %9.2f | %9d |",titulo[i],  Autor[i], Genero[i], isbm[i], precio[i], stock[i]);
		 
		 if(ganancia>0) {
		 printf("\033[0;32m");
		 printf("%12.2f  \033[0m|\n",ganancia[i]);
		 printf("\033[0m");
		 }
		 else{
		 	
		 	printf("\033[0;31m");
		    printf("%12.2f  \033[0m|\n",ganancia[i]);
		 }
	
	
     
        

}
        printf("\n");
    	printf ("\nSI DESEA BUSCAR UN LIBRO INGRESE [1] PARA SI O [2]PARA NO :\n");
        scanf("%d", &buscar);
        getchar();
        
        if (buscar == 1){
        	printf("prueba:");
		}
		else{	
		printf("no");	
		}
       
	
	
}
