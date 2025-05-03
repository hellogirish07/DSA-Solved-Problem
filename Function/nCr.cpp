#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i; 
    }
    return fact;
}

int nCr(int n, int r)
{
    if (r > n)
        return 0;

    if (r == 0 || r == n)
        return 1; 

    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_n_r = factorial(n - r);

    return fact_n / (fact_r * fact_n_r);
}

int main()
{
    int n, r;

    cout << "Enter value of n: ";
    cin >> n;

    cout << "Enter value of r: ";
    cin >> r;

    if (n < 0 || r < 0)
    {
        cout << "n and r should be non-negative!" << endl;
    }
    else
    {
        cout << "C(" << n << ", " << r << ") = " << nCr(n, r) << endl;
    }

    return 0;
}
