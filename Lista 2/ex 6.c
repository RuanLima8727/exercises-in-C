#include <stdio.h>
#include <locale.h>
/*
 Faça um programa que receba o salário base de um funcionário, calcule e mostre o salário a
receber, sabendo-se que o funcionário tem gratificação
*/
int main (void)
{
    float sal ,res;
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("\nInsira o salario\n");
    scanf("%f", &sal);

    res = sal + sal*5/100 - sal*7/100;
    printf("\nResultado : %5.2f:" ,res);

    return 0;
}


