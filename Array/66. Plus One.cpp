class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n  = digits.size();
        if(digits[n-1]<9)
          {  digits[n-1]++;
        return digits;
          }
        int cnt = 0;
        for(int i =0;i<n;i++)
            if(digits[i]==9) cnt++;
        
        if(cnt == n)
        {
            digits[0] = 1;
            for(int i =1;i<n;i++)
                digits[i] = 0;
            digits.push_back(0);
            return digits;
        }
        
        int i = n-1;
        while(digits[i]==9)
            {digits[i] = 0; i--;}
        digits[i] +=1;
        return digits;
    }
};
