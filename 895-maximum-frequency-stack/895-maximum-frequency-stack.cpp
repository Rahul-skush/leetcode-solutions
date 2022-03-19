class FreqStack {
public:
    unordered_map<int, int> frq;
    unordered_map<int, stack<int>> mp;
    int maxfreq=0;
    FreqStack() {
        
    }
    
    void push(int val) {
        frq[val]++;
        maxfreq = max(frq[val], maxfreq);
        mp[frq[val]].push(val);
    }
    
    int pop() {
        int x = mp[maxfreq].top();
        mp[maxfreq].pop();
        
        if(mp[frq[x]--].size()==0) maxfreq--;
        return x;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */