
#include <stdio.h>
#include <locale.h>
#include <math.h>
/*Fa�a um programa que receba o custo de um espet�culo teatral e o pre�o do convite desse espet�culo. Esse programa dever� calcular e mostrar a quantidade 
de convites que devem ser vendidos para que, pelo menos, o custo do espet�culo seja alcan�ado.*/

int main (void) {
	float show, ticket, number;
	setlocale(LC_ALL, "Portuguese_Brazil");
	printf("Coloque o custo do espetaculo e em seguida o pre�o individual dos ingressos");
	scanf("%f%f", &show, &ticket);
	
	//usando ceil para arredondar para cima, caso venha algum valor quebrado de 
	//venda de ingressos ja que n�o � poss�vel vender ingressos em um n�mero n�o inteiro
	
	number = ceil(show / ticket );
	
	printf("Voc� precisa vender %.0f ingressos para pagar o custo da produ��o do teatro", number);
	
	return 0;
}
