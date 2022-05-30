// Escriba un programa que mediante el uso de funciones, realice las opresiones aritméticas básicas, suma resta, multiplicación y división de números enteros, se debe pedir al usuario , los dos números a ser operados y debe poder elegir el tipo de operación ( +,-,* o /).
#include <stdio.h>
#include <stdlib.h>

void datos ();

int num1, num2;

int sum(int num1,int num2);
int res(int num1,int num2);
int divsion(int num1,int num2);
int mult(int num1,int num2);


int main (){

	datos ();
	printf ("\nLa suma es: %d", sum(num1, num2));
	printf ("\nLa resta es: %d", res(num1, num2));
	printf ("\nLa multiplicacion es: %d", mult(num1, num2));
	printf ("\nLa division es: %d", division(num1, num2));
	printf ("\n\n");	


system ("pause");
return 0;	
}


void datos ()
{	
	printf ("Digite el primer numero: "); scanf ("%d", &num1);
	printf ("Digite el segundo numero: "); scanf ("%d", &num2);			
}

int sum (int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}

int res (int num1, int num2)
{
	int res = num1 - num2;
	return res;
}

int mult (int num1, int num2)
{
	int mult = num1 * num2;
	return mult;
}

int division (int num1, int num2)
{
	int division = num1 / num2;
	return division;
}
