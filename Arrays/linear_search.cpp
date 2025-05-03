#include <iostream>

using namespace std;

int linear_search(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  // Target mil gaya 
        }
    }
    return -1;  // Target nahi mila 
}

int main() {
    int size;
    
    cout << "Array ki size batao : ";
    cin >> size;

    int arr[size];  

    cout << "Ab " << size << " elements daalo : ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Target value batao (Jise search karna he) : ";
    cin >> target;

    int result = linear_search(arr, size, target);

    if (result != -1) {
        cout << "Target " << target << " index [" << result<< "] par mil gya. "  << endl;
    } else {
        cout << "Target " << target << " array me nahi mila." << endl;
    }

    return 0;
}
