class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int sayac = nums[(nums.size() / 2)];
        int result = 0;
        for (int i = 0; i < nums.size() ; i++) {
            int temp = nums[i] - sayac;
            if (temp > 0) result += temp;
            else result +=(-temp);
        }
        return result;
    }
};