// // A
// #include <stdio.h>
// main()
// {
//     int I, N;
//     I = 1;
//     N = 1;
//     while (I <= 10){
//         printf("%4i", N);
//         N = N+2;
//         I++;
//     }
//     return 0;
// }


// // B
// #include <stdio.h>
// main()
// {
//     int I, N;
//     I = 1;
//     while (I <= 10){
//         N = 10*I;
//         printf("%4i", N);
//         I++;
//     }
//     return 0;
// }


// // C
// #include <stdio.h>
// main()
// {
//     int I, N, S;
//     I = 1;
//     S = 0;
//     while (I <= 10){
//         N = 100-S;
//         printf("%4i", N);
//         S+=5;
//         I++;
//     }
//     return 0;
// }


// D
#include <stdio.h>
#include <math.h>
main()
{
    int I, N;
    I = 1;
    while (I <= 10){
        N = pow(2,I);
        printf("%4i", N);
        I++;
    }
    return 0;
}