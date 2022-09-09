class Solution {
public:
    int numberOfWeakCharacters(vector<vector<int>>& pr) {
            sort(pr.begin(), pr.end(),[&](vector<int> &v1, vector<int>&v2){
                return v1[0]<v2[0] || (v1[0]==v2[0] && v1[1]>v2[1]);
            });
        int cnt =0, md = -1;
        for(int i=pr.size()-1;i>=0;i--)
        {
            vector<int> x = pr[i];
            if(x[1]<md)
                cnt++;
            md = max(md, x[1]);
            
        }
        return cnt;
    }
};