class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int i = 0;
        while (i < nums.size()) {
            if (nums[i] == 0) {
                int j = i;
                while (j < nums.size()) {
                    if (nums[j] != 0) break;
                    j++;
                }
                if (j == nums.size()) break;
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
            i++;
        }
    }
};