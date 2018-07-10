#include <stdio.h>

int main() {

    int a = 1026;
    int *p;
    p = &a;

    printf("size of int is %d bytes\n", sizeof(int));
    printf("address = %d, value = %d\n", p, *p);
    printf("address = %d, value = %d\n", (p+1), *(p + 1));

    char *p0;
    p0 = (char*)p; // typecasting
    printf("\nsize of char is %d bytes\n", sizeof(char));
    printf("address = %d, value = %d\n", p0, *p0);
    printf("address = %d, value = %d\n", (p0 + 1), *(p0 + 1));
    // 1026 = 00000000 00000000 00000100 00000010


    // void pointer
    void *p1;
    p1 = p;
    printf("\naddress = %d\n", p1);
}
