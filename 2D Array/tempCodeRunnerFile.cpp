#include <iostream>

using namespace std;

int getDiagonalSum(int arr[][100], int rows, int cols)
{
    int diagonalSum = 0;
    for (int i = 0; i < rows; i++)
    {
        diagonalSum += arr[i][i]; // Sum of primary diagonal
    }
    return diagonalSum;
}

int main()
{
    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};

    cout << "The diagonal sum is: " << getDiagonalSum(arr, 3, 3) << endl;
    int arr2[4][4] = {{1, 2, 3, 4},
                      {5, 6, 7, 8},
                      {9, 10, 11, 12},
                      {13, 14, 15, 16}};

    cout << "The diagonal sum is: " << getDiagonalSum(arr2, 4, 4) << endl; // Fixed to use arr2
    return 0;
}