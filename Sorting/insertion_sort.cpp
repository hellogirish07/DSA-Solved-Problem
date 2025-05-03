# include <iostream> 
# include <algorithm>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int curr = arr[i];
        int prev = i - 1;

        while (prev >= 0 && arr[prev] > curr) {
            arr[prev + 1] = arr[prev];
            prev--;
        }

        arr[prev + 1] = curr;
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
    insertionSort(arr, n);
    cout << "Array after Sort : ", printArray(arr, n) ; 
    return 0;
}