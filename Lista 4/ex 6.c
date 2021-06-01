#include <stdio.h>
#include <locale.h>
/*Faça um programa que receba o salário inicial de um funcionário, calcule e mostre o novo salário, acrescido de bonificação e de auxílio escola.
SALÁRIO BONIFICAÇÃO
Até 500,00 reais 5/100 do salário
Entre 500,00 e 1200,00 reais 12/100 do salário
acima de 1200,00 reais sem bonificação
SALÁRIO AUXÍLIO ESCOLA
Até 600,00 reais 150,00 reais
acima de 600,00 reais 100,00 reais*/
int main (void) {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	float sal;
	printf("Coloque o salário do funcionario\n");
	scanf("%f", &sal);
	
	if (sal <= 500) {
		sal += sal*0.05;
	}
	else if ( 500 < sal && sal <= 1200 ) {
		sal += sal*0.12;
	}

	if (sal <= 600) {
		sal += 150;
	}
	else if(sal > 600) {
		sal += 100;
	}
	
	printf("Esse é o salario apos bonificações : %f", sal);
	return 0;
}
