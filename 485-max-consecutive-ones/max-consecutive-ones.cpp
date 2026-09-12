class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0, sayac = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                sayac++;
            }
            else {
                if (max < sayac) max = sayac;
                sayac = 0;
            }
        }
        if (max < sayac) max = sayac;
        return max;
    }
};