// Escriba una funci�n nombrada funcPotencia() la cual recibir� dos par�metros, primero un numero  ENTERO que ser� la base de la potencia, y el segundo par�metro de la funci�n ser� el exponente , el valor de retorno ser� la potencia de dicho n�mero.
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
