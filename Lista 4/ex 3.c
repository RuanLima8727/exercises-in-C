#include<stdio.h>
#include <locale.h>
/*Fa�a um programa que receba tr�s n�meros e mostre-os em ordem crescente. Suponha que o
usu�rio digitar� tr�s n�meros diferentes.*/
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
		
	printf("Essa � a ordem dos n�meros colocados : %.2f %.2f %.2f", first, second, third);
		
		
}
