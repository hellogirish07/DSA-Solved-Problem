# include <iostream> 
# include <vector>
# include <algorithm>
using namespace std;

void printSubArrays(vector<int>& arr, vector<int>& ans, int i) { 
    if (i == arr.size()) {
        cout << "[";
        for (int j = 0; j < ans.size(); ++j) {
            cout << ans[j];
            if (j != ans.size() - 1) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
        return;
    }

    // Include the current element in the subarray
    ans.push_back(arr[i]); 
    printSubArrays(arr, ans, i + 1);

    // Exclude the current element from the subarray
    ans.pop_back(); // Backtrack
    printSubArrays(arr, ans, i + 1);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> ans;

    cout << "Subarrays are: " << endl;
    printSubArrays(arr, ans, 0);
    return 0;
}