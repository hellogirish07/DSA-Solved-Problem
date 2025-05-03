#include <iostream>
#include <vector>
#include <climits>
using namespace std;

bool isPossible(vector<int> &arr, int n, int m, int maxAllocatedTime) {
    int painters = 1, time = 0;

    for (int i = 0; i < n; i++) {
        if (time + arr[i] <= maxAllocatedTime) {
            time += arr[i]; // Add board length to current painter's time
        } else {
            painters++; // Need a new painter
            time = arr[i]; // Start new painter with current board
        }

        if (painters > m) return false; // More painters needed than available
    }

    return true; // The given `maxAllocatedTime` works
}

int minTimeToPaint(vector<int> &arr, int n, int m) {
    if (m > n) return -1; // If painters are more than boards, return -1

    int sum = 0, maxVal = INT_MIN;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        maxVal = max(maxVal, arr[i]);
    }

    int st = maxVal, end = sum, ans = -1;

    while (st <= end) {
        int mid = st + (end - st) / 2;
        if (isPossible(arr, n, m, mid)) {
            ans = mid;      // Store potential answer
            end = mid - 1;  // Try to minimize
        } else {
            st = mid + 1;   // Increase the allowed time
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {40, 30, 10, 20};
    int n = arr.size(), m = 2;

    cout << minTimeToPaint(arr, n, m) << endl;
    cout << "Shhhh.... Answer galat aane par koi kuch nahi bolega ... ";
    return 0;
}
