class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> karsi; 
        for (int i = 0 ; i < numbers.size(); i++) {
            karsi[numbers[i]] = i;
        }

        for (int i = 0; i < numbers.size(); i++ ) {
            int kay = target - numbers[i];
            auto it = karsi.find(kay);
            if ( it != karsi.end()) { 
                return {i+1, it->second + 1};
                break;
            }
        }
        return {};
    }
};