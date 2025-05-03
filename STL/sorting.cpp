# include <iostream> 
# include <algorithm>
# include <vector>

using namespace std;

int main()
{
    int arr[] = {5, 2, 8, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (auto value: arr) {
        cout << value << " ";
    }
    cout << endl;

    // Sort the array in ascending order
    sort(arr, arr + n); 
    cout << "Sorted array in ascending order: ";
    for (auto value: arr) {
        cout << value << " ";
    }
    cout << endl;

    // Sort the array in descending order
    sort(arr, arr + n, greater<int>());
    cout << "Sorted array in descending order: ";
    for (auto value: arr) {
        cout << value << " ";
    }
    cout << endl;
    
    // sorting in vector
    vector<int> vec = {5, 2, 8, 1, 3};
    cout << "Original vector: ";
    for (auto value: vec) {
        cout << value << " ";
    }
    cout << endl;

    // Sort the vector in ascending order
    sort(vec.begin(), vec.end());
    cout << "Sorted vector in ascending order: ";
    for (auto value: vec) {
        cout << value << " ";
    }
    cout << endl;

    // Sort the vector in descending order
    sort(vec.begin(), vec.end(), greater<int>());
    cout << "Sorted vector in descending order: ";
    for (auto value: vec) {
        cout << value << " ";
    }
    cout << endl;
    return 0;
}
