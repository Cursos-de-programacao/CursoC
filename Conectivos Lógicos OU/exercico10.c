#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    int num1, num2;
    printf("Digite dois numero: ");
    scanf("%d" "%d", &num1, &num2);

    if (num1 % 2 == 0 || num2 % 2 == 0)
    {
        printf("Existe numeros par!");
    }
    else
    {
        printf("Nao existe numero par!");
    }
    
    return 0;
}
