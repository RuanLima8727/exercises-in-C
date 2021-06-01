#include <stdio.h>
#include <locale.h>
/*Um mercadinho deseja reajustar os preços de seus produtos usando o seguinte critério: o produto
poderá ter seu preço aumentado ou diminuído. Para o preço ser alterado, o produto deve preencher
pelo menos um dos requisitos a seguir:
VENDA MÉDIA MENSAL PREÇO ATUAL (REAIS) % DE AUMENTO % DE DIMINUIÇÃO
< 500 < 30, 00 10 -
>= 500, 00E < 1200, 00 >= 30, 00e < 80, 00 15 -
>= 1200, 00 >= 80, 00 - 20*/

int main (void) {
	float price, sales;
	setlocale(LC_ALL, "Portuguese_Brazil");
	printf("Coloque primeiro o preço do produto : \nAgora coloque a quantidade de vendas por mês:");
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
	
	printf("Esse é o preço do produto após alteração : %f", price);
	
	return 0;
}
