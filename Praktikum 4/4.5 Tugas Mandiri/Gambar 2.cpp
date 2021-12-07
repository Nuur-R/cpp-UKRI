#include <stdio.h>
int main()
{
    int N;
    printf("Masukan nilai N : ");
    scanf("%i", &N);
    if (N > 50)
    {
        N = N - 25;
        N = N + 10;
        printf("\n(N - 25) + 10 = %i",N);
    }
    else
    {
        N = N + 10;
        printf("\nN + 10 = %i",N);;
    }
    return 0;
}