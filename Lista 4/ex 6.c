#include <stdio.h>
#include <locale.h>
/*Fa�a um programa que receba o sal�rio inicial de um funcion�rio, calcule e mostre o novo sal�rio, acrescido de bonifica��o e de aux�lio escola.
SAL�RIO BONIFICA��O
At� 500,00 reais 5/100 do sal�rio
Entre 500,00 e 1200,00 reais 12/100 do sal�rio
acima de 1200,00 reais sem bonifica��o
SAL�RIO AUX�LIO ESCOLA
At� 600,00 reais 150,00 reais
acima de 600,00 reais 100,00 reais*/
int main (void) {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	float sal;
	printf("Coloque o sal�rio do funcionario\n");
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
	
	printf("Esse � o salario apos bonifica��es : %f", sal);
	return 0;
}
