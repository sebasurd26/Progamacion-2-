//Programa que pida un valor a una cadena de caracteres, para una variable de tipo entero y flotante. Luego imprima valores utilizando punteros y imprimir las direcciones.
#include <stdio.h>
#include <stdlib.h>

int main(){
	char cadena [100];
	int entero;
	float flotante;
	
	printf ("Introduzca el contenido de la cadena: "); gets(cadena);
	printf ("\nDigite el valor para su numero entero: "); scanf ("%d", &entero);
	printf ("\nDigite un valor para su numero flotante: "); scanf ("%f", &flotante);
	
	char *pChar;
	int *pInt;
	float *pFloat;
	
	pChar = cadena;
	pInt = &entero;
	pFloat = &flotante;
	
	printf ("\n\nPuntero de su cadena: %s. \nSu direccion memoria es %p.\n", pChar, cadena);
	printf ("\nPuntero de su entero: %d. \nSu direccion memoria es %p.\n", *pInt, &entero);
	printf ("\nPuntero de su flotante: %f. \nSu direccion memoria es %p.\n", *pFloat, &flotante);
	printf ("\n\n");
	
	
system ("pause");
return 0;
}
