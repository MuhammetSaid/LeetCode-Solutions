class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> ii,jj;
        for (int i = 0 ; i<matrix.size(); i++)
            for (int j = 0 ; j<matrix[i].size();j++)
                if (matrix[i][j] == 0)
                {
                    ii.push_back(i);
                    jj.push_back(j);
                }
        for (int i= 0 ; i <ii.size();i++)
            for (int j = 0 ; j<matrix[0].size();j++)
                matrix[ii[i]][j] = 0;
        for (int i = 0 ; i<jj.size();i++)
            for (int j = 0 ; j<matrix.size() ; j++)
                matrix[j][jj[i]] = 0;
    }
};