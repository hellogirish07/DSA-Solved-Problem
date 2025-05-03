# include <iostream> 
# include <vector>
using namespace std;

bool isSafe(vector<string>& board, int row, int col, int n) {
    // Horigontally 
    for(int j = 0; j < n; j++) {
        if (board[row][j] == 'Q') {
            return false;
        } 
    }

    // Verially 
    for(int i = 0; i < n; i++) {
        if (board[i][col] == 'Q') {
            return false;
        } 
    }

    // Left Digonally
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 'Q') {
            return false;
        }
    }

    // Right Digonally
    for (int i = row, j = col; i >= 0 && j < n; i--, j++) {
        if (board[i][j] == 'Q') {
            return false;
        }
    }

    return true;
}

void nQueens(vector<string>& board, int row, int n, vector<vector<string>>  & ans ) {
    // Base Case
    if(row == n) {
        ans.push_back({board});
        return;
    }

    for (int j = 0; j < n; j++) {
        if (isSafe(board, row, j, n) ) {
            board[row][j] = 'Q';
            nQueens(board, row+1, n, ans);
            board[row][j] = '.';
        }
    }
}   

vector<vector<string>> solveNQueens(int n) {
    vector<string> board(n, string(n, '.'));
    vector<vector<string>> ans;

    nQueens(board, 0, n, ans);
    return ans;
}

int main()
{
    int n;
    cout << "Enter the value of N for the N-Queens problem: ";
    cin >> n;

    vector<vector<string>> solutions = solveNQueens(n);

    cout << "Number of solutions: " << solutions.size() << endl;
    for (int i = 0; i < solutions.size(); i++) {
        cout << "Solution " << i + 1 << ":" << endl;
        for (const string& row : solutions[i]) {
            cout << row << endl;
        }
        cout << endl;
    }
    return 0;
}