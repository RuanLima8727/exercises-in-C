#include<stdio.h>
#include <locale.h>
/*Fa�a um programa que receba um n�mero inteiro e verifique se � par ou �mpar.*/

int main (void) {

	int n1, result;
	setlocale(LC_ALL, "Portuguese_Brazil");
	printf("Coloque o n�mero\n");
	scanf("%i", &n1);
	
	result = n1 % 2;
	
	if ( result == 0) {
		printf("O n�mero escolhido � par");
	}
	else {
		printf("O n�mero escolhido � impar");
	}
}
