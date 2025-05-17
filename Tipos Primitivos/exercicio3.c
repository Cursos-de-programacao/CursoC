#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "");
    int num1, num2, num3;
    
    printf("Digite 3 números inteiros: ");
    scanf("%d" "%d" "%d", &num1, &num2, &num3);
    int resultado = num1 * num2 * num3;
    printf("resultado da multiplicação: %d", resultado);
    
    return 0;
}
