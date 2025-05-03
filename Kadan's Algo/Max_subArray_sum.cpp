#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int maxSum = INT_MIN; 
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int st = 0; st < size; st++) {
        int currSum = 0;

        for (int end = st; end < size; end++) {  
            currSum += arr[end];  
            maxSum = max(currSum, maxSum);
        }
    }

    cout << "Max Sum of Sub Arrays: " << maxSum << endl;

    return 0;
}
