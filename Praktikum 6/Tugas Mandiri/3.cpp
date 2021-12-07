#include <stdio.h>
main()
{
    int i, N=2;
    printf("10 Bilangan Ganjil Pertama\n");
    printf("1 ");
    for(i=1; i<=10; i++) {
        printf("%4i", N);
        N = N * 2;
    }
    return 0;
}