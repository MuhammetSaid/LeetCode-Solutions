class Solution {
public:
    int numTrees(int n) {
        vector<int> anss;
        anss.push_back(1);
        anss.push_back(1);
        for (int i = 2; i <= n; i++) {
            int j = 0, toplam = 0, y = i - 1;
            for (int k = 0; k < i/2; k++) {
                toplam = toplam + (anss[y] * anss[j]);
                j++;
                y--;
            }
            toplam *= 2;
            int a = i / 2;
            if (i % 2 == 1) toplam += (anss[a] * anss[a]);
            anss.push_back(toplam);
        }
        return anss[n];
    }
};