/*
Diketahui sebuah segitiga siku-siku dengan panjang sisi alas 4 cm dan sisi tinggi 5 cm. 
Dengan menggunakan rumus Phitagoras, buatlah sebuah program Bahasa C untuk menghitung sisi miring segitiga tersebut dan menampilkannya di layar!
*/

#include "stdio.h"
#define PHI 3.14
void volume_bola(float D){
    float R = D/2;
    float volume_bola;
    volume_bola = 4/3*PHI*R*R*R;
    printf("%f",volume_bola);
}

int main()
{
    printf("volume bola : ");
    float diameter = 15;
    volume_bola(diameter);
    printf("cm3");
}