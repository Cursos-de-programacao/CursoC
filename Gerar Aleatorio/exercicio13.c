#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    // Usa o tempo atual como semente
    srand(time(NULL));

    // Cria um número aleatorio de 0 a 9;
    int aleatorio = rand() % 10;
    int aleatorio2 = rand() % 10;
    int aleatorio3 = rand() % 10;

    printf("A soma dos 3 numeros gerados eh: %d\n", aleatorio + aleatorio2 + aleatorio3);

    printf("Valores: %d, %d, %d", aleatorio, aleatorio2, aleatorio3);
    return 0;
}
