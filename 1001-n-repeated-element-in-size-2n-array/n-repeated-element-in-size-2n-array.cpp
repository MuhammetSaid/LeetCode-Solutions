class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int sayac = 0,ans;
        for (int i = 0;i<nums.size();i++)
        {
            for (int j = nums.size()-1;j >=0;j--)
            {
                if(nums[i] == nums[j] && i !=j)
                {
                    sayac++;
                }
            }
            if (sayac>0){
                ans = nums[i];
                break;
            }
            sayac== 0;
        }
        return ans;
    }
};