# include <iostream> 
# include <vector>
using namespace std;

vector<int> pairSum(vector<int> num, int target) {
    vector<int> ans;
    int size = num.size();
    
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (num[i] + num[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    
    return ans;
}

int main()
{
    vector<int> num = {2, 7, 11, 12};
    int target = 9;

    vector<int> ans = pairSum(num, target);

    cout << "[" << ans[0] << ", " << ans[1] << "]" << endl;
    return 0;
}