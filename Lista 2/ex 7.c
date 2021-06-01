#include <stdio.h>
#include <locale.h>
/*
Faça um programa que receba o valor de um depósito e o valor da taxa de juros, calcule e mostre
o valor do rendimento e o valor total depois do rendimento.
*/
int main (void)
{
    float dep ,jur, res, rend;
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("\nInsira o deposito\n");
    scanf("%f", &dep);

    printf("\nInsira a taxa de juros\n");
    scanf("%f", &jur);

    res = dep + dep*jur/100;
    rend = res - dep;
    printf("\nResultado : %5.2f:" ,res);
     printf("\nRendimento : %5.2f:" ,rend);

    return 0;
}


