#include <iostream>
#include <vector>
using namespace std;

int merge(vector<int> &arr, int st, int mid, int end) {
    vector<int> temp;
    int i = st;
    int j = mid + 1;
    int invCount = 0;

    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        } else {
            for (int k = i; k <= mid; k++) {
                cout << "Inversion pair: (" << arr[k] << ", " << arr[j] << ")" << endl;
            }
            temp.push_back(arr[j]);
            j++;
            invCount += (mid - i + 1);
        }
    }

    while (i <= mid) {
        temp.push_back(arr[i]);
        i++;
    } 

    while (j <= end) {
        temp.push_back(arr[j]);
        j++;
    } 

    for (int idx = 0; idx < temp.size(); idx++) {
        arr[st + idx] = temp[idx];
    }

    return invCount;
}

int mergeSort(vector<int> &arr, int st, int end) {
    if (st < end) {
        int mid = st + (end - st) / 2;
        int leftInvCount = mergeSort(arr, st, mid);
        int rightInvCount = mergeSort(arr, mid + 1, end);
        int invCount = merge(arr, st, mid, end);

        return leftInvCount + rightInvCount + invCount;
    }
    return 0;
}

int main() {
    vector<int> arr = {6, 3, 5, 2, 7};

    int ans = mergeSort(arr, 0, arr.size() - 1);
    cout << "Inversion Count: " << ans << endl;

    return 0;
}
