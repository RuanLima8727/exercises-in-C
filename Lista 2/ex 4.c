#include <stdio.h>
#include <locale.h>
/*
Fa�a um programa que receba o sal�rio de um funcion�rio, calcule e mostre o novo sal�rio,
sabendo-se que este sofreu um aumento de 25 porcento.
*/
int main (void) 
{
	float n1, n2;
	setlocale(LC_ALL, "Portuguese_Brazil");
	printf("Coloque o sal�rio do funcion�rio\n");
	scanf("%f", &n1);
	
	n2 = n1 + n1*0.25 ;
	
	printf("\nO sal�rio ap�s o aumento � : %0.3f", n2);
	
	return 0;
}
