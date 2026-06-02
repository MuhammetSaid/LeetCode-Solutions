class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        
        int aa = candyType.size()/2;
        int boyut = candyType.size();

        sort(candyType.begin(), candyType.end());

        int ba = 0;

        for (int i = 0; i < boyut; ++i) {
            if (i == 0 || candyType[i] != candyType[i - 1]) {
                ba++;
            }
        }
        if (aa > ba)
            return ba;
        if(ba> aa)
            return aa;
        return ba;
    }
};