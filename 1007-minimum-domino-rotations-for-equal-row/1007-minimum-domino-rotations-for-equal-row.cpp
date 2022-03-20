class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int ans = INT_MAX;
        for(int i=1;i<=6;i++)
        {
            int f1 =0, cnt1 =0, cnt2 =0;
            for(int j=0;j<tops.size();j++)
            {
                if(tops[j]!=i && bottoms[j]!=i) f1 =-1;
                if(tops[j]!=i) cnt1++;
                if(bottoms[j]!=i) cnt2++;
            }
            
            if(f1==0) ans = min({ans, cnt1, cnt2});
        }
        
        return ans!=INT_MAX?ans:-1;
        
    }
};