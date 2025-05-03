# include <iostream> 
# include <climits>
using namespace std;

int getMaxSum(int arr[3][3], int rows, int cols) {
    int maxColSum = INT_MIN;

    for (int col = 0; col < cols; col++) {
        int colSum = 0;
        for (int row = 0; row < rows; row++) {
            colSum += arr[row][col];
        }
        maxColSum = max(maxColSum, colSum);
    }

    return maxColSum;
}

int main() {
    int rows = 3, cols = 3;
    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};

    cout << "The maximum Col sum is: " << getMaxSum(arr, rows, cols) << endl;
    return 0;
}