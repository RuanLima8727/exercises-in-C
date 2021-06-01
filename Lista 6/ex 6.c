#include <stdio.h>
#include <locale.h>
/*
6) Faça um programa que receba um número inteiro maior que 1, verifique se o número fornecido é
primo ou não e mostre uma mensagem de número primo ou de número não primo. Um número é
primo quando é divisível apenas por 1 e por ele mesmo.
*/
int main(void) {
	int num, count, test, nPrimo;
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Digite um número inteiro\n\n");
	scanf("%d", &num);
	
	count = num -1;
	nPrimo = 0;
	
	if (num == 1) 
	{
		printf("\nO número : %d é primo ", num);
	}
	
	while (count >= 1) 
	{	
			test = num % count;
			
			if (test == 0 && nPrimo == 0 && count >1) 
			{
				printf("\n\nO número :%d não é primo", num);
				nPrimo = 1;
			}
			
			else if (count == 1 && nPrimo == 0) 
			{
				printf("\nO número : %d é primo ", num);
			}
		
		count --;
	}
	
	return 0;
}
