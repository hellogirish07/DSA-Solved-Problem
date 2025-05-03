// Sorting array using 0s, 1s, 2s (Dutch National Flag Algorithm)

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    void sortNumber(vector<int> &nums)
    {
        int n = nums.size();

        int low = 0, high = n - 1, mid = 0;

        while (mid <= high)
        {
            if (nums[mid] == 0)
            {
                swap(nums[low], nums[mid]);
                mid++;
                low++;
            }

            else if (nums[mid] == 1)
            {
                mid++;
            }

            else
            {
                swap(nums[high], nums[mid]);
                high--;
            }
        }
    }

    void print_arr(vector<int> &arr)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    vector<int> arr = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};

    cout << "Original array: ";
    Solution sol; // Creating object of class Solution
    sol.print_arr(arr); // Printing the original array

    sol.sortNumber(arr); // Calling the function to sort the array

    cout << "Sorted array: ";
    sol.print_arr(arr); // Printing the sorted array

    return 0;
}