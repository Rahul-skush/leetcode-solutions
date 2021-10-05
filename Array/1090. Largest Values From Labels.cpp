class Solution {
public:
    int largestValsFromLabels(vector<int>& values, vector<int>& labels, int numWanted, int useLimit) {
        unordered_map<int, int> mp;
        
        
        priority_queue<vector<int>> pq;
        for(int i=0;i<labels.size();i++)
        {
            pq.push({values[i], labels[i]});
        }
        int sum =0;
        while(pq.size() && numWanted)
        {
            vector<int> v = pq.top();
            pq.pop();
            mp[v[1]]++;
            if(mp[v[1]]<=useLimit)
                {sum += v[0]; numWanted--;}
            //cout<<v[0]<<" ";
        }
        
        return sum;
    }
};
