#include <stdio.h>
#define n 10
main()
{
    int A[n];
    int i, max;

    printf("Nilai Mahasiswa\n\n");
    printf("Input data Mahasiswa\n");
    for (i = 0; i < n; i++){
        printf("Nilai %i: ", (i+1));
        scanf("%i", &A[i]);
        
    }

    printf("\n\n");
    printf("Daftar nilai Mahasiswa yang lulus\n");
    max = A[0];
    for (i = 0; i < n; i++){
        if (A[i] >= 60){
            max = A[i];
            printf("Nilai : %i\n", max);
        }
    }
    return 0;
}