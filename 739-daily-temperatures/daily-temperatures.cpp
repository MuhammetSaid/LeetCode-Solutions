class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans;
        int ctrl = 0, n = temperatures.size();
        for (int i = 0; i < n-1 ; i++) {
            int j = i+1;
            if (i != 0) {
                if (temperatures[i] == temperatures[i-1]) {
                    if (ans[i-1] == 0) ans.push_back(0);
                    else ans.push_back(ans[i-1]-1);
                    ctrl = 1;
                }
            } if (ctrl == 0) {
                while (temperatures[j] <= temperatures[i]) {
                    j++;
                    if (j == n) {
                        j = i;
                        break;
                    }
                }
                ans.push_back(j-i);
            }
            ctrl = 0;
        }
        ans.push_back(0);
        return ans;
    }
};
