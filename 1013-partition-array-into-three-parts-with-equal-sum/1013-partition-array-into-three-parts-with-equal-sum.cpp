class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum = 0;
        for(int &i : arr)
            sum += i;
        
        if(sum%3) return 0;
        
        int x = sum/3, cnt =0;
        sum =0;
        for(int &i: arr)
        {
            sum += i;
            if(sum==x) {sum = 0; cnt++;}
        }
        
        return cnt>=3;
    }
};