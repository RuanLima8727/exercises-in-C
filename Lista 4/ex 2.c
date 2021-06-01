#include<stdio.h>
#include<locale.h>
/* Faça um programa que receba dois números e mostre o maior.*/
int main(void)
{
	float n1, n2;
	setlocale(LC_ALL, "Portuguese_Brazil");
	printf("Coloque o primeiro número\n");
	scanf("%f", &n1);
	
	printf("Coloque o segundo número\n");
	scanf("%f", &n2);
	
	if (n1 > n2) {
		printf("Esse é o maior número %.2f", n1);
	}
	else {
		printf("Esse é o maior número %.2f", n2);
	}
	
	return 0;
}
