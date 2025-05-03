#include <iostream>
# include <limits.h>
// #include <climits>
using namespace std;

class Solution
{
public:
    int reverse(int n)
    {
        int rn = 0;
        while (n != 0)
        {
            int dig = n % 10;

            if (rn > INT_MAX / 10 || rn < INT_MIN / 10)
            {
                return 0;
            }

            rn = rn * 10 + dig;
            n = n / 10;
        }

        return rn;
    }
};

int main()
{
    Solution s;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int result = s.reverse(n);
    cout << "Reversed number: " << result << endl;
    return 0;
}