#include <stdio.h>
#include <stdlib.h>

int main(){
	int tam,valor,total=0,suma=0;
	int fila=0;
	int columna =0;
	printf("ingrese tamaño la matriz\n");
	scanf("%d",&tam);
	int matriz [tam][tam];
	int amiga = 1;
	for(fila=0; fila<tam; fila++){
		for(columna=0; columna<tam; columna++){
			printf("ingrese el valor [ ");
			printf("%d",fila);
			printf(" ]\t");
			printf(" [");
			printf("%d",columna);
			printf("] ");
			scanf("%d",&valor);
			printf("\n");
			matriz[fila][columna]=valor;		
				}
			}
	
	for(fila=0;fila<tam;fila++){
	total=total+matriz[fila][0];
		
		}		
		printf("%d",total);
		printf(" \n");
		
		for(fila=0; fila<tam; fila++){
			for(columna=0; columna<tam; columna++){
			suma=suma+matriz[fila][columna];
			
			}
			if (suma!=total){
				amiga=0;
				}
			printf("%d",suma);
			
			printf(" \n");
			suma=0;
		}
	
		for(columna=0; columna<tam; columna++){
			for(fila=0; fila<tam; fila++){
			suma=suma+matriz[fila][columna];
			
			}
			if (suma!=total){
				amiga=0;
				}
			printf("%d",suma);
			printf(" \n");
			suma=0;
		
		}
		
		for(columna=0; columna<tam; columna++){
			for(fila=0; fila<tam; fila++){
				if(fila==columna){
				suma=suma+matriz[fila][columna];
				}
			
			}
			
	}
	printf("%d",suma);
			printf(" \n");
			suma=0;
		
		for(columna=0; columna<tam; columna++){
			for(fila=0; fila<tam; fila++){
				if(fila+columna==tam-1){
				suma=suma+matriz[fila][columna];
				}
			
			}
		
			
			
			
			
}			if (suma!=total){
				amiga=0;
				}
			printf("%d",suma);
			printf(" \n");
			suma=0;
	
	printf("%d",amiga);
	
	printf(" \n");
	
	if (amiga==1){
		printf("LAS MATRICES SON AMIGAS \n");
		}
		
		else{
		printf("LAS MATRICES NO SON AMIGAS \n");	
			}
	
}

