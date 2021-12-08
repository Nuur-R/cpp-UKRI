#include <stdio.h>
main()
{
    int I, N;
    I = 1;
    N = 3;
    while (I <= 10){
        printf("%4i", N);
        N = N+2;
        I++;
    }
    return 0;
}