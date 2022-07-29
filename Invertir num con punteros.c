//Ejercicio, que invierte una cadena de numeros enteros.//
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void inverCad(char *cad){ 	 //Para invertir numeros positivos.//
	int tam = strlen(cad);
	char aux;
	
	for(int i=0; i<tam/2; i++){
		aux = cad[i];
		cad[i] = cad[tam-1-i];
		cad[tam-1-i] = aux;  
	} 	
}

void inverN(char *cad){ 	//Para invertir numeros negativos.//
	
	if (cad[0] != '-') inverCad(cad);
	else inverCad(cad+1); 	//Envio la direccion la direccion del segundo elemento.//
}

int main(){
	char ncad[20];
	
		printf ("Ingrese los numeros que desee invertir del 0-9: "); scanf("%s", ncad); 	//Ej: '1,2,3,4...'//
		inverN(ncad);
		printf ("\nLa secuencia de numeros invertidos es: %s\n", ncad);
		printf ("\n\n");
		
		
	
system ("pause");
return 0;
}
