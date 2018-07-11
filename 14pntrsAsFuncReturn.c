#include <stdio.h>
#include <stdlib.h>

int add(int a, int b) {
    int c = a + b;
    return c;
}

int main() {
    int a = 2, b = 4, c;
    c = add(a, b);
    printf("result is = %d", c);
}
