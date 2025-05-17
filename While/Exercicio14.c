#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    int i = 50;
    while (i - 6 > 0 )
    {
        i = i - 6;
        printf("%d\n", i);
    }
    
    return 0;
}
