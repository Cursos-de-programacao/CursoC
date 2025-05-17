#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    int num1, num2;
    printf("Digite dois numeros: ");
    scanf("%d" "%d", &num1, &num2);

    int soma = num1 + num2;

    if (soma > 0 && soma < 10 || soma % 2 == 0)
    {
        printf("A soma de %d e %d esta entre 10 ou eh par.", num1, num2);
    }
    else
    {
        printf("A sua soma nao esta entre 10 ou nao eh par.");
    }
    
    return 0;
}
