# include <iostream> 

using namespace std;

// Function to check if a number is an Armstrong number
bool isArmstrong(int n) {
    int orignal = n;
    int sum = 0;

    while (n > 0) {
        int digit = n % 10; // Get the last digit
        sum += digit * digit * digit; // Add the cube of the digit to sum
        n /= 10; // Remove the last digit
    }
    return sum == orignal; 
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isArmstrong(n)) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }
    return 0;
}