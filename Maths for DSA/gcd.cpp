# include <iostream> 
# include <algorithm> // For __gcd function

using namespace std;

// GCD using brute force method
int gcd(int a, int b) {
    int result = 1;
    for (int i = 1; i <= min(a, b); i++) { 
        if (a % i == 0 && b % i == 0) { 
            result = i; 
        }
    }
    return result; 
}

// GCD using Euclidean algorithm
int gcd_using_EA(int a, int b) {
    while (a > 0 && b > 0) {
        if (a > b) {
            a = a % b; 
        } else {
            b = b % a; 
        }
    }
    if (a == 0) {
        return b; 
    } else {
        return a; 
    }
}

int main()
{
    int a, b;
    cout << "Enter a :";
    cin >> a;
    cout << "Enter b :";   
    cin >> b;
    cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b) << endl;
    cout << "GCD of " << a << " and " << b << " using Euclidean algorithm is: " << gcd_using_EA(a, b) << endl;
    cout << "GCD of " << a << " and " << b << " using STL is: " << __gcd(a, b) << endl; // C++ STL function for GCD
    return 0;
}