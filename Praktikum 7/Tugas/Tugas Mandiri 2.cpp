// Dik : detik 1-10 kecepatan tetap 3m/det
//       detik 11-20 keceparan menjadi 4m/det.
//       setiap 10 detik kecepatan bertambah 1m/det.

// dit : susun program untuk mencapai jarak 100m.

#include <stdio.h>
main()
{
    int waktu, jarak, kecepatan, A;
    A = 1;
    kecepatan = 3;
    waktu = 1;
    jarak = 3;
    while (jarak < 100)
    {
        printf("%i = %im\n", waktu, jarak); 
        waktu++;
        jarak+=kecepatan;
        while (waktu == (A*10))
        {
            A++;
            kecepatan++;
            printf("keceptan laju menjadi %im/detik\n",kecepatan);
        }        
        if (jarak == 100)
        {
            printf("untuk mencapai jarak 100m kita memerlukan %i detik", waktu);
        }
    }
    
    return 0;
}
