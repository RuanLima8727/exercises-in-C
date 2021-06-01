#include <stdio.h>
#include <locale.h>
#include <math.h>
/*Faça um programa para resolver equações do 2 o grau.*/
int main (void) {
	float a,b,c, delta,x1,x2;
	setlocale(LC_ALL, "Portuguese_Brazil");
	printf("Coloque os coeficientes\n a b c \nnessa ordem\n");
	scanf("%f%f%f", &a,&b,&c);
	
	if (a!=0) 
	{
		//Bhaskara
		delta = pow(b,2) -4*a*c;
		x1 = (-b + sqrt(delta) )/(2*a);	
		x2 = (-b - sqrt(delta) )/(2*a);
		
		if (delta < 0) {
			printf("Delta Menor que zero, não existem raizes reais");
		}
		else if (delta == 0) {
			printf("Delta Igual a zero, as raizes são iguais \nx1 : %f \nx2 : %f", x1, x2);
		}
		else {
			printf("Esses são os valores de x \nx1 : %f \nx2 : %f", x1, x2);
		return 0;
		}
	}		
	else {
		printf("Valores inválidos");
	}	
}
