# include <iostream> 
# include <climits>
using namespace std;

int main()
{
    int arr[] = {5, 15, 22, 1, -15, 24};
    int size = 6;

    int smallest = INT_MAX;

    for (int i = 0; i < size; i++) {
        // 1st Method
        // if (arr[i] < smallest) {
        //     smallest = arr[i];
        // }
            
        // 2nd Method
        smallest = min(arr[i], smallest);
    }


    cout << "Smallest :" << smallest;
    return 0;
}