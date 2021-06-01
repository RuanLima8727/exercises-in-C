#include <stdio.h>
#include <locale.h>
/*
	1) Um funcion�rio de uma empresa recebe, anualmente, aumento salarial. Sabe-se que:
	a) Esse funcion�rio foi contratado em 2005, com sal�rio inicial de R$ 1.000,00.
	b) Em 2006, ele recebeu aumento de 1,5% sobre seu sal�rio inicial.
	c) A partir de 2007 (inclusive), os aumentos salariais sempre corresponderam ao dobro do percentual
	do ano anterior.
	Fa�a um programa que determine o sal�rio atual desse funcion�rio
*/
int main(void) {
	float sal, aum, ano, count, salFinal;
	setlocale(LC_ALL, "Portuguese_Brazil");
	printf("Qual � o ano atual?\n");
	scanf("%f", &ano);
	
	count = ano - 2005;
	sal = 1000.00;
	aum = 0.015;
	
	while (count > 0 ) {
		
		printf("%0.3f\n", aum);
		sal += sal*aum;
		aum *= 2;
	
		count--;
	}
	
	salFinal = sal;
	
	
	printf("\n\n%f" ,salFinal);
	
	return 0;
}
