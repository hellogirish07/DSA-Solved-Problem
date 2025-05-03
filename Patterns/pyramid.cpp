#include <iostream>
using namespace std;

int main() {
    int n = 4; // Number of rows

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 0; j < n - i; j++) {
            cout << "  ";
        }

        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        // Print decreasing numbers
        for (int j = i - 1; j >= 1; j--) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}
