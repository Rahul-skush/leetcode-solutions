class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int, int>> v;
        int n = mat.size(), m;
        for(int i=0;i<n;i++)
        {
            int cnt = calSoldier(mat[i]); // binary search function to count no. of 1's. 
            v.push_back({cnt, i});
        }
        
        // sorting the vector based on first value, if same then return lowest second value
        // corresponding to that first value.
        sort(v.begin(), v.end(), [&](pair<int, int> p, pair<int, int> q ){
           return (p.first<q.first ) || ((p.first == q.first) && p.second<q.second); 
        });
        
        vector<int> ans;
        for(int i=0;i<k;i++)
          { ans.push_back(v[i].second);}
        
        return ans;
    }
    
    int calSoldier(vector<int> mat)
    {
        int l =0, h = mat.size()-1;
        while(l<=h)
        {
            int mid = l + (h-l)/2;
            
            if(mat[mid]==0)
                h = mid -1;
            else
                l = mid +1;
        }
        return l;
    }
};
