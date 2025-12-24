class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0, max = nums[nums.size()-1];
        while (nums[i] != max) {
            if (nums[i] == nums[i+1]) 
            {
                if (nums[i] == nums[i + 2]) {
                    nums.erase(nums.begin() + i + 2);
                    continue;
                }
            }
            i++;
        }
        if (i + 2 < nums.size()) return i+2;
        return nums.size();
    }
};