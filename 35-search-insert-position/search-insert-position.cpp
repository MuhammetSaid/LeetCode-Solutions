class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int aa = nums.size();
        for(int i=0; i<aa; i++)
        {
            if(target <= nums[i])
                return i;
        }
        if(target > nums[aa-1])
            return aa;
        return 0;
    }
};