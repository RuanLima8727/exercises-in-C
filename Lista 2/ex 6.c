#include <stdio.h>
#include <locale.h>
/*
 Fa�a um programa que receba o sal�rio base de um funcion�rio, calcule e mostre o sal�rio a
receber, sabendo-se que o funcion�rio tem gratifica��o
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


