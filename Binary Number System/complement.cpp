#include <iostream>
#include <string>

using namespace std;

// Function to compute 1's complement
string onesComplement(string bin)
{
    for (char &ch : bin)
    {
        ch = (ch == '0') ? '1' : '0';
    }
    return bin;
}

// Function to compute 2's complement
string twosComplement(string bin)
{
    string onesComp = onesComplement(bin);
    int carry = 1;

    // Adding 1 to the one's complement
    for (int i = bin.length() - 1; i >= 0; i--)
    {
        if (onesComp[i] == '1' && carry == 1)
        {
            onesComp[i] = '0'; // 1 + 1 = 10 (0 carry 1)
        }
        else if (onesComp[i] == '0' && carry == 1)
        {
            onesComp[i] = '1'; // 0 + 1 = 1 (carry becomes 0)
            carry = 0;
        }
    }

    // If carry remains, add an extra bit
    if (carry == 1)
    {
        onesComp = "1" + onesComp;
    }

    return onesComp;
}

int main()
{
    string binNum;
    cout << "Enter a binary number: ";
    cin >> binNum;

    // Check if negative (in two's complement form)
    bool isNegative = (binNum[0] == '1');

    string onesComp = onesComplement(binNum);
    string twosComp = twosComplement(binNum);

    cout << "1's Complement: " << onesComp << endl;
    cout << "2's Complement: " << twosComp << endl;

    return 0;
}
