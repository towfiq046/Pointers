#include <stdio.h>
#include <stdlib.h>

int add(int *a, int *b) {   // called function.
    // a and b are pointer to integers local to add.
    printf("address of 'a' in add = %d\n\n", &a);
    printf("value in 'a' of add (address of 'a' in main) = %d\n\n", a);
    printf("value at address stored in 'a' of add = %d\n\n", *a);
    int c = (*a) + (*b);
    return c;
}

int main() {     // calling function.
    int a = 2, b = 4, c;
    printf("address of 'a' in main = %d\n\n", &a);   // just to show this a is different.

    // call by reference.
    c = add(&a, &b);      // value in a, b of main is copied to a, b of add.
    printf("result is = %d\n", c);
}
