#include <stdio.h>
int main()
{
    int bilangan;
    printf("Masukan bilangan : ");
    scanf("%i", &bilangan);
    if (bilangan%2==0)
    {
        printf("%i adalah biangan GENAP", bilangan);
    }
    else
    {
        printf("%i adalah biangan GANJIL", bilangan);
    }
    return 0;
}