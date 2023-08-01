class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> combine(int n, int k) {
        vector<int> v;
        find(1, n, k, v);
        return res;
    }
    
    void find(int i, int n, int k, vector<int> &v)
    {
        if(k==0) {res.push_back(v); return ;}
        if(i>n) return ;
        
        v.push_back(i);
        find(i+1, n, k-1, v);
        v.pop_back();
        find(i+1, n, k, v);
    }
};