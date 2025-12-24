class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> keys, counter, ans;
        int bas=0,son = nums.size()-1;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size()-1 ; i++)
        {
            if (nums[i] != nums[i+1]) {
                son = i;
                keys.push_back(nums[i]);
                counter.push_back(son-bas+1);
                bas = i+1;
            }
        }
        keys.push_back(nums[bas]);
        counter.push_back(nums.size() - bas);
        int max = 0;
        for (int i = 0; i < counter.size() - 1; ++i) {
            for (int j = 0; j < counter.size() - i - 1; ++j) {
                if (counter[j] > counter[j + 1]) {
                    int temp = keys[j];
                    keys[j] = keys[j + 1];
                    keys[j + 1] = temp;

                    int temp1 = counter[j];
                    counter[j] = counter[j + 1];
                    counter[j + 1] = temp1;
                }
            }
        }
        for (int i = keys.size()-1 ; i >= 0; i--)
        {
            ans.push_back(keys[i]);
            if (ans.size() == k)
                return ans;
        }
        return ans;
    }
};