class Solution {
public:
    string simplifyPath(string path) {
        vector<string> files, ctrl;
        string gecici = "";
        for (int i = 0; i < path.length(); i++) {
            if (path[i] == '/') {
                if (gecici != "") {
                    files.push_back(gecici);
                    gecici = "";
                }
            } else gecici += path[i];
        }
        if (gecici != "") files.push_back(gecici);
        gecici = "/";
        for (int i = 0; i < files.size(); i++) {
            if (files[i] == ".") continue;
            else {
                if (files[i] != "..") ctrl.push_back(files[i]);
                else {
                    if (ctrl.size() > 0) ctrl.pop_back();
                }
            }
        }
        files = ctrl;
        for (int i = 0; i < files.size(); i++) {
            gecici += files[i];
            if (i != files.size()-1) gecici += '/';
        }
        return gecici;
    }
};