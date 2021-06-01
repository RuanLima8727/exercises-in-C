#include <stdio.h>
#include <locale.h>
#include<stdlib.h>
/*Dados tr�s valores X, Y e Z, verifique se eles podem ser os comprimentos dos lados de um tri�ngulo
e, se forem verifique se � um tri�ngulo equil�tero, is�scele ou escaleno. Se eles n�o formarem um
tri�ngulo, escreva uma mensagem. Considere que:
a) o comprimento de cada lado de um tri�ngulo � menor que soma dos outros dois lados;
b) chama-se equil�tero o tri�ngulo que tem tr�s lados iguais;
c) denomina-se is�sceles o tri�ngulo que tem o comprimento de dois lados iguais;
d) recebe o nome de escaleno o tri�ngulo que tem os tr�s lados diferentes*/
int main (void) {
	setlocale(LC_ALL, "Portuguese_Brazil");
	float n1,n2,n3;
	printf("Coloque os tr�s lados do Tri�ngulo");
	scanf("%f%f%f", &n1, &n2, &n3);
	
	if (abs(n2 -n3) < n1 && n1 < (n2 + n3)) {
		if (n1 == n2 ==n3) {
			printf("O seu Tri�ngulo � equil�tero");
		}
		else if (n1 == n2 || n2 == n3 || n1 == n3){
			printf("O seu Tri�ngulo � is�sceles");
		}
		else if ( n1 != n2 != n3) {
			printf("O seu Tri�ngulo � escaleno");
		}
	}
	else {
		printf("Infelizmente esses n�meros n�o formam um tri�ngulo");
	}
	return 0;
}
