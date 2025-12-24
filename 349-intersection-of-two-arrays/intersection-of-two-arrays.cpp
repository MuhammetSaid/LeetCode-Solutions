class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans1,ans2;
        int b =0;
        
        for (int i = 0; i<nums1.size() ; i++)
        {
            for (int j = 0 ; j<nums2.size() ; j++)
            {
                if ( nums1[i] == nums2[j]){
                    ans1.push_back(nums1[i]);
                    break;
                }
            }
        }
        if(ans1.size() == 0)
            return ans1;
        ans2.push_back(ans1[0]);
        for (int i = 1 ; i<ans1.size();i++)
        {
            for (int j = 0 ; j<ans2.size() ; j++)
            {
                if (ans1[i] == ans2[j])
                    b =1;
            }
            if (b == 0)
                ans2.push_back(ans1[i]);
            b = 0;
        }
        return ans2;
    }
};