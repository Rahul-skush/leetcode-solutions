class Solution {
    private : vector<vector<int>> res;
public:
    set<vector<int>> st;
    set<vector<int>> ans;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> tmp;
        find(0, target, candidates, tmp);
        
        return vector<vector<int>>(ans.begin(), ans.end());
    }
    
    void find(int i, int target, vector<int> &candidates, vector<int> &tmp)
    {
        if(target<0) return ;
        if(target==0) { ans.insert(tmp); return ;}
        if(i>=candidates.size()) return ;
        
        tmp.push_back(candidates[i]);
        find(i+1, target - candidates[i], candidates, tmp);
        find(i, target - candidates[i], candidates, tmp);
        if(tmp.size())
        {
        tmp.pop_back();
        find(i+1, target, candidates, tmp);
        }
    }
};