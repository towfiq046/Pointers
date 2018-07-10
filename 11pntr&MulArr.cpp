#include <iostream>
using namespace std;

void func(int a[]) // or *a  // argument: 1-D array of integers.
{

}

void func2(int b[][3])  // or (*b)[3]  // argument: 2-D array of integers.
{

}

void func3(int c[][2][2]) // or (*c)[2][2].
{

}




int main() {

    int c[3][2][2] = {
                        {{2, 5}, {7, 9}},
                        {{3, 4}, {6, 1}},
                        {{0, 8}, {11, 13}}
                    };
    int (*p)[2][2] = c; // valid.


    int a[] = {1, 2};
    int b[2][3] = {{2, 4, 6}, {5, 7, 8}};     // b returns int  (*)[3] (pointer to 1-D array of 3 integers.).

    cout << "c = " << c << "  *c = " << *c << "  c[0] = " << c[0] << "  &c[0][0] = " << &c[0][0] << endl << endl;
    cout << "*(c[0][1] + 1) = " << *(c[0][1] + 1) << " or c[0][1][1] = " << c[0][1][1] << endl << endl;
    cout << "*(c[1] + 1) = " << *(c[1] + 1) << "   or c[1][1] = " << c[1][1] << "   or &c[1][1][0] = " << &c[1][1][0] << endl;
}
