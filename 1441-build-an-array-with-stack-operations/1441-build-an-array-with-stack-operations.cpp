class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> res;
        int j =0, m = target.size();
        for(int i=1;i<=n && j<m;i++)
        {
            if(target[j]==i){
                j++;
                res.push_back("Push");
            }else{
                res.push_back("Push");
                res.push_back("Pop");
            }
        }
        return res;
    }
};