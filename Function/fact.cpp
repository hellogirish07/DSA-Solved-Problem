# include <iostream> 

using namespace std;

int factorial(int n)
{
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    cout << factorial(5) << endl;
    cout << factorial(6) << endl;
    return 0;
}