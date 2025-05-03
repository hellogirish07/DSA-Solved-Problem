#include <iostream>
#include <utility> // For std::pair
using namespace std;

pair<int, int> linear_search(int arr[][3], int rows, int cols, int target)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == target)
            {
                return {i, j}; // Return the pair of indices
            }
        }
    }
    return {-1, -1}; // Return {-1, -1} if target is not found
}

int main()
{
    int rows = 3, cols = 3;
    int arr[3][3];

    cout << "Enter elements of the 3x3 array:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    int target;
    cout << "Enter the target value: ";
    cin >> target;

    pair<int, int> result = linear_search(arr, rows, cols, target);
    if (result.first != -1)
    {
        cout << "Target found at index: (" << result.first << ", " << result.second << ")" << endl;
    }
    else
    {
        cout << "Target not found." << endl;
    }

    return 0;
}