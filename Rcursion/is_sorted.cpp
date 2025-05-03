# include <iostream> 
# include <vector>
using namespace std;

bool is_sorted(int arr[], int n)
{
    if (n == 0 || n == 1)
        return true;
    return (arr[0] < arr[1] && is_sorted(arr + 1, n - 1));
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    if (is_sorted(arr.data(), n))
        cout << "Array is sorted" << endl;
    else
        cout << "Array is not sorted" << endl;
    return 0;
}