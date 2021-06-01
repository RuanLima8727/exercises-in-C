#include <stdio.h>
#include <locale.h>
/*
Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário,
sabendo-se que este sofreu um aumento de 25 porcento.
*/
int main (void) 
{
	float n1, n2;
	setlocale(LC_ALL, "Portuguese_Brazil");
	printf("Coloque o salário do funcionário\n");
	scanf("%f", &n1);
	
	n2 = n1 + n1*0.25 ;
	
	printf("\nO salário após o aumento é : %0.3f", n2);
	
	return 0;
}
