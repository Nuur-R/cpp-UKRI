#include <stdio.h>
int main()
{
    int N;
    printf("Masukan bilangan : ");
    scanf("%i", &N);
    if (N %2==0)
    {
        printf("\nGENAP");
    }
    else
    {
        printf("\nGANJIL");
    }
    return 0;
}