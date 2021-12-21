#include <stdio.h>
#define n 11
main()
{
    int A[n];
    int i, max;

    printf("Input Data\n");
    for (i = 0; i < n; i++){
        printf("Data - %i : ", (i+1));
        scanf("%i", &A[i]);
        
    }

    printf("\n\n");
    printf("Data yang di innput :\n");
    max = A[0];
    for (i = 0; i < n; i++){
        max = A[i];
        printf("%4i", max);
    }
    return 0;
}