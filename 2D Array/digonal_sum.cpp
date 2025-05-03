#include <iostream>
using namespace std;

template <size_t N>
int getDiagonalSum(int (&arr)[N][N])
{
    int diagonalSum = 0;
    // for (int i = 0; i < N; i++)
    // {
    //     for (int j = 0; j < N; j++)
    //     {
    //         if (i == j || j == N - 1 - i)
    //         {
    //             diagonalSum += arr[i][j];
    //         }
    //     }
    // }

    // optimal solution
    for (int i = 0; i < N; i++)
    {
        diagonalSum += arr[i][i];

        if (i != N - 1 - i) {
            diagonalSum += arr[i][N - 1 - i];
        }
    }
    return diagonalSum;
}

int main()
{
    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};
    cout << "The diagonal sum for 3x3 matrix is: " << getDiagonalSum(arr) << endl;

    int arr2[4][4] = {{1, 2, 3, 4},
                      {5, 6, 7, 8},
                      {9, 10, 11, 12},
                      {13, 14, 15, 16}};
    cout << "The diagonal sum for 4x4 matrix is: " << getDiagonalSum(arr2) << endl;

    return 0;
}
