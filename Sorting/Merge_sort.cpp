# include <iostream> 
# include <vector>
using namespace std;

void merge(vector<int>& arr, int st, int mid, int end) {
    vector<int> temp;
    int i = st, j = mid + 1;    

    while (i <= mid && j <= end) {
        // if (arr[i] >= arr[j]) (this is for descending order)
        if (arr[i] <= arr[j]) { // for ascending order
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    // Left Half
    while (i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }

    // Right Half
    while (j <= end) {
        temp.push_back(arr[j]);
        j++;
    }

    // Copy the sorted elements back to the original array
    for(int idx = st; idx <= end; idx++) {
        arr[idx] = temp[idx - st]; 
    }
}

void merge_sort(vector<int>& arr, int st, int end) {
    if (st < end) {
        int mid = (st + end) / 2; // Find the middle point
        merge_sort(arr, st, mid); // Sort the Left half
        merge_sort(arr, mid + 1, end); // Sort the Right half
        merge(arr, st, mid, end); // Merge the sorted halves
    }
}

int peint(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};

    cout << "Unsorted array: ";
    peint(arr.data(), arr.size());
    
    merge_sort(arr, 0, arr.size() - 1);
    
    cout << "Sorted array: ";
    peint(arr.data(), arr.size());
    
    cout << endl;
    return 0;
}