#include <stdio.h>
main()
{
    int A, B, C;
    printf("Input 3 buah bilangan\n");
    printf("Bilangan 1: ");
    scanf("%i", &A);
    printf("Bilangan 2: ");
    scanf("%i", &B);
    printf("Bilangan 3: ");
    scanf("%i", &C);
    
    if (A>B && A>B)
    {
        printf("Bilangan A adalah : ");
        printf("%i", &A);
    }
    else if (B>A && B>C)
    {
        printf("Bilangan B adalah : ");
        printf("%i", &B);
    }
    else if(C>A && C>B)
    {
        printf("Bilangan C adalah : ");
        printf("%i", &C);
    }

    return 0;
}