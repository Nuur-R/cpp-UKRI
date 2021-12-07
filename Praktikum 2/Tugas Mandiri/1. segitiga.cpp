/*
Diketahui sebuah segitiga memiliki panjang alas = 8 cm dan tinggi = 5 cm. 
Buatlah sebuah program dalam Bahasa C untuk menghitung dan menampilkan luas dari segitiga tersebut!
*/

#include "stdio.h"
void Luas_Segitiga(float P, float T){
    float luas_segitiga;
    luas_segitiga = 0.5*P*T;
    printf("%f",luas_segitiga);
}

int main()
{
    printf("Luas Segitiga adalah : ");
    Luas_Segitiga(8,5);
    printf("cm2");
}