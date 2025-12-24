class Solution {
public:
    int positive(int x) {
        return x > 0 ? x : -x;
    }
    bool escapeGhosts(vector<vector<int>>& ghosts, vector<int>& target) {
        int player_distance = positive(target[0]) + positive(target[1]);

        for (int i = 0; i < ghosts.size(); i++) { 
            int ghost_distance = positive(target[0] - ghosts[i][0]) + positive(target[1] - ghosts[i][1]);
            if (ghost_distance <= player_distance) return false;
        }
        return true;
    }
};