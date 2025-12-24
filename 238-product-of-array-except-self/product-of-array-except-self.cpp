class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int carp = 1,sayac = 0,carp2 =1;
        vector<int> ans;
        for (int i = 0 ; i<nums.size() ; i++)
            if (nums[i] == 0 )
                sayac++;
        if (sayac == 1)
            for (int i = 0 ; i<nums.size() ; i++)
                if (nums[i] != 0)
                    carp2 *= nums[i];
        for (int i = 0 ; i<nums.size();i++)
            carp *=nums[i];
        for (int i = 0 ; i<nums.size();i++)
        {
            if (nums[i] == 0 && sayac != 1)
                ans.push_back(0);
            else if (nums[i] == 0 && sayac == 1)
                ans.push_back(carp2);
            else
                ans.push_back(carp/nums[i]);
        }
        return ans;
    }
};