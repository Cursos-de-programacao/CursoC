#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num > 0 && num < 10)
    {
        printf("O numero %d esta entre 10.", num);
    }
    else
    {
        printf("O numero %d nao esta entre 10.", num);
    }
    
    
    return 0;
}
