class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> combinationSum3(int k, int n) {
       vector<int> v;
        find(1, k, n, v);
        return res;
    }
    
    void find(int i, int k, int n, vector<int> &v)
    {
        if(k==0) 
        {
            if(n==0) res.push_back(v);
            return ;
        }
        
        for(int j=i;j<=9;j++)
        {
            v.push_back(j);
            find(j+1, k-1, n-j, v);
            v.pop_back();
        }
    }
};