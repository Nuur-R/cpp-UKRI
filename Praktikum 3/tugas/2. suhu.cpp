#include <stdio.h>
int main()
{
    int C;
    float F, R;

    printf("Input nilai suhu dalan Celcius : ");
    scanf("%i", &C);
 
    F = C+273.15;
    R = C*0.8;
    
    printf("\nSuhu dalam F : %.2f fahrenheit", F);
    printf("\nSuhu dalam R : %.3f reamur", R);

    return 0;
}