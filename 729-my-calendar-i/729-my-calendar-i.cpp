class MyCalendar {
public:
    set<pair<int, int>> s;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        for(auto x : s)
        {
            if((start>=x.first && start<=x.second) || ((end-1)>=x.first && (end-1)<=x.second)
              || (start<=x.first && (end-1)>=x.first) || ((start)<=x.second && (end-1)>=x.second))
                return false;
        }
        
        s.insert({start, end-1});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */