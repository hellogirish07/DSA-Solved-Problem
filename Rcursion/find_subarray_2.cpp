# include <iostream> 
# include <vector>
# include <algorithm>
using namespace std;

void getAllSubsets(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& allSubsets) {
    // Base Case
    if (i == nums.size()) {
        allSubsets.push_back(ans);
        return;
    }

    // Include
    ans.push_back(nums[i]);
    getAllSubsets(nums, ans, i+1, allSubsets);
    ans.pop_back();

    int idx = i + 1;
    while(idx < nums.size() && nums[idx] == nums[idx-1]) idx++; // Importent Step

    // Exclude
    getAllSubsets(nums, ans, idx, allSubsets);
} 

vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> allSubsets;
    vector<int> ans;

    getAllSubsets(nums, ans, 0, allSubsets);
    return allSubsets;
}

int main()
{
    vector<int> arr = {1, 2, 2};
    vector<int> ans;
    vector<vector<int>> allSubsets;

    cout << "Subarrays are: " << endl;
    getAllSubsets(arr, ans, 0, allSubsets);

    for (const auto& subset : allSubsets) {
        for (int num : subset) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}