class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        
        int k = 0 , ctrl = 0;
        for (int i = 0; i < name.length() ; i++)
        {
            if (name[i] != typed[k]) 
                return false;
            for (int j = k; j < typed.length(); j++)
            {
                if (typed[j] != name[i])
                {
                    if (i == name.length()-1)
                        return false;
                    k = j;
                    break;
                }
                if (i != name.length()-1)
                {
                    if (name[i] == name[i+1])
                    {
                        k = j+1;
                        break;
                    }
                }
            }
        }
        return true;
    }
};