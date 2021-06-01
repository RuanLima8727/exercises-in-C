
#include <stdio.h>
#include <locale.h>
#include <math.h>
/*Faça um programa que receba o custo de um espetáculo teatral e o preço do convite desse espetáculo. Esse programa deverá calcular e mostrar a quantidade 
de convites que devem ser vendidos para que, pelo menos, o custo do espetáculo seja alcançado.*/

int main (void) {
	float show, ticket, number;
	setlocale(LC_ALL, "Portuguese_Brazil");
	printf("Coloque o custo do espetaculo e em seguida o preço individual dos ingressos");
	scanf("%f%f", &show, &ticket);
	
	//usando ceil para arredondar para cima, caso venha algum valor quebrado de 
	//venda de ingressos ja que não é possível vender ingressos em um número não inteiro
	
	number = ceil(show / ticket );
	
	printf("Você precisa vender %.0f ingressos para pagar o custo da produção do teatro", number);
	
	return 0;
}
