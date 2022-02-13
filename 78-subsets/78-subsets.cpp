class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<vector<int>> res;
        vector<int> subset;
        
        subsetUtil(res, subset, nums, 0);
        
        return res;
    }
    
    void subsetUtil(vector<vector<int>>& res, vector<int>& subset, vector<int>& a, int index)
    {
        res.push_back(subset);
        
        for(int i=index;i<a.size();i++)
        {
            subset.push_back(a[i]);
            
            subsetUtil(res, subset, a, i+1);
            
            subset.pop_back();
        }
        
        return ;
    }
    
};