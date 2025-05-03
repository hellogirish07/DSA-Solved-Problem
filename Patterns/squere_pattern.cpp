#include <iostream>

using namespace std;

int main()
{
    // int num = 5;
    // for (int i = 0; i < num; i++)
    // {
    //     char ch = 'A';
    //     for (int j = 0; j < num; j++)
    //     {
    //         // cout << j << " ";
    //         // cout << "* ";
    //         cout << ch << " ";
    //         ch = ch + 1;
    //     }
    //     cout << endl;
    // }
    // return 0;


    int n = 5;
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}