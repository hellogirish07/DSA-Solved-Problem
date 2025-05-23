# include <iostream> 

using namespace std;

int fib(int n)
{
    if (n == 1 || n == 0)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Fibonacci series: ";
    for (int i = 0; i < n; i++) {
        cout << fib(i) << " ";
    }
    cout << endl;
    if (n > 0) {
        cout << "The " << n << "th Fibonacci number is: " << fib(n - 1) << endl;
    }
}