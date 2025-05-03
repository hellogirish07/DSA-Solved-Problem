#include <iostream>
#include <climits>  // For INT_MAX and INT_MIN

using namespace std;

int string_to_int(string str) {
    long long int num = 0; 
    int sign = 1;
    int i = 0;

    // Remove spaces
    while (i < str.length() && str[i] == ' ') {
        i++;
    }

    // contol sign
    if (i < str.length() && (str[i] == '-' || str[i] == '+')) {
        if (str[i] == '-') {
            sign = -1;
        } else {
            sign = 1;
        }
        i++;
    }

    // main logic to convert string to integer
    while (i < str.length() && str[i] >= '0' && str[i] <= '9') {
        int digit = str[i] - '0';
        num = num * 10 + digit;

        // Overflow check
        if (num > INT_MAX) {
            if (sign == -1) {
                return INT_MIN;
            } else {
                return INT_MAX;
            }
        }
        i++;
    }

    return sign * num;
}

// Driver Code
int main() {
    string str;
    cout << "Enter a number string: ";
    cin >> str;

    int result = string_to_int(str);
    cout << "Converted integer: " << result << endl;

    return 0;
}
