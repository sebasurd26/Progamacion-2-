#include <stdio.h>
#include <stdlib.h>

void fibonacci (int a, int b, int c);

int main (){
	
	printf ("\n\tSERIE DE FIBONACCI\n\n");
	fibonacci (0, 1, 20);
	printf ("\n\n\n");
	
system ("pause");
return 0;
}


void fibonacci (int penu, int ult, int num){
	
	int actual;
	
	printf ("%d,  ", ult);
	if (num > 1){
		actual = penu + ult;
		num-- ;
		fibonacci (ult, actual, num);
	}
}
