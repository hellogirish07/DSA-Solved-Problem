# include <iostream> 
# include <climits>
using namespace std;

int main()
{
    int arr[] = {5, 15, 22, 1, -15, 24};
    int size = 6;

    int largest = INT_MIN;

    for (int i = 0; i < size; i++) {
        // 1st Method
        if (arr[i] > largest) {
            largest = arr[i];
        }
            
        // 2nd Method
        // largest = max(arr[i], largest);
    }


    cout << "Largest : " << largest;
    return 0;
}