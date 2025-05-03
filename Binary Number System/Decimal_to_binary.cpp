#include <iostream>
using namespace std;

int main()
{
    int ans = 0;
    int pow = 1;
    int dec, originalDec;

    cout << "Enter a number: ";
    cin >> dec;

    originalDec = dec;

    while (dec > 0)
    {
        int rem = dec % 2;  // Get remainder (binary digit)
        dec = dec / 2;      // Reduce the number

        ans += (rem * pow); // Form binary number
        pow *= 10;          // Shift left in binary
    }

    cout << "Decimal : " << originalDec << endl;
    cout << "Binary : " << ans << endl;

    return 0;
}
