#include <stdio.h>
#include <stdlib.h>

void printHelloWorld() {
    printf("hello world.\n\n");
}

int *add(int *a, int *b) {

    // allocating memory from heap. prob solved.
    int *c = (int*)malloc(sizeof(int));
    *c = (*a) + (*b);
    return c;           // &c doesn't work.

}

int main() {
    int a = 2, b = 4;

    int *pntr = add(&a, &b);

    printHelloWorld();

    printf("result is = %d\n", *pntr);
}
