#include <iostream>
using namespace std;

int main()
{
    // 2D Array
    int rows = 3, cols = 3;
    // int arr[3][3] = {{1, 2, 3},
    //                  {4, 5, 6},
    //                  {7, 8, 9}};

    int arr2[3][3];
    // input by user
    cout << "Enter 9 elements for 3x3 array: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr2[i][j];
        }
    }

    // print arr
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
}