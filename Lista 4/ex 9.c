#include <stdio.h>
#include <locale.h>
/*Faça um programa que receba a medida de um ângulo em graus. Calcule e mostre o quadrante em
que se localiza esse ângulo. Considere os quadrantes da trigonometria e, para ângulos maiores que
360 ou menores que -360, reduzi-los, mostrando também o número de voltas e o sentido da volta
(horário ou anti-horário).*/

int main (void) {
	int graus, reduzido, voltas;
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Coloque um valor em graus\n");
	scanf("%i", &graus);
	
	reduzido = graus % 360;
	voltas = graus / 360;
	printf("1Essa é a ponta do seu ângulo no círculo : %i Graus\n", reduzido);
	
	if (reduzido <= 90 && reduzido >= 0 ) {
		printf("Primeiro Quadrante");
	}
	else if (reduzido > 90 && reduzido <= 180) {
		printf("Segundo Quadrante");
	}
	else if (reduzido >180 && reduzido <= 270) {
		printf("Terceiro Quadrante");	
	}
	else if (reduzido > 270 && reduzido <= 360) {
		printf("Quarto Quadrante");
	}

	if (reduzido <= 0 && reduzido > -90 ) {
		printf("Quarto Quadrante");
	}
	else if (reduzido < -90 && reduzido >= -180) {
		printf("Terceiro Quadrante");
	}
	else if (reduzido < -180 && reduzido >= -270) {
		printf("Segundo Quadrante");	
	}
	else if (reduzido < -270 && reduzido >= -360 ) {
		printf("Primeiro Quadrante");
	}
		
	printf("\nEsse é o número de voltas que seu ângulo deu : %i", voltas);
	return 0;
}
