#include <stdio.h>
main()
{
    int masuk,pulang,jam_pulang;
    printf("Masukan jam kerja anda denan angka 1 - 12\n\n");
    printf("Masukan jam masuk  : ");     scanf("%i", &masuk);
    printf("Masukan jam pulang : ");     scanf("%i", &pulang);
    printf("lama bekerja anda ");
    if(masuk >= pulang)
    {
        jam_pulang = (pulang + 12) - masuk;
        printf("%i",jam_pulang);
    }
    else 
    {
        jam_pulang =  pulang - masuk;
        printf("%i",jam_pulang);
    }
    printf(" jam.");
    return 0;
}