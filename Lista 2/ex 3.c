#include <stdio.h>
#include <locale.h>
/*
Fa�a um programa que receba tr�s notas e seus respectivos pesos, calcule e mostre a m�dia
ponderada
*/
//Como coloquei o set locale para pt br, n�o se deve usar "." para separar decimais,
// deve-se usar "," caso contr�rio o c�digo da erro
int main (void) 
{
	float n1, n2, n3, p1, p2, p3 ,media;
	setlocale(LC_ALL, "Portuguese_Brazil");
	printf("Coloque as 3 notas em sequ�ncia\n");
	scanf("%f\n%f\n%f", &n1, &n2, &n3);
	
	printf("Coloque o peso das 3 notas em sequ�ncia\n");
	scanf("%f\n%f\n%f", &p1, &p2, &p3);
	
	media = 
	n1*p1 + n2*p2 + n3*p3 ;
	
	printf("\nA m�dia do aluno � : %0.3f", media);
	
	return 0;
}
