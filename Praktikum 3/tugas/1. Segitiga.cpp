#include <stdio.h>
#include <math.h>
#include <cmath>
int main()
{
    float alas, tinggi, sisi, luas, keliling;
 
    printf("Alas segitiga   : "); scanf("%f", &alas);
    printf("Tinggi segitiga : "); scanf("%f", &tinggi);
    luas = 0.5*alas*tinggi;

    float a2 = pow((alas/2), 2);
	float b2 = pow(tinggi, 2);
	sisi = sqrt(a2 + b2);
    keliling = alas + sisi + sisi;

    printf("\nLUAS dan KELILING Segitiga Sama Sisi");
    printf("\nLUAS = %f cm2", luas);
    printf("\nKELILING = %f cm", keliling);

    return 0;
}