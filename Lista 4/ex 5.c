#include<stdio.h>
#include<math.h>
#include <locale.h>
/*Faça um programa que mostre o menu de opções a seguir, receba a opção do usuário e os dados
necessários para executar cada operação.
Menus de opções:
1. Somar dois números.
2. Raiz quadrada de um número.
Digite a opção desejada:*/
int main (void) {
	int modo ;
	float n1, n2, n3, soma, raiz;
	setlocale(LC_ALL, "Portuguese_Brazil");
	printf("Primeiro modo : Soma \n Segundo modo : Raiz Quadrada \n Escolha digitando 1 ou 2...\n");
	scanf("%i", &modo);
	
	switch (modo) {
		case 1 :
			printf("Digite os dois números\n");
			scanf("%f %f", &n1, &n2);
			soma = n1 + n2 ;
			printf("Essa é a soma: %f\n", soma);
			break;
			
		case 2 : 
			printf("Digite o número\n");
			scanf("%f", &n3);
			raiz = sqrt(n3);
			printf("Essa é a raiz: %f\n", raiz);
			break;
		
		default:
			printf("Por favor, coloque um valor válido");
	
	}
	return 0;
}

