# include <iostream> 

using namespace std;

int digit_sum(int num)
{
    int sum = 0;
    int last_digit;
    while(num > 0)
    {
        last_digit = num % 10;
        num = num / 10;
        sum += last_digit;
    }
    return sum;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The sum of the digits of " << num << " is " << digit_sum(num) << endl;
    return 0;
}