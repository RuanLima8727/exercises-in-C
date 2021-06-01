#include <stdio.h>
#include <locale.h>
#include <math.h>
int main (void) {
	
	float a, b, c, bsquare;
	setlocale(LC_ALL, "Portuguese_Brazil");
	printf("Coloque a altura em que se deseja colocar o quadro na parede \nE em seguida o tamanho da escada\n");
	scanf("%f%f", &a,&c);
	
	if ( c <= a) {
		printf("Por favor, coloque uma escada que seja mais alta que o ponto desejado na parede");
	}
	else {
		bsquare = pow(c,2) - pow(a,2); 
		b= sqrt(bsquare);
		printf("A distância correta é : %f", b);
	}
	
	
	
	return 0;
}
