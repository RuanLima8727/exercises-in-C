#include <stdio.h>
#include <locale.h>
/*
Fa�a um programa que receba tr�s notas, calcule e mostre a m�dia aritm�tica
*/
int main (void) 
{
	float n1, n2, n3, media;
	setlocale(LC_ALL, "Portuguese_Brazil");
	printf("Coloque as 3 notas em sequ�ncia\n");
	scanf("%f\n%f\n%f", &n1, &n2, &n3);
	
	media = (n1 + n2 + n3) / 3 ;
	
	printf("\nA m�dia do aluno � : %0.3f", media);
	
	return 0;
}
