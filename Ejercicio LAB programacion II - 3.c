// Escriba una función nombrada funcPotencia() la cual recibirá dos parámetros, primero un numero  ENTERO que será la base de la potencia, y el segundo parámetro de la función será el exponente , el valor de retorno será la potencia de dicho número.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int b, e;

int funcPotencia(int b, int e);

main (){
	
	printf ("Digite el primer numero, correspondiente a la base: "); scanf ("%d", &b);
	printf ("Digite el segundo numero, correspondiente al exponente: "); scanf ("%d", &e);			
	printf ("\nEl resultado de la potencia es: %d", funcPotencia(b, e));
	printf ("\n\n\n");
	
system ("pause");
return 0;
}

int funcPotencia(int b, int e)
{
	int potencia = pow(b,e);
}
