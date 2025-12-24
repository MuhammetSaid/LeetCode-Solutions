class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int ans;
        while (true) {
            for (int i = 0 ; i < tokens.size() ; i++) {
                if (!isdigit(tokens[i][0]) && tokens[i].length() == 1) {
                    int gecici;
                    if (tokens[i] == "+")
                        gecici = atoi(tokens[i-2].c_str()) + atoi(tokens[i-1].c_str());
                    else if (tokens[i] == "-")
                        gecici = atoi(tokens[i-2].c_str()) - atoi(tokens[i-1].c_str());
                    if (tokens[i] == "*")
                        gecici = atoi(tokens[i-2].c_str()) * atoi(tokens[i-1].c_str());
                    else if (tokens[i] == "/")
                        gecici = atoi(tokens[i-2].c_str()) / atoi(tokens[i-1].c_str());
                    tokens[i] = to_string(gecici);
                    tokens.erase(tokens.begin() + i - 2);
                    tokens.erase(tokens.begin() + i - 2);
                    break;
                }
            }
            if (tokens.size() == 1)
                return atoi(tokens[0].c_str());
        }
        return 1;
    }
};