#include<stdio.h>
#include<math.h>
#include <locale.h>
/*Fa�a um programa que mostre o menu de op��es a seguir, receba a op��o do usu�rio e os dados
necess�rios para executar cada opera��o.
Menus de op��es:
1. Somar dois n�meros.
2. Raiz quadrada de um n�mero.
Digite a op��o desejada:*/
int main (void) {
	int modo ;
	float n1, n2, n3, soma, raiz;
	setlocale(LC_ALL, "Portuguese_Brazil");
	printf("Primeiro modo : Soma \n Segundo modo : Raiz Quadrada \n Escolha digitando 1 ou 2...\n");
	scanf("%i", &modo);
	
	switch (modo) {
		case 1 :
			printf("Digite os dois n�meros\n");
			scanf("%f %f", &n1, &n2);
			soma = n1 + n2 ;
			printf("Essa � a soma: %f\n", soma);
			break;
			
		case 2 : 
			printf("Digite o n�mero\n");
			scanf("%f", &n3);
			raiz = sqrt(n3);
			printf("Essa � a raiz: %f\n", raiz);
			break;
		
		default:
			printf("Por favor, coloque um valor v�lido");
	
	}
	return 0;
}

