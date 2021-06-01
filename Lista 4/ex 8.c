#include <stdio.h>
#include <locale.h>
#include<stdlib.h>
/*Dados três valores X, Y e Z, verifique se eles podem ser os comprimentos dos lados de um triângulo
e, se forem verifique se é um triângulo equilátero, isóscele ou escaleno. Se eles não formarem um
triângulo, escreva uma mensagem. Considere que:
a) o comprimento de cada lado de um triângulo é menor que soma dos outros dois lados;
b) chama-se equilátero o triângulo que tem três lados iguais;
c) denomina-se isósceles o triângulo que tem o comprimento de dois lados iguais;
d) recebe o nome de escaleno o triângulo que tem os três lados diferentes*/
int main (void) {
	setlocale(LC_ALL, "Portuguese_Brazil");
	float n1,n2,n3;
	printf("Coloque os três lados do Triângulo");
	scanf("%f%f%f", &n1, &n2, &n3);
	
	if (abs(n2 -n3) < n1 && n1 < (n2 + n3)) {
		if (n1 == n2 ==n3) {
			printf("O seu Triângulo é equilátero");
		}
		else if (n1 == n2 || n2 == n3 || n1 == n3){
			printf("O seu Triângulo é isósceles");
		}
		else if ( n1 != n2 != n3) {
			printf("O seu Triângulo é escaleno");
		}
	}
	else {
		printf("Infelizmente esses números não formam um triângulo");
	}
	return 0;
}
