// Sorting array using 0s, 1s, 2s 

# include <iostream> 
# include <vector>
# include <algorithm>
using namespace std;

void sort_arr(vector<int> &arr) {
    int n = arr.size();

    int count0 = 0, count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            count0++;
        } else if (arr[i] == 1) {
            count1++;
        } else {
            count2++;
        }
    }

    // Fill the array with 0s, 1s, and 2s in the correct positions
    for (int i = 0; i < count0; i++) {
        arr[i] = 0;
    }
    for (int i = count0; i < count0 + count1; i++) {
        arr[i] = 1;
    }
    for (int i = count0 + count1; i < n; i++) {
        arr[i] = 2;
    }
}

void print_arr(vector<int> &arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};
    
    cout << "Original array: ";
    print_arr(arr);

    sort_arr(arr);

    cout << "Sorted array: ";
    print_arr(arr);

    return 0;

    // Using inbuilt sort function - Easy method
    // sort(arr.begin(), arr.end());
    // for (int i = 0; i < arr.size(); i++) {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
}