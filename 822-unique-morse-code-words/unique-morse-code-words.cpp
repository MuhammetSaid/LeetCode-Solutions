class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string alph[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        char alph2[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

        vector<string> anss;
        int ctrl2 = 0;
        for (int i = 0 ; i < words.size(); i++)
        {
            string ctrl = "";
            for (int j = 0; j<words[i].length(); j++)
                for (int k = 0 ; k < 26 ; k++)
                    if (alph2[k] == words[i][j])
                        ctrl += alph[k];
            for (int j = 0; j < anss.size() ; j++)
                if (anss[j] == ctrl)
                    ctrl2 = 1;
            
            if (ctrl2 == 0) 
                anss.push_back(ctrl);
            ctrl2 = 0;
        }
        return anss.size();
    }
};