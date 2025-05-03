# include <iostream> 
# include <algorithm>
# include <vector>
using namespace std;

int binSearch(vector<int>& arr, int tar, int st, int end) {
    if (st <= end) {
        int mid = st + (end - st) / 2;
        if (arr[mid] == tar) {
            return mid;
        } else if (arr[mid] <= tar) {
            return binSearch(arr, tar, mid+1, end);
        } else {
            return binSearch(arr, tar, st, mid-1);
        }
    }
    return -1;
}

int search(vector<int>& arr, int tar) {
    return binSearch(arr, tar, 0, arr.size() - 1);
}

int main()
{
    vector<int> arr = {1, 3, 5, 7, 9, 11, 13, 15};
    int target = 7;

    int result = search(arr, target);
    if (result != -1) {
        cout << "Target found " << endl;
    } else {
        cout << "Target not found" << endl;
    }
    return 0;
}