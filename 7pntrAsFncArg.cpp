#include <iostream>
using namespace std;

int sumOfElements(int A[], int size) { // int *A or int A[]  ..same..

    int i, sum = 0;

    cout<< "SOE - size of A = " << sizeof(A) << " || size of A[0] = " << sizeof(A[0]) << endl << endl;

    for(i = 0; i < size; i++) {
        sum += A[i]; // A[i] is *(A + i)
    }
    return sum;
}


int main() {

    int A[] = {1, 2, 3, 4, 5};
    int size = sizeof(A) / sizeof(A[0]);
    int total = sumOfElements(A, size); // A can be used for &A[0]

    cout<< "sum of elements = " << total << endl << endl;
    cout<< "main - size of A = " << sizeof(A) << " || size of A[0] = " << sizeof(A[0]) << endl;
}
