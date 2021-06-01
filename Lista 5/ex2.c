#include <stdio.h>
#include <locale.h>
#include <math.h>
/*Fa�a um programa que receba a medida do �ngulo (em graus) formado por uma escada apoiada no ch�o e encostada na parede e a altura da parede onde 
est� a ponta da escada. Calcule e mostre a medida dessa escada.
Observa��o: as fun��es trigonom�tricas implementadas nas linguagens de programa��o trabalham
com medidas de �ngulos em radianos*/

int main (void) {
	float graus, parede, rad, hip;
	setlocale(LC_ALL, "Portuguese_Brazil");
	printf("Coloque o �ngulo e a altura da parede\n");
	scanf("%f%f", &graus, &parede);
	
	rad = graus*3.1415/180;
	hip = parede/sin(rad);
	
	printf("O tamanho da escada(hipotenusa) � de %f", hip);
	return 0;
}
