#include <iostream>
#include <string.h>
using namespace std;

void print(char c[]) {

    int i = 0;
    while(c[i] != '\0') { //c[i] same as *(c + i)
        cout << c[i];
        i++;
    }
    cout << endl;
}


int main() {

    char c[] = "john";
    //char c[] = {'j', 'o', 'h', 'n', '\0'};
    //c[0] = 'j';
    //c[1] = 'o';
    //c[2] = 'h';
    //c[3] = 'n';
    //c[4] = '\0';

    cout<< "size in bytes = " << sizeof(c) << endl << endl;
    //int len = strlen(c);
    //cout<< c << endl;
    //cout<< "length = " << len << endl;

    print(c);

}
