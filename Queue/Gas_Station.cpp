#include <iostream>
#include <vector>
using namespace std;
// LeetCode 134: Gas Station

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totelGas = 0, totelCost = 0;
        int start = 0, currGas = 0;

        // Unique Solution
        for (int i = 0; i < gas.size(); i++) {
            totelGas += gas[i];
            totelCost += cost[i];

            currGas += (gas[i] - cost[i]);

            if (currGas < 0) {
                start = i + 1;
                currGas = 0;
            }
        }

        return totelGas < totelCost ? -1 : start;
    }
};

int main() {
    vector<int> gas = {1, 2, 3, 4, 5};
    vector<int> cost = {3, 4, 5, 1, 2};
    
    Solution sol;
    int result = sol.canCompleteCircuit(gas, cost);
    cout << "Starting gas station index: " << result << endl;
    return 0;
}