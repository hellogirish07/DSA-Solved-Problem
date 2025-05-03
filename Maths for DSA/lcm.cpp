# include <iostream> 

using namespace std;

// gcd 
int gcd(int a, int b) {
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

// lcm
int lcm(int a, int b) {
    return (a * b) / gcd(a, b); // LCM formula
}

int main()
{
    int a, b;
    cout << "Enter a :";
    cin >> a;
    cout << "Enter b :";   
    cin >> b;
    cout << "LCM of " << a << " and " << b << " is: " << lcm(a, b) << endl; 
    return 0;
}