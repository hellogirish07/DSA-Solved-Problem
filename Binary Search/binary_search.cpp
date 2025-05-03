# include <iostream> 
# include <vector>
# include <algorithm>
using namespace std;

int binary_search(vector<int> arr, int tar) {
    int st = 0, end = arr.size() - 1;

    while (st <= end) {
        // int mid = (st + end) / 2;  

        // if st and end = INT_MAX
        // In this case, if the array is large, it may overflow. 
        // So, we use the optimized way to calculate the mid.
        
        // this is the same as (st + end) / 2 
        int mid = st + (end - st) / 2;  // (Optimized) 

        if (arr[mid] > tar) {
             end = mid - 1; // Move to the left half
        }
        else if (arr[mid] < tar) {
            st = mid + 1; // Move to the right half
        }
        else {
           return mid;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};
    int tar1 = 12;
    sort(arr1.begin(), arr1.end()); // Sort array if not sorted
    int result1 = binary_search(arr1, tar1);
    if (result1 != -1) {
        cout << "Target " << tar1 << " found at index: " << result1 << endl;
    }
    else {
        cout << "Target " << tar1 << " not found in array" << endl;
    }
    
    return 0;
}