# include <iostream>
# include <climits>

using namespace std;

int getMaxSum(int arr[3][3], int rows, int cols) {
    int maxRowSum = INT_MIN;

    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += arr[i][j];
        }

        maxRowSum = max(maxRowSum, rowSum);
    }
    return maxRowSum;
}

int main() {
    int rows = 3, cols = 3;
    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};

    cout << "The maximum row sum is: " << getMaxSum(arr, rows, cols) << endl;
    return 0;
}