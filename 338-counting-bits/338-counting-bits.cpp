class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v;
        for(int i=0;i<=n;i++)
        {
            int x = 1, j =0, cnt =0;
            while(j<30)
            {
                if(i&x) cnt++;
                x = x*2;
                j++;
            }
            if(i&x) cnt++;
            v.push_back(cnt);
        }
        return v;
    }
};