class Solution {
public:
    void reverseString(vector<char>& s) {
        string ans;
        char deg;
        int j;
        j = 0;
        for(int i = s.size()-1; i>=0 ; i--)
        {
            
            if(s.size() %2 ==1 && j == i)
            {
                break;
            }
            deg = s[i];
            s[i] = s[j];
            s[j] = deg;
            j++;
            if (j == i)
            {
                break;
            }
        }
    }
};