class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int right =  0, left = accumulate(nums.begin(), nums.end(), 0) - nums[0];
        for (int i = 0; i < nums.size(); i++) {
            if (right == left) return i;
            else if (i == nums.size()-1) {
                left = 0;
                right += nums[i];
            }
            else {
                right += nums[i];
                left -= nums[i+1];
            }
        }
        return -1;
    }
};