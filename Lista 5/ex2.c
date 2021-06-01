#include <stdio.h>
#include <locale.h>
#include <math.h>
/*Faça um programa que receba a medida do ângulo (em graus) formado por uma escada apoiada no chão e encostada na parede e a altura da parede onde 
está a ponta da escada. Calcule e mostre a medida dessa escada.
Observação: as funções trigonométricas implementadas nas linguagens de programação trabalham
com medidas de ângulos em radianos*/

int main (void) {
	float graus, parede, rad, hip;
	setlocale(LC_ALL, "Portuguese_Brazil");
	printf("Coloque o ângulo e a altura da parede\n");
	scanf("%f%f", &graus, &parede);
	
	rad = graus*3.1415/180;
	hip = parede/sin(rad);
	
	printf("O tamanho da escada(hipotenusa) é de %f", hip);
	return 0;
}
