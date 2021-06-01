#include <stdio.h>
#include <locale.h>
/*Um mercadinho deseja reajustar os pre�os de seus produtos usando o seguinte crit�rio: o produto
poder� ter seu pre�o aumentado ou diminu�do. Para o pre�o ser alterado, o produto deve preencher
pelo menos um dos requisitos a seguir:
VENDA M�DIA MENSAL PRE�O ATUAL (REAIS) % DE AUMENTO % DE DIMINUI��O
< 500 < 30, 00 10 -
>= 500, 00E < 1200, 00 >= 30, 00e < 80, 00 15 -
>= 1200, 00 >= 80, 00 - 20*/

int main (void) {
	float price, sales;
	setlocale(LC_ALL, "Portuguese_Brazil");
	printf("Coloque primeiro o pre�o do produto : \nAgora coloque a quantidade de vendas por m�s:");
	scanf("%f%f", &price, &sales);
	
	if (price < 30 || sales < 500 ) {
		price += price*0.10;
	}
	else if ((30 <= price && price < 80) || (500 <= sales && sales < 1200) ){
		price += price*0.15;
	}
	else if (price >= 80 || sales >= 1200 ) {
		price -= price*0.20;
	}
	
	printf("Esse � o pre�o do produto ap�s altera��o : %f", price);
	
	return 0;
}
