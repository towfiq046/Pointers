#include <iostream>
using namespace std;

int mani() {

    // c style code.
    int a, *p;
    p = (int*)malloc(sizeof(int));    // int typecast for malloc returns void pointer.

    *p = 10;     // (de)reference is the only way to access the memory in heap.
    free(p);     // must.


    // pointing at a different place in heap.
    p = (int*)malloc(sizeof(int)); // i want sizeof int like space
    p* = 20;

    p = (int*)malloc(20*sizeof(int));    // for array.
    free(p);


    // c++ style.

    int a, *p;
    p = new int;
    *p = 10;
    delete p;

    // for array.
    p = new int[20];
    *p = 2;             |
    *(p + 1) = 5;       | same.
    p[2] = 9;           |
    delete[] p;

}
