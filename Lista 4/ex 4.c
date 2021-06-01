#include<stdio.h>
#include <locale.h>
/*Faça um programa que receba um número inteiro e verifique se é par ou ímpar.*/

int main (void) {

	int n1, result;
	setlocale(LC_ALL, "Portuguese_Brazil");
	printf("Coloque o número\n");
	scanf("%i", &n1);
	
	result = n1 % 2;
	
	if ( result == 0) {
		printf("O número escolhido é par");
	}
	else {
		printf("O número escolhido é impar");
	}
}
