#include <stdio.h>

void incrementp(int *p) {
    *p = *p + 1;
    printf("address of variable *p in incrementp = %d\n", &*p);
}



void increment(int a) {

    a = a + 1;
    printf("address of variable a in increment = %d\n", &a);
}

int main() {
    int a;
    a = 10;
    //increment(a);
    printf("address of variable a in main = %d\n", &a);

    incrementp(&a);
    printf("a = %d\n", a);
}
