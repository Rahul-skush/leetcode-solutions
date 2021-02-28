class FreqStack {
public:
    unordered_map<int, int>mp;
    unordered_map<int, stack<int>> m;
    int maxfreq = 0;
    FreqStack() {
        
    }
    
    void push(int x) {
        mp[x]++;
        maxfreq = max(mp[x], maxfreq);
        m[mp[x]].push(x);
    }
    
    int pop() {
        int x = m[maxfreq].top();
        m[maxfreq].pop();
        if(!m[mp[x]--].size()) maxfreq--;
        return x;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 */
