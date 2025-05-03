# include <iostream> 
# include <vector>
using namespace std;

int partition(vector<int> &arr, int st, int end) {
    int idx = st - 1;
    int pivot = arr[end]; // Choosing the last element as pivot

    for (int j = st; j < end; j++) {
        // if (arr[j] >= pivot) { // For descending order
        if (arr[j] <= pivot) { // For ascending order
            idx++;
            swap(arr[idx], arr[j]); // Swap if element is smaller than or equal to pivot
        }
    }

    idx++;
    swap(arr[idx], arr[end]); // Place the pivot in the correct position
    return idx; // Return the index of the pivot
}

void quickSort(vector<int> &arr, int st, int end) {
    if (st < end) {
        int pivIdx = partition(arr, st, end); // Partitioning index 
        quickSort(arr, st, pivIdx - 1); // Left of pivot  
        quickSort(arr, pivIdx + 1, end); // Right of pivot 
    }
}

int print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};
    cout << "Unsorted array: ";
    print(arr.data(), arr.size());

    quickSort(arr, 0, arr.size() - 1);
    
    cout << "Sorted array: ";
    print(arr.data(), arr.size());
    return 0;
}