class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int ans = 0, n = board[0].size();
        if (board[0][0] == 'X') ans++;
        for (int i = 1; i < n; i++) {
            if (board[0][i] == 'X' && board[0][i - 1] == '.') ans++;
        }
        for (int i = 1; i < board.size(); i++) {
            for (int j = 0; j < n; j++) {
                if (j == 0) {
                    if (board[i][j] == 'X' && board[i-1][j] == '.') {
                        ans++;
                    }
                    continue;
                }
                if (board[i][j] == 'X' && board[i-1][j] == '.' && board[i][j-1] == '.') ans++;
            }
        }
        return ans;
    }
};