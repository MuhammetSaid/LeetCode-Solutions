class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int k = 0, j = 0;
        for (int i = 0; i < commands.size(); i++) {
            if (commands[i] == "RIGHT") j+=1;
            else if (commands[i] == "LEFT") j-= 1;
            else if (commands[i] == "UP") k -= 1;
            else k += 1;
        }
        return k*n + j;
    }
};