#include <stdio.h>
#include <stdlib.h>

void printHelloWorld() {
    printf("hello world.");
}

int *add(int *a, int *b) {
    int c = (*a) + (*b);
    return &c;           // after execution in main, add() gets deallocated.
                          // reason-- in stack add() stays at top so it gets deallocated.
                          // can't return &c.
}

int main() {
    int a = 2, b = 4;

    int *pntr = add(&a, &b);

    printHelloWorld();

    printf("result is = %d\n", *pntr);
}
