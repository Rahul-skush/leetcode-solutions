class BrowserHistory {
public:
    stack<string> bk, fr;
    BrowserHistory(string homepage) {
        bk.push(homepage);
    }
    
    void visit(string url) {
        stack<string> fr1;
        fr = fr1;
        bk.push(url);
    }
    
    string back(int steps) {
        while(steps && bk.size()>1)
        {
            fr.push(bk.top());
            bk.pop();
            steps--;
        }
        return bk.top();
    }
    
    string forward(int steps) {
         while(steps && fr.size()>=1)
        {
            bk.push(fr.top());
            fr.pop();
            steps--;
        }
        return bk.top();
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */