#include <stdio.h>
#include <locale.h>
/*
Faça um programa que receba três notas, calcule e mostre a média aritmética
*/
int main (void) 
{
	float n1, n2, n3, media;
	setlocale(LC_ALL, "Portuguese_Brazil");
	printf("Coloque as 3 notas em sequência\n");
	scanf("%f\n%f\n%f", &n1, &n2, &n3);
	
	media = (n1 + n2 + n3) / 3 ;
	
	printf("\nA média do aluno é : %0.3f", media);
	
	return 0;
}
