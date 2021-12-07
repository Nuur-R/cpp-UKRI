#include <stdio.h>
#include <string.h>
int main()
{
    char nim[100];
    char nama[100];
    int nilai;

    strcpy(nim, "141150123");
    strcpy(nama, "Achmad Solichin");
    nilai = 85;

    printf("NIM : %s", nim);
    printf("NAMA : %s", nama);
    printf("NILAI : %i", nilai);
    
    return 0;
}