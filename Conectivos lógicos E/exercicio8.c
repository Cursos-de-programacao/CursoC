#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    int num1, num2, num3;
    printf("Digite 3 numeros: ");
    scanf("%d" "%d" "%d", &num1, &num2, &num3);
    if (num1 > 10 && num2 > 10 && num3 > 10)
    {
        printf("Os numeros digitados sao maiores que 10.");
    }
    else
    {
        printf("Os numeros digitados nao eh maior que 10.");
    }
    
    return 0;
}
