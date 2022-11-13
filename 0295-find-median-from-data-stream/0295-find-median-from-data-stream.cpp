class MedianFinder {
public:
    priority_queue<int> mxpq;
    priority_queue<int, vector<int>, greater<int>> mnpq;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        mxpq.push(num);
        if(mxpq.size()>mnpq.size()+1)
        {
            int t = mxpq.top(); mxpq.pop();
            mnpq.push(t); 
        }
        if(!mnpq.empty() && mnpq.top()<mxpq.top())
        {
            int t = mnpq.top(); mnpq.pop();
            int s = mxpq.top(); mxpq.pop();
            mxpq.push(t);
            mnpq.push(s);
        }
    }
    
    double findMedian() {
        int f =0, s =0;
        int n = mxpq.size(), m = mnpq.size();
        if(n>m) return mxpq.top();
            f = mxpq.top();
            s = mnpq.top(); 
        return (f+s + 0.0)/2;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */