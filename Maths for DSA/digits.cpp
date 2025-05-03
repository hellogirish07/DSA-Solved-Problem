# include <iostream> 

using namespace std;

// Print Digits of a number
void printDigits(int n)
{
    while (n != 0)
    {
        int digit = n % 10; // Get the last digit
        cout << digit << " "; // Print the digit
        n = n / 10; // Remove the last digit
    }
    cout << endl;
}

// Count the number of digits in a number
int countDigits(int n)
{
    int count = 0;
    while (n != 0)
    {
        count++; // Increment the count
        int digit = n % 10; 
        n = n / 10; 
    }
    cout << count << endl;
}

// sum of digits of a number
int sumDigits(int n)
{
    int sum = 0;
    while (n != 0)
    {
        int digit = n % 10; 
        sum += digit; // Add the digit to the sum
        n = n / 10; 
    }
    cout << sum << endl;
}

int main()
{
    int n = 12345; 
    cout << "Digits of " << n << " are: ";
    printDigits(n);

    cout << "Number of digits in " << n << " is: " ;
    countDigits(n);

    cout << "Sum of digits in " << n << " is: " ;
    sumDigits(n);
    return 0;
}