class Solution {
public:
    bool detectCapitalUse(string word) {
        if(checkCap(word) || checkSma(word) || checkfirst(word)) return 1;
        return 0;
    }
    
    bool checkCap(string word)
    {
        for(auto c : word)
        {
            if(c>='A' && c<='Z') continue;
            return 0;
        }
        return 1;
    }
    
    bool checkSma(string word)
    {
        for(auto c : word)
        {
            if(c>='a' && c<='z') continue;
            return 0;
        }
        return 1;
    }
    
    bool checkfirst(string word)
    {
        int i =0;
        if(word[i]>='A' && word[i]<='Z') i++;
        else return 0;
        
        for(; i<word.size(); i++)
        {
            char c = word[i];
            if(c>='a' && c<='z') continue;
            return 0;
        }
        return 1;
    }
    
    
};