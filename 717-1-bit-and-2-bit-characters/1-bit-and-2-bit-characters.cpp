class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n = bits.size(), i = 0, ctrl = 0;
        while (i < n) {
            if (bits[i]) {
                ctrl = 1;
                i += 2;
            } else {
                ctrl = 0;
                i++;
            }
        }
        return !ctrl;
    }
};
