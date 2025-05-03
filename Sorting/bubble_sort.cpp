# include <iostream> 
# include <algorithm>
using namespace std;

void bubbleSort(int arr[], int n) {

    bool isSwap = false;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }

        if (!isSwap) {
            return;
        }
    }
} 

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " " ;
    }
    cout << endl;
}

int main()
{
    int n = 5;
    int arr[] = {1, 4, 2, 5, 3};    

    cout << "Array before Sort : ", printArray(arr, n) ; 
    bubbleSort(arr, n);
    cout << "Array after Sort : ", printArray(arr, n) ; 
    return 0;
}