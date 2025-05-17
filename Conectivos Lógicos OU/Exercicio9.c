#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    int num1, num2;
    printf("Digite dois numeros: ");
    scanf("%d" "%d", &num1, &num2);
    
    if (num1 > 10 || num2 > 10)
    {
        printf("Um dos numeros digitados eh maior que 10.");
    }
    else
    {
        printf("Os numero digitados sao menores que 10.");
    }
    

    return 0;
}
