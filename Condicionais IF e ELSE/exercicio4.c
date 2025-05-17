#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    int num, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    if(num + num2 == 10){
        printf("A soma dos numeros fica: %d", num + num2);
    }
    else if(num + num2 > 10){
        printf("A soma dos numeros fica: %d", num + num2);
    }
    else{
        printf("A soma dos numeros fica: %d", num + num2);
    }
    

    return 0;
}