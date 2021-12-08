#include <stdio.h>
main()
{
    int I,N;
    printf("Input nilai N = ");
    scanf("%i", &N);
    if (N%2 == 1) {
        for(I=20; I>=0; I=I-N){
            printf("%3i", I);
        }
    } else {
        I=0;
        while (I<=20) {
            printf("%3i", I);
            I += N;
        }
    }
    return 0;
}