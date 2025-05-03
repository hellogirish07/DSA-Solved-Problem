# include <iostream> 

using namespace std;

int print_sub_array(int arr[], int size) {
    for (int st = 0; st < size; st++ ) {
        for (int end = 0; end < size; end++) {
            for (int i = st; i <= end; i++) {
                cout << arr[i];
            }
            cout << " "; 
        }
        cout << endl;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Size : " << size << endl;
 
    print_sub_array(arr, size);

    // cout << "Sub Arrays : " << sub_arrays << endl;
    return 0;
}