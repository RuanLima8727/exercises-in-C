#include <stdio.h>
#include <locale.h>
/*
6) Fa�a um programa que receba um n�mero inteiro maior que 1, verifique se o n�mero fornecido �
primo ou n�o e mostre uma mensagem de n�mero primo ou de n�mero n�o primo. Um n�mero �
primo quando � divis�vel apenas por 1 e por ele mesmo.
*/
int main(void) {
	int num, count, test, nPrimo;
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Digite um n�mero inteiro\n\n");
	scanf("%d", &num);
	
	count = num -1;
	nPrimo = 0;
	
	if (num == 1) 
	{
		printf("\nO n�mero : %d � primo ", num);
	}
	
	while (count >= 1) 
	{	
			test = num % count;
			
			if (test == 0 && nPrimo == 0 && count >1) 
			{
				printf("\n\nO n�mero :%d n�o � primo", num);
				nPrimo = 1;
			}
			
			else if (count == 1 && nPrimo == 0) 
			{
				printf("\nO n�mero : %d � primo ", num);
			}
		
		count --;
	}
	
	return 0;
}
