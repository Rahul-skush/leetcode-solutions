class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end());
        int i=0, j = tokens.size()-1, score =0, ans =0;
        while(i<=j)
        {
            while(i<=j && power>=tokens[i])
            {
                power -= tokens[i];
                score++; 
                i++;
            }
            ans = max(ans, score);
            if(i<=j)
                {power += tokens[j--]; score-=1;}
            if(score<0) break;
        }
        
        return ans;
    }
};