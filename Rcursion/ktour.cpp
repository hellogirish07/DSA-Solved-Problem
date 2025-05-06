#include <iostream>
#include <vector>
#include <utility>
#include <cmath>
using namespace std;

class Solution {
public:
    bool checkValidGrid(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<pair<int, int>> pos(n * n);

        // Map each value to its position
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                pos[grid[i][j]] = {i, j};

        // The first cell must be 0
        if (pos[0] != make_pair(0, 0)) {
            cout << "Start position is not (0, 0)\n";
            return false;
        }

        for (int i = 1; i < n * n; ++i) {
            int r1 = pos[i - 1].first, c1 = pos[i - 1].second;
            int r2 = pos[i].first, c2 = pos[i].second;
            int dr = abs(r1 - r2), dc = abs(c1 - c2);

            if (!((dr == 2 && dc == 1) || (dr == 1 && dc == 2))) {
                cout << "Invalid move from " << i - 1 << " to " << i << "\n";
                cout << "From position (" << r1 << "," << c1 << ") to ("
                     << r2 << "," << c2 << ") — Not a knight move!\n";
                return false;
            }
        }

        return true;
    }
};

int main() {
    vector<vector<int>> grid = {
        {0, 3, 6},
        {5, 8, 1},
        {2, 7, 4}
    };

    Solution sol;
    if (sol.checkValidGrid(grid)) {
        cout << "✅ The grid is a valid Knight's Tour.\n";
    } else {
        cout << "❌ The grid is NOT a valid Knight's Tour.\n";
    }

    return 0;
}
