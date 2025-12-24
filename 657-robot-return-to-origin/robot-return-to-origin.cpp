class Solution {
public:
    bool judgeCircle(string moves) {
        int sayac = 0;
        if (moves.size() % 2 != 0) return false;
        for (int i = 0; i<moves.length();i++)
        {
            if (moves[i] == 'U') sayac+=2;
            else if (moves[i] == 'D') sayac-=2;
            else if (moves[i] == 'L') sayac-=1;
            else if (moves[i] == 'R') sayac+=1;
        }
        if (sayac != 0) return false;
        else return true;
    }
};