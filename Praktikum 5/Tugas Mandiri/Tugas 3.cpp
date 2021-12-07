#include <stdio.h>
main()
{
    int masuk,pulang,total_waktu,biaya, biaya_lebih;
    printf("Masukan waktu parkir anda dengan angka 1 - 12\n\n");
    printf("Masukan jam masuk       : ");     scanf("%i", &masuk);
    printf("Masukan jam keluar      : ");     scanf("%i", &pulang);
    printf("\n\n");
    printf("Anda parkir selama ");
    if(masuk >= pulang)
    {
        total_waktu = (pulang + 12) - masuk;
        printf("%i",total_waktu);
        printf(" jam\n");
        if (total_waktu >= 2)
        {
            biaya_lebih = 2000 + ((total_waktu-2)*500);
            printf("Biaya parkir anda sebesar Rp ");
            printf("%i", biaya_lebih);
        
        }
        else
        {
            printf("Biaya parkir anda sebesar Rp 2000");
        }
    }
    else 
    {
        total_waktu =  pulang - masuk;
        printf("%i",total_waktu);
        printf(" jam");
        if (total_waktu >= 2)
        {
            biaya_lebih = 2000 + ((total_waktu-2)*500);
            printf("Biaya parkir anda sebesar Rp ");
            printf("%i", biaya_lebih);
        
        }
        else
        {
            printf("Biaya parkir anda sebesar Rp 2000");
        }
    }
    printf(" jam.");
    return 0;
}