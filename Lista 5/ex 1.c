#include <stdio.h>
#include <locale.h>
/* Cada degrau de uma escada tem X de altura. Fa�a um programa que receba essa altura e a altura
que o usu�rio deseja alcan�ar subindo a escada, calcule e mostre quantos degraus ele dever� subir
para atingir seu objetivo, sem se preocupar com a altura do usu�rio. Todas as medidas fornecidas
devem estar em metros*/

int main (void) {
	float degrau, stairs, step ;
	setlocale(LC_ALL, "Portuguese_Brazil");
	printf("Coloque o tamanho do degrau e qual altura o usu�rio deseja alcan�ar(Em Metros)\n");
	scanf("%f %f", &degrau, &stairs);
	
	step = stairs / degrau;
	
	printf("Essa � a quantidade passos %f", step);
	
	return 0;
}
