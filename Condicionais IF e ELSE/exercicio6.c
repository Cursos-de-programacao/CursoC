#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    if (num % 2 == 0)
    {
        printf("Meus parabens, seu numero eh par!");
    }
    else
    {
        printf("Meus parabens, seu numero eh impar!");
    }
    
    return 0;
}