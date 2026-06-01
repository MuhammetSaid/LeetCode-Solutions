class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort (cost.begin(), cost.end());
        int ans = 0, sayac = 0;
        for (int i = cost.size() - 1; i >= 0; i--) {
            if (sayac == 2) {
                sayac = 0;
                continue;
            }
            ans += cost[i];
            sayac++;            
        }
        return ans;
    }
};