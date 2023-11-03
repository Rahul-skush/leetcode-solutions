class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> res;
        int j =0, m = target.size();
        for(int i=1;i<=n && j<m;i++)
        {
            res.push_back("Push");
            if(target[j]!=i)
                res.push_back("Pop");
            else j++;
        }
        return res;
    }
};