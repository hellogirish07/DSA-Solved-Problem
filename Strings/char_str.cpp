# include <iostream>    
# include <cstring>
using namespace std;

int main()
{
    // Character array
    char str1[20] = "Hello World!";

    // String literal
    char str2[] = "Hello Girish!";

    // String length
    cout << "Length of str1: " << strlen(str1) << endl; // 12
    cout << "Length of str2: " << strlen(str2) << endl; // 12

    // Print strings
    cout << "str1: " << str1 << endl; // Hello World!
    cout << "str2: " << str2 << endl; // Hello World!

    // String by user
    cout << "Enter string: ";
    char str3[20];
    // cin >> str3; // Input string
    cin.getline(str3, 20); // Input string with spaces
    cout << "str3: " << str3 << endl;
    return 0;
}