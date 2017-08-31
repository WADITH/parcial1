/*
*NOMBRE:Parcial No. 1
*AUTORES:Wadith Enrique Montenegro y JuAN Carlos Bermudez
*FECHA:30 Agosto/2017
*DESCRIPCION:Pregunta 2 Parcial 1
*/


#include<iostream>
#include<stdio.h>
using namespace std;

int main () {
	

	int a,b,c,i;
	int num;
	a = 0;
	b = 1;
	
	printf("Ingrese un numero :");
	scanf("%d", &num);
	
	
	
	for(i = 0 ; i <= num ; i++)
	{
		c = a+b;
		b = a;
		a = c;
		
		printf("%d \n" , a );
	}
	
	return 0;
}

