class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& nums) {
        vector<int> ans;
        int ones = 0, zeros = 0, max = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) ones+=1;
        }
        for (int i = 0; i <= nums.size(); i++) {
            if (ones + zeros > max) {
                max = ones + zeros;
                ans.clear();
                ans.push_back(i);
            } else if (ones + zeros == max) {
                ans.push_back(i);
            }
            if (i == nums.size()) break;

            if (nums[i] == 0) {
                zeros+=1;
            } else {
                ones -= 1;
            }

        }
        return ans;
    }
};