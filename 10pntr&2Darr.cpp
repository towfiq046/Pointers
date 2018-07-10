#include <iostream>
#include <stdio.h>
using namespace std;

int main() {

    int B[2][3] = {
        {2, 3, 6},
        {4, 5, 8}
    };

   // int *p = B;       // not valid.
    int (*p)[3] = B;    // valid. pointer to 1D array of 3 integers

    printf("B = %d or &B[0] = %d\n\n", B, &(B[0]));
    printf("*B = %d or B[0] = %d or &B[0][0] = %d\n\n", *B, B[0], &B[0][0]);
    printf("(B + 1) = %d or B[1] = %d\n\n", (B + 1), B[1]);
    printf("*(B + 1) = %d or B[1] = %d or &B[1][0] = %d\n\n", *(B + 1) ,B[1], &B[1][0]);
    printf("(*(B + 1) +2) = %d or (B[1] + 2) =%d or &(B[1][2]) = %d\n\n", (*(B + 1) +2), (B[1] + 2), &(B[1][2]));
    printf("*(*(B + 1) = %d\n\n", *(*(B + 1)));


}
