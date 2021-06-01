#include<stdio.h>
#include <locale.h>
/*Faça um programa que receba três números e mostre-os em ordem crescente. Suponha que o
usuário digitará três números diferentes.*/
int main (void)
{
	float n1, n2, n3, first, second, third;
	setlocale(LC_ALL, "Portuguese_Brazil");
	printf("Coloque os 3 numeros\n");
	scanf("%f%f%f", &n1, &n2, &n3);
	
		
	if (n1 < n2 && n1 < n3) {
		
		first = n1;
		
			if(n2 < n3) {
				second =  n2;
				third = n3;
			}
			else {
				second =  n3;
				third = n2;
			}
		}
		
	if (n2 < n1 && n2 < n3) {
			
		first = n2;
		
		if(n1 < n3) {
				second =  n1;
				third = n3;
			}
			else {
				second =  n3;
				third = n1;
			}
		}
		
	if (n3 < n2 && n3 < n1) {
			
		first = n3;
		
		if(n1 < n2) {
				second =  n1;
				third = n2;
			}
			else {
				second =  n2;
				third = n1;
			}
		}
		
	printf("Essa é a ordem dos números colocados : %.2f %.2f %.2f", first, second, third);
		
		
}
