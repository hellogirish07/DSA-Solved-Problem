# include <iostream> 
# include <cstring>
# include <algorithm>
using namespace std;

int main()
{
    string str = "Hello World!"; // String object
    string str2 = "Hello Girish!"; // String object

    // // String length
    // cout << "Length of str: " << str.length() << endl; // 12
    // cout << "Length of str2: " << str2.length() << endl; // 12

    // // Print strings
    // cout << "str: " << str << endl; // Hello World!
    // cout << "str2: " << str2 << endl; // Hello World!

    // String by user
    // cout << "Entetr string: ";
    // string str3;
    // // cin >> str3; // Input string
    // getline(cin, str3); // Input string with spaces
    // cout << "str3: " << str3 << endl; 
    
    // String concatenation
    string str4 = str + " " + str2; // Concatenate strings
    cout << "str4: " << str4 << endl; // Hello World! Hello Girish! 

    // Compaire 
    cout << (str == str2) << endl; // 0 (false)
    cout << (str != str2) << endl; // 1 (true)
    cout << (str < str2) << endl; // 1 (true)
    cout << (str > str2) << endl; // 0 (false)
    cout << (str <= str2) << endl; // 1 (true)
    cout << (str >= str2) << endl; // 0 (false)

    // reverse string
    string str5 = "Hello World!"; 
    string str6 = "Hello World!"; 

    // using STL function : reverse()
    reverse(str5.begin(), str5.end());
    cout << "Reversed string: " << str5 << endl; // !dlroW olleH

    // using while loop
    int st = 0, en = str5.length() - 1;
    while (st < en) {
        swap(str6[st], str6[en]);
        st++;
        en--;
    }
    cout << "Reversed string: " << str6 << endl; // !dlroW olleH
    return 0;
}