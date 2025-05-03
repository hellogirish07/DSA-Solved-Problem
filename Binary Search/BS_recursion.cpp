#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binary_search(vector<int> arr, int tar, int st, int end) {
    if (st <= end) {
        int mid = st + (end - st)/2;

        if (tar > arr[mid] ) {
            return binary_search(arr, tar, mid + 1, end);
        }
        else if (tar < arr[mid]) {
            return binary_search(arr, tar, st, mid - 1);
        }
        else {
            return mid;
        }
    }
    return -1;
}

int main() {
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};
    int tar1 = 12;
    sort(arr1.begin(), arr1.end()); // Sort array if not sorted
    int result1 = binary_search(arr1, tar1, 0, arr1.size() - 1 );
    if (result1 != -1) {
        cout << "Target " << tar1 << " found at index: " << result1 << endl;
    }
    else {
        cout << "Target " << tar1 << " not found in array" << endl;
    }
    
    return 0;
}