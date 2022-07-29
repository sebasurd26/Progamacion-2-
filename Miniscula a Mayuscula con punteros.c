//Pasa miniscula a Mayuscula.//
#include <stdio.h>
#include <stdlib.h>
#define CONSTANTE 32

void conver (char *c)
{
	if (*c>='a' && *c<='z'){
		*c = *c-CONSTANTE;
	}	
}


int main(){
	char carac;
	
		printf ("Ingrese un caracter: "); scanf ("%c", &carac);
		printf ("\nEl caracter ingresada es: %c", carac);
		conver(&carac);
		printf ("\n\nEl caracter, luego del retorno de la funcion es: %c", carac);
		printf ("\n\n");
	
	
system ("pause");
return 0;	
}
