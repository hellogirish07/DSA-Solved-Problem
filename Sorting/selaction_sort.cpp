# include <iostream> 
# include <algorithm>
using namespace std;

void selactionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) { 
        int smallestIDX = i;

        for ( int j = i + 1; j < n; j++) {
            if (arr[j] < arr[smallestIDX]) {
                smallestIDX = j;
            }
        }

        swap(arr[i], arr[smallestIDX]);
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
    selactionSort(arr, n);
    cout << "Array after Sort : ", printArray(arr, n) ; 
    return 0;
}