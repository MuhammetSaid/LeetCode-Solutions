class BrowserHistory {
public:
    vector<string> history;
    int i = 0, n = 0;
    BrowserHistory(string homepage) {
        history.push_back(homepage);
        i = 0;
        n = 1;
    }
    
    void visit(string url) {
        history.resize(i + 1);
        history.push_back(url);
        i++;
        n = i + 1;
    }
    
    string back(int steps) {
        if (steps > i) i = 0;
        else i -= steps;
        return history[i];
    }
    
    string forward(int steps) {
        if (steps > n - i - 1) i += (n - i - 1);
        else i += steps;
        return history[i];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */