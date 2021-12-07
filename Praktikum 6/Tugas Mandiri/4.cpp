#include <stdio.h>
main()
{
    int i, N=2;
    for(i=1; i<=100; i++) {
        printf("%4i", N);
        N = N + 2;
        printf(" meter\n");
    }
    return 0;
}