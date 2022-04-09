class MedianFinder {
public:
    priority_queue<int> maxMinHp;
    priority_queue<int, vector<int>, greater<int>> minMaxHp;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        maxMinHp.push(num);
        if(minMaxHp.size() && maxMinHp.top()>=minMaxHp.top())
        {
            int a = maxMinHp.top(); maxMinHp.pop();
            int b = minMaxHp.top(); minMaxHp.pop();
            minMaxHp.push(a);
            maxMinHp.push(b);
        }
        if(maxMinHp.size()-minMaxHp.size()>1)
        {
             int a = maxMinHp.top(); maxMinHp.pop();
             minMaxHp.push(a);
        }
    }
    
    double findMedian() {
        if(maxMinHp.size()==0) return 0;
        int diff = maxMinHp.size()-minMaxHp.size();
        
        if(diff%2)
            return maxMinHp.top();
        else return (maxMinHp.top() + minMaxHp.top() + 0.0)/2;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */