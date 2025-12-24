class Solution {
public:
    int candy(vector<int>& ratings) {
        vector<int> ans_vec; 
        int ans = 0, n = ratings.size();
        
        for (int i = 0; i < n; i++)
            ans_vec.push_back(1);

        for (int i = 1; i < n; i++) {
            if (ratings[i] > ratings[i-1])
                ans_vec[i] = ans_vec[i-1] + 1;
        }
        for (int i = n-2; i >= 0; i--) {
            if (ratings[i] > ratings[i+1]) {
                int gecici = ans_vec[i+1] + 1;
                if (gecici > ans_vec[i])
                    ans_vec[i] = gecici;
            }
        }
        for (int i = 0; i < n; i++) 
            ans += ans_vec[i];

        return ans;

    }
};