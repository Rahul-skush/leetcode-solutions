class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        
       return max(find(answerKey, k, 'T'), find(answerKey, k, 'F'));
    }
    
    int find(string s, int k, char c)
    {
        int i =0, j = 0, n = s.size(), t = 0, ans =0;
        while(j<n)
        {
            while(t<=k && j<n)
            {
                t += s[j]!=c?1:0;
                j++;
            }
            ans = max(ans,t>k?j - i-1:j-i);
            while(t>k && i<j)
            {
                t -= s[i]!=c?1:0;
                i++;
            }
        }
        return ans;
    }
};