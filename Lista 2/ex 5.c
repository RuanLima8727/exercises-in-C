#include <stdio.h>
#include <locale.h>
/*
Faça um programa que receba o salário de um funcionário e o percentual de aumento, calcule e
mostre o valor do aumento e o novo salário
*/
int main (void)
{
    float n1, n2, res;
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("\nInsira o salario\n");
    scanf("%f", &n1);

    printf("\nInsira o aumento em porcentagem\n");
    scanf("%f", &n2);

    res = n1 + n1*n2/100;
    printf("\nResultado : %5.2f:" ,res);
    printf("\nPorcentagem : %5.2f:" ,n2);
    return 0;
}


