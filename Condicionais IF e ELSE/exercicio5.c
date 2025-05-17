#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int num1, num2;
    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite um numero: ");
    scanf("%d", &num2);
    if (num1 > num2)
    {
        printf("O Numero '%d' é maior que o '%d'.", num1, num2);
    }
    else if (num1 == num2)
    {
        printf("O Numero '%d' é igual que o '%d'.", num1, num2);
    }
    else
    {
        printf("O Numero '%d' é maior que o '%d'.", num2, num1);
    }
    
    return 0;
}
