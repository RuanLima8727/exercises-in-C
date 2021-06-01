#include <stdio.h>
#include <locale.h>
/*
Faça um programa que receba quatro números inteiros, calcule e mostre a soma desses números.
*/
int main (void) 
{
	float n1, n2, n3, n4, soma;
	setlocale(LC_ALL, "Portuguese_Brazil");
	printf("Coloque 4 números em sequência\n");
	scanf("\n%f\n%f\n%f\n%f", &n1, &n2, &n3, &n4);
	
	soma = n1 + n2 + n3 + n4;
	
	printf("\nA soma de todos os números é : %0.3f", soma);
	
	return 0;
}
