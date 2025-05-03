#include <iostream>
using namespace std;

void chnageA(int * ptr) {
    *ptr = 69;
}

int main() {
    int a = 5;
    chnageA(&a);
    cout << a << endl;
}
