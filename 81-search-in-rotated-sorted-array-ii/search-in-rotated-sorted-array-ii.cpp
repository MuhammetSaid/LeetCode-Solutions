class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int b = 0;
        for (int i = 0 ; i<nums.size(); i++)
        {
            if (nums[i] == target)
            {
                b = 1;
                return true;
            }
        }
        
        return false;
    }
};