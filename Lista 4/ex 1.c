#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
/*1) Fa�a um programa que receba tr�s notas de um aluno, calcule e mostre a m�dia aritm�tica e a
mensagem constante na tabela a seguir. Aos alunos que ficaram para exame, calcule e mostre a nota
que dever�o tirar para serem aprovados, considerando que a m�dia exigida � 6,0.*/


int main (void)
{
	float n1,n2,n3, media, falta;
	setlocale(LC_ALL, "Portuguese_Brazil");
  printf("Coloque as tr�s notas do aluno\n");
  scanf("%f%f%f",&n1,&n2,&n3);
  
  media = (n1 + n2 + n3)/3;
  
  printf("Essa e a media do aluno %2.00f\n", media);
  
  if (media < 3){
  	
  	printf("ele foi REPROVADO\n");  	 
  	 
  }	
	if (media >=3 && media < 7)
	{
  	 	
		falta = 6 - media;  	 	
   		printf("Ele ficou de EXAME\n");
   		printf("Isso � o quanto falta para ser aprovado %2.00f\n", falta);
   
   }
   if(media >= 7 && media <=10){
   	 printf("Ele foi APROVADO\n");
   }
       
  system("PAUSE");
  return 0;
}
