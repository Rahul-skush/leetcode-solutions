class Solution {
public:
    int n, m ;
    int kthSmallest(vector<vector<int>>& mat, int k) {
        set<vector<int>> s;
        n = mat.size(), m =mat[0].size();
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
        pq.push({mat[0][0], 0, 0});
        s.insert({0, 0});
        while(k-->1)
        {
          vector<int> v = pq.top();
            //cout<<v[0]<<" ";
            pq.pop();
            vector<int> p1 = {v[1]+1, v[2]};
            vector<int> p2 = {v[1], v[2]+1};
            if(isValid(p1[0], p1[1]) && s.find(p1)==s.end())
            {
               s.insert(p1);
               pq.push({mat[p1[0]][p1[1]], p1[0], p1[1]});
            }
            if(isValid(p2[0], p2[1]) &&s.find(p2)==s.end())
            {
               s.insert(p2);
               pq.push({mat[p2[0]][p2[1]], p2[0], p2[1]});
            }
        }
        return pq.top()[0];
    }
    
    bool isValid(int x, int y)
    {
        return x>=0 && y>=0 && x<n && y<m;
    }
};