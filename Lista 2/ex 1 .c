#include <stdio.h>
#include <locale.h>
/*
Fa�a um programa que receba quatro n�meros inteiros, calcule e mostre a soma desses n�meros.
*/
int main (void) 
{
	float n1, n2, n3, n4, soma;
	setlocale(LC_ALL, "Portuguese_Brazil");
	printf("Coloque 4 n�meros em sequ�ncia\n");
	scanf("\n%f\n%f\n%f\n%f", &n1, &n2, &n3, &n4);
	
	soma = n1 + n2 + n3 + n4;
	
	printf("\nA soma de todos os n�meros � : %0.3f", soma);
	
	return 0;
}
