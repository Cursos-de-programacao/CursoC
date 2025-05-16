#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    // para usar Acentos. Mais ele é meio inutil pq fica bugado.
    setlocale(LC_ALL, "");

    // pega a 1° nota do aluno.
    float nota1 = 0;
    printf("Escreva a 1° nota do aluno: ");
    scanf("%f", &nota1);

    // pega a 2° nota do aluno.
    float nota2 = 0;
    printf("Escreva a 2° nota do aluno: ");
    scanf("%f", &nota2);
    
    // mostra na tela a media entre ela.
    printf("A media do aluno é: %f", (nota1 + nota2) / 2 );

    return 0;
}
