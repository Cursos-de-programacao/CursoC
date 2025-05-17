#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int opcao, num1, num2;
    printf("--------------------------\n");
    printf("Caluladora V1.0\n");
    printf("--------------------------\n");
    printf("1 - Somar      \n");
    printf("2 - Subtrair   \n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir    \n");
    printf("--------------------------\n");
    printf("Escolha a Opcao: ");
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
        printf("Digite dois numeros: \n");
        scanf("%d" "%d", &num1, &num2);
        printf("--------------------------\n");
        printf("Total da Soma = %d\n", num1 + num2);
        printf("--------------------------\n");
        break;
    case 2:
        printf("Digite dois numeros: \n");
        scanf("%d" "%d", &num1, &num2);
        printf("--------------------------\n");
        printf("Total da Subtracao = %d\n", num1 - num2);
        printf("--------------------------\n");
        break;
    
    case 3:
        printf("Digite dois numeros: \n");
        scanf("%d" "%d", &num1, &num2);
        printf("--------------------------\n");
        printf("Total da Multiplicação = %d\n", num1 * num2);
        printf("--------------------------\n");
        break;
    
    case 4:
        printf("Digite dois numeros: \n");
        scanf("%d" "%d", &num1, &num2);
        printf("--------------------------\n");
        printf("Total da Divisao = %d\n", num1 / num2);
        printf("--------------------------\n");
        break;
    
    default:
        printf("Opcao selecionada invalida.");
        break;
    }
    return 0;
}
