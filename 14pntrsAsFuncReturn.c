#include <stdio.h>
#include <stdlib.h>

int add(int a, int b) {   // called function.
    printf("address of a in add = %d\n", &a)   // just to show this a is different.
    int c = a + b;
    return c;
}

int main() {     // calling function.
    int a = 2, b = 4, c;
    printf("address of a in add = %d\n", &a)   // just to show this a is different.

    // call by value.
    c = add(a, b);      // value in a, b of main is copied to a, b of add.
    printf("result is = %d", c);
}
