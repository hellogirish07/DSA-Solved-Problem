# include <iostream> 

using namespace std;

string isPrime(int n)
{
    if (n <= 1) return "Not Prime Number";
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0) return "Not Prime Number";
    }
    return "Prime Number";
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    string result = isPrime(n);
    cout << n << " is " << result << endl;
    return 0;
}