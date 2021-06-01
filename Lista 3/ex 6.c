#include <stdio.h>

int main(void){
    float r, pi, a;
    printf("\nColoque o raio do seu círculo\n");
    scanf("%f", &r);

    pi = 3,1415;
    a = (r*r) * pi;

    printf("%.3f", a);




return 0;
}

