#include <stdio.h>
#include <math.h>
#include <cmath>
int main()
{
    float Alas, Tinggi, Miring;
 
    printf("Alas segitiga   : "); scanf("%f", &Alas);
    printf("Tinggi segitiga : "); scanf("%f", &Tinggi);
   
    float a2 = pow(Alas, 2);
	float b2 = pow(Tinggi, 2);
	Miring = sqrt(a2 + b2);
    
    printf("\nSisi dari Segitiga adalah :");
    printf("\nAlas    = %f cm", Alas);
    printf("\nTinggi  = %f cm", Tinggi);
	printf("\nMiring  = %f cm", Miring);
    return 0;
}