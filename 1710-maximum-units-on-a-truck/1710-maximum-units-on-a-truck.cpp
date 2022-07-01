class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), [&](vector<int> &v1, vector<int> &v2){
           return v1[1]>v2[1] || (v1[1]==v2[1] && v1[0]>v2[0]); 
        });
        
        int ans =0;
        
        for(auto x : boxTypes)
        {
            if(x[0]<=truckSize)
            {
                ans += x[0]*x[1];
                truckSize -= x[0];
            }else{
                ans += truckSize*x[1];
                break;
            }
        }
        
        return ans;
    }
};