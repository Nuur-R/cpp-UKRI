#include <stdio.h>
main()
{
    int I;
    I = 1;
    while (I <= 10){
        printf("%4i", (2*I)+1);
        I++;
    }
    return 0;
}