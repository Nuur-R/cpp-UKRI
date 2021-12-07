#include "stdio.h"
#define PHI 3.14

void Luas_Lingkaran(float r){
    float luas;
    luas = PHI*r*r;
    printf("%f",luas);
}

int main()
{
    printf("Luas Lingkaran adalah ");
    Luas_Lingkaran(3);
    printf("cm2");
}