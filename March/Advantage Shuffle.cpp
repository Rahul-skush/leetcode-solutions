class Solution {
public:
    vector<int> advantageCount(vector<int>& A, vector<int>& B) {
        vector<pair<int, int>> mp;
        for(int i=0;i<B.size();i++)
            mp.push_back({B[i], i});
        sort(mp.begin(), mp.end());
        sort(A.begin(), A.end());
        vector<int> res(A.size(), -1);
        vector<int>  vA;
        int i = 0;
        for(auto &x : mp)
        {
            while(i<A.size()&& A[i]<=x.first)
                i++;
            if(i==A.size()) break;
            res[x.second] = A[i];
            A[i] = -1;
            i++;
        }
        
        for(auto x : A)
        {
            if(x!=-1) vA.push_back(x);
        }
        i = 0;
        for(auto x : mp)
        {
            if(res[x.second]==-1) res[x.second] = vA[i++];
        }
        
        return res;
    }
};
