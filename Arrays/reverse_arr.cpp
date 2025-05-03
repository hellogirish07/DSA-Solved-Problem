# include <iostream> 

using namespace std;

void reverse_array(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void print_array(int arr[], int size) {
    for (int i = 0; i <+ size; i++) {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Orignal Array : " ;
    print_array(arr, size);
    cout << endl; 
    
    reverse_array(arr, size);
    
    cout << "Reverse Array : " ;
    print_array(arr, size);
    return 0;
}