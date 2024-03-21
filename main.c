#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    scanf("%d", &num1);
    scanf("%d", &num2);

    printf("Soma: %d\n", num1+num2);
    printf("Subtracao: %d\n", num1-num2);
    printf("Multiplicacao: %d\n", num1*num2);
    printf("Divisao Inteira: %d\n", num1/num2);
    printf("Divisao Racional: %.3f\n", (float)num1/(float)num2);

    return 0;
}
