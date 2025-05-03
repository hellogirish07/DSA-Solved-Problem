#include <iostream>
#include <climits>
using namespace std;

int maxSubArraySum(int arr[], int size) {
    int maxSum = INT_MIN;
    int currSum = 0;

    for (int i = 0; i < size; i++) {
        currSum += arr[i];

        if (currSum > maxSum) {
            maxSum = currSum; // Update maxSum
        }

        if (currSum < 0) {
            currSum = 0; // Reset currSum if it's negative
        }
    }

    return maxSum;
}

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Max Sum of Subarray: " << maxSubArraySum(arr, size) << endl;

    return 0;
}