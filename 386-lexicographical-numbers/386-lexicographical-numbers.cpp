class Solution {
public:
    vector<int> v;
    vector<int> lexicalOrder(int n) {
        for(int i=1;i<=9;i++)
            find(i, n);
        return v;
    }
    
    void find(int i,int n)
    {
        if(i>n) return ;
        v.push_back(i);
        for(int j=0;j<10;j++)
            find(i*10 + j, n);
    }
};