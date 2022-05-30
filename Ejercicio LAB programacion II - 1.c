//Escriba un programa que devuelva la parte decimal de cualquier Número introducido por el usuario.
#include <stdio.h>
#include <stdlib.h>

double fraccion(float num);

float numero;

main (){
	
	printf ("\nDigite el numero, que desee conocer su parte fraccionaria: "); scanf ("%f", &numero);
	printf ("La parte decimal de %2.f, es: %f", numero, fraccion(numero));
	printf ("\n\n");
	
	
system ("pause");
return 0;
}


double fraccion(float num)
{
	int entera = num;
	float fraccionaria = num-entera;
	return fraccionaria;
}
