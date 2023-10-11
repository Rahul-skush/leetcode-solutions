class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        map<int, int> mp;
        for(auto x :  flowers)
            {mp[x[0]]+=1; mp[x[1]+1]-=1;}
        
        map<int, vector<int>> positions;
        for(int i=0;i<people.size();i++)
            positions[people[i]].push_back(i);
        
        int sum =0;
        
        for(auto &x : mp)
        {
            sum += x.second;
            x.second = sum;
        }
        
        vector<int> res(people.size(), 0);
        for(auto x : positions)
        {
            int pos = x.first;
            auto it = mp.lower_bound(pos);
            if(it->first>pos) it--;
            
            for(auto i : x.second)
            {
                res[i] = (it->first>pos)?0:it->second;
            }
        }
        cout<<endl;
        return res;
            
    }
};