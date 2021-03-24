class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int> prfSum(code.size(), 0);
        int f = 0;
        if(k<0){ f =1; k= -k; reverse(code.begin(), code.end());}
        prfSum[0] = code[0];
        int n = code.size();
        for(int i=1;i<code.size();i++)
            prfSum[i] = prfSum[i-1] + code[i];
        
        for(int i=0;i<code.size();i++)
        {
            int j = (i +k);
            if(j<n)
                code[i] = prfSum[j] - prfSum[i];
            else
            {
                j %=n;
                code[i] = prfSum[n-1] - prfSum[i] + prfSum[j]; 
            }
        }
        
        if(f) reverse(code.begin(), code.end());
        return code;
    }
};
