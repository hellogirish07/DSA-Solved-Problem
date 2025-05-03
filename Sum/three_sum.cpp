# include <iostream> 
# include <vector>
# include <set>
# include <algorithm>
using namespace std;

// Method 1
// Brute force approach
vector<vector<int>> threeSum_bruteForce(vector <int> & nums ) {
    int n = nums.size();
    vector<vector<int>> ans;

    set<vector<int>> s;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (nums[i] + nums[j] + nums[k] == 0) {
                    vector<int> triplet = { nums[i], nums[j], nums[k] };
                    sort(triplet.begin(), triplet.end());
                    if (s.find(triplet) == s.end()) {
                        s.insert(triplet);
                        ans.push_back(triplet);
                    }
                }
            }
        }
    }
    return ans;
}

// Method 2
// Hashing approach
vector<vector<int>> threeSum_Hashing(vector <int> & nums ) {
    int n = nums.size();
    
    set<vector<int>> uniqueTriplets;

    for (int i = 0; i < n; i++) {
        int target = -nums[i];
        set<int> s;

        for (int j = i + 1; j < n; j++) {
            int thirdNum = target - nums[j];

            if(s.find(thirdNum) != s.end()) {
                vector<int> triplet = { nums[i], nums[j], thirdNum };
                sort(triplet.begin(), triplet.end());
                uniqueTriplets.insert(triplet);
            }
            s.insert(nums[j]);
        }
    }
    vector<vector<int>> ans(uniqueTriplets.begin(), uniqueTriplets.end());
    return ans;
}


int main()
{
    vector<int> nums = { -1, 0, 1, 2, -1, -4 };
    // vector<vector<int>> result = threeSum_bruteForce(nums); // Brute force approach
    vector<vector<int>> result = threeSum_Hashing(nums); // Brute force approach

    cout << "Triplets that sum to zero:" << endl;
    for (const auto & triplet : result) {
        cout << "[" << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << "]" << endl;
    }

    return 0;
}