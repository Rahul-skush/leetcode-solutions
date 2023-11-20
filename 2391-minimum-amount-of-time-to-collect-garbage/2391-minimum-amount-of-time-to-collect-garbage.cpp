class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
       
        for(int i=1;i<garbage.size()-1;i++)
            travel[i] += travel[i-1];
        return find(garbage, 'G', travel) + find(garbage, 'P', travel) +  find(garbage, 'M', travel);
    }
    
    int find(vector<string> &garbage, char c, vector<int>& travel)
    {
        int j =-1, ans =0, n = garbage.size();
        for(int i=0;i<n;i++)
        {
            int  cnt =0;
            for(auto x : garbage[i])
                if(x==c) {cnt++; j =i;}
            ans += cnt;
        }
        if(j>0)
            ans += travel[j-1];
        return ans;
    }
};