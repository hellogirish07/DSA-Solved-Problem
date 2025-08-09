# include <iostream> 
# include <vector>
# include <deque>
using namespace std;

class MaxSlidingWindow {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> result;

        // 1st Window
        for (int i = 0; i < k; i++) {
            while (dq.size() > 0 && nums[dq.back()] <= nums[i]) {
                dq.pop_back();
            }
            dq.push_back(i);
        }

        for (int i = k; i < nums.size(); i++) {
            result.push_back(nums[dq.front()]);

            // Remove not part of current window
            while (dq.size() > 0 && dq.front() <= i - k) {
                dq.pop_front();
            }

            // Remove the smaller values
            while (dq.size() > 0 && nums[dq.back()] <= nums[i]) {
                dq.pop_back();
            }

            dq.push_back(i);
        }

        result.push_back(nums[dq.front()]);

        return result;
    }
};

int main() {
    MaxSlidingWindow msw;
    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    vector<int> result = msw.maxSlidingWindow(nums, k);

    cout << "Maximums in sliding window: ";

    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}