#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void datosP ();
void datosM ();
void polinomio ();
float esfera (float r);
float mruv (float vo, float ao, float t);

int op, a, b, c;
float r, vo, ao, t;  

int main(){
  
  printf ("\n\tESCOJA LA OPCION QUE DESEE EJECUTAR\n\n");
  printf ("1) Calcular las raices de un polinomio, grado 2. \n2) Calcular el volumen de una esfera. \n3) Calcular el desplazamiento de un movil en MRUV (movimiento rectilineo uniformemente variado).\n\n");
  printf ("Opcion: "); scanf ("%d", &op);
  
  switch (op){
    
    case 1: printf ("\n\tRAICES DE UN POINOMIO\n");
    		printf ("\n");
        	datosP ();
        	polinomio();
        	printf ("\n\n");
        break;
  
    case 2: printf ("\n\tVOLUMEN DE ESFERA\n");
	        printf ("\nIngrese el valor de R: "); scanf("%f", &r); 
	        esfera (r);
	        printf ("\n\n");
        break;
        
    case 3: printf ("\n\tMRUV\n");
	        datosM ();
	        printf ("\n\nD= %fm", mruv(vo,ao,t));
	        printf ("\n\n");
        break;
	}  
  
	system ("pause");
	return 0;
}


void datosP(){
  printf ("Ingrese el valor de A");
  scanf ("%d", &a);
  printf ("\nIngrese el valor de B");
  scanf ("%d", &b);
  printf ("\nIngrese el valor de C");
  scanf ("%d", &c);
  } 

void polinomio(){	
  float raiz;
  float x, x1, x2;
  raiz = b*b-4*a*c;
  
  if (raiz == 0){
  x = -b/(2*a);
  printf ("El resultado es: %f", x);  
    
  }else if (raiz > 0){
  x1 = (-b+sqrt(b*b-4*a*c))/(2*a);
  x2 = (-b-sqrt(b*b-4*a*c))/(2*a); 
  printf  ("El resultado es: x1= %f, x2= %f\n", x1, x2);
    
  }else{
  printf ("\nERROR raices complejas.\n\n");
  }
}

float esfera (float r){
  int radio = r;
  float volumen = 4/3*2.16*(r*r*r);
  
  if (volumen > 0){
  printf ("\nEl volumen de la esfera es: %f", volumen);
  printf ("\n\n");
  
  }else if(volumen <= 0){
  printf ("\nERROR, radio menor o igual a 0.");
  printf ("\n\n");
  }
  
  return volumen;
}

void datosM(){
  printf ("Ingrese la velocidad inicial: "); 
  scanf ("%f", &vo);
  printf ("\nIngrese el tiempo: "); 
  scanf ("%f", &t);
  printf ("\nIngrese la aceleracion: "); 
  scanf ("%f", &ao);
}
float mruv (float vo, float ao, float t){
	float d= vo*t+1/2*ao*t*t;
	return d;
}
