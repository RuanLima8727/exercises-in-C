#include<stdio.h>
#include<locale.h>
/* Fa�a um programa que receba dois n�meros e mostre o maior.*/
int main(void)
{
	float n1, n2;
	setlocale(LC_ALL, "Portuguese_Brazil");
	printf("Coloque o primeiro n�mero\n");
	scanf("%f", &n1);
	
	printf("Coloque o segundo n�mero\n");
	scanf("%f", &n2);
	
	if (n1 > n2) {
		printf("Esse � o maior n�mero %.2f", n1);
	}
	else {
		printf("Esse � o maior n�mero %.2f", n2);
	}
	
	return 0;
}
