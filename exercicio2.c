#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    int num = 10, num2 = 20;

    printf("O valor absoluto da diferença entre %d e %d eh \"%d\".", num, num2, abs(num2 - num));
    
    
    return 0;
}
