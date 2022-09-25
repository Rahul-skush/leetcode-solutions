class MyCircularQueue {
private:  vector<int> v;
          int f, r, n;
public:
    
    MyCircularQueue(int k) {
       v.resize(k, -2);
        n = k;
        f =0, r =0;
    }
    
    bool enQueue(int value) {
        if(v[r]!=-1 && v[r]!=-2) return false;
        v[r] = value;
        r+=1;
        if(r==n) r =0;
        return true;
    }
    
    bool deQueue() {
        if(v[f]==-1 || v[f]==-2) return false;
        v[f]=-1;
        f+=1;
        if(f==n) f =0;
        return true;
    }
    
    int Front() {
        return v[f]==-2?-1: v[f];
    }
    
    int Rear() {
        if(r-1>=0) return v[r-1];
        return v.back()==-2?-1:v.back();
    }
    
    bool isEmpty() {
        return r==f &&( v[r]==-1 || v[r]==-2);
    }
    
    bool isFull() {
        return v[r]!=-1 && v[r]!=-2;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */