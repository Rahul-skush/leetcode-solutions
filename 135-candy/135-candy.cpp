class Solution {
public:
    int candy(vector<int>& rtg) {
        if(rtg.size()==1) return 1;
        vector<int> v(rtg.size(), 1);
        if(rtg[1]<rtg[0])
            v[0]+=1;
        for(int i=1;i<rtg.size();i++)
        {
            if(rtg[i]>rtg[i-1])
                v[i] = v[i-1]+1;
        }
        
        for(int i = rtg.size()-2;i>=0;i--)
        {
            if(rtg[i]>rtg[i+1])
                v[i] = v[i+1]+1;
        }
        for(int i=1;i<rtg.size();i++)
        {
            if(rtg[i]>rtg[i-1] && v[i]<=v[i-1])
                v[i] = v[i-1]+1;
        }
        for(int i = rtg.size()-2;i>=0;i--)
        {
            if(rtg[i]>rtg[i+1] && v[i]<=v[i+1])
                v[i] = v[i+1]+1;
        }
        int sum =0;
        for(auto x : v)
            {sum += x; cout<<x<<" ";}
        cout<<endl;
        return sum;
    }
};