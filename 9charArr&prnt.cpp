#include <iostream>
using namespace std;

void print(const char *c) {  // c[] same as *c

    //c[0] = 'A';  // const char so getting a compile time error  (no modification)

    while(*c != '\0') { //c[i] same as *(c + i)
        cout << *c;
        c++;
    }
    cout << endl;
}


int main() {

    char c[20] = "hello";   // string gets stored in the space  for array
    //char *c = "hello";       // string gets stored as compile time constant (cant be modified)
    print(c);

}

