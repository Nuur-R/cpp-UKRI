#include <stdio.h>
main()
{
    int i, N=1000000, a=1;
    for(i=1; i<=10; i++) {
        printf("\nRp ");
        printf("%4i", N);
        N = N + N*2/100;
    }
    return 0;
}