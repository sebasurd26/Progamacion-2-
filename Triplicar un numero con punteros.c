//Triplicar un numero con punteros.//
#include <stdlib.h>
#include <stdio.h>

void triplicarV1 (int *x){
	*x = (*x)*3;
}


int main(){
	int n;
	
		printf ("Ingrese un numero: "); scanf("%d", &n);
		triplicarV1 (&n);
		printf ("\nEl resultado triplicado es: %d. \n", n);
		printf ("\n\n");	
	
	
system ("pause");
return 0;
}
