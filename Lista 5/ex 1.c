#include <stdio.h>
#include <locale.h>
/* Cada degrau de uma escada tem X de altura. Faça um programa que receba essa altura e a altura
que o usuário deseja alcançar subindo a escada, calcule e mostre quantos degraus ele deverá subir
para atingir seu objetivo, sem se preocupar com a altura do usuário. Todas as medidas fornecidas
devem estar em metros*/

int main (void) {
	float degrau, stairs, step ;
	setlocale(LC_ALL, "Portuguese_Brazil");
	printf("Coloque o tamanho do degrau e qual altura o usuário deseja alcançar(Em Metros)\n");
	scanf("%f %f", &degrau, &stairs);
	
	step = stairs / degrau;
	
	printf("Essa é a quantidade passos %f", step);
	
	return 0;
}
