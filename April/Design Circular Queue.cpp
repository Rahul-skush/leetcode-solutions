class MyCircularQueue {
public:
    vector<int> v;
    int i=0, j=0, k;
    MyCircularQueue(int m) {
        v.resize(m);
        for(auto &x : v)
            x = -1;
        k = m;
    }
    
    bool enQueue(int value) {
        if(i == j && v[i]!=-1) return 0;
        if(v[j]==-1)
            {v[j++] = value; 
             modify(i, j);
             return 1;}
        return 0;
    }
    
    bool deQueue() {
        if(v[i]!=-1) 
         {  v[i++] = -1; 
            modify(i, j);
            return 1;
         }
        return 0;
    }
    
    int Front() {
        return v[i];
    }
    
    int Rear() {
        if(j==0) return v[k-1];
        return v[j-1]; 
    }
    
    bool isEmpty() {
        if(v[i]!=-1) return 0;
        return 1;
    }
    
    bool isFull() {
        if(i==j && v[i]!=-1) return 1;
        return 0;
    }
    
    void modify(int &i, int &j)
    {
        if(i==k) i=0;
        if(j==k) j=0;
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
