#include <stdio.h>
main()
{
    // int A[5] = {7, 3, 9, 15, 12, 17};    // awal
    int A[6] = {7, 3, 9, 15, 12, 17};       // diperbaiki
    int i;
    for(i=0; i<5; i++){
        printf("%4i", A[i]);
    }
    return 0;
}