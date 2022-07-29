//Suma de Vectores Usando Punteros.//
#include <stdio.h>
#include <stdlib.h>

int main(){
	int v1[5]={}, v2[5]={}, v3[5]={};
	int i;
	int *p1, *p2;
	
	p1= v1;
	p2= v2;
	
		printf ("\n\tCARGANDO VECTOR 1\n");	
		for(i=0; i<5; i++){
			printf ("\nIngrese el valor %d: ", i+1); scanf("%d", &v1[i]);
		}
		
		system ("cls");

		printf ("\n\tCARGANDO VECTOR 2\n");	
		for(i=0; i<5; i++){
			printf ("\nIngrese el valor %d: ", i+1); scanf("%d", &v2[i]);
			v3[i] = *(p1+i) + *(p2+i);	//v1[i]+v2[i].		
		}
	
		system ("cls");
		
		printf ("\n\tSUMA DE LOS VECTORES\n");	
		for(i=0; i<5; i++){
			printf ("\nVector 3, posicion [%d], y su valor = %d.\n", i+1, v3[i]);
		}
		printf ("\n\n");
		
			
system ("pause");
return 0;
}
