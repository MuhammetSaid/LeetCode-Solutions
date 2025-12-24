class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> ans = matrix;
        int k = matrix.size()-1;
        for (int i = 0 ; i<matrix.size() ; i++) 
        {
            for (int j = 0 ; j<matrix.size() ; j++)
            {
                ans[i][j]= matrix[k][i];
                k--;
            }
            k = matrix.size()-1;
        }
        matrix = ans;
    }
};