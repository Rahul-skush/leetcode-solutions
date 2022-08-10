class Solution {
public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
        int ans =0;
      for(int k=minSize;k<=maxSize;k++)
      {
          int y =  find(k, s, maxLetters);
          if(y>ans) ans =y;
          else break;
      }
        return ans;
    }
    
    int find(int k, string s, int mx)
    {
        unordered_map<string, int> mp;
        unordered_map<char, int> mp2;
        string str = "";
        int mxCnt = 0;
        string ans;
        for(int i=0;i<s.size();i++)
        {
            mp2[s[i]]++;
            if(i>=k-1)
            {
                str = s.substr(i-k+1, k);
                if(mp2.size()<=mx)
                    mp[str]++;
                
                    mp2[s[i-k+1]]--;
                    if(mp2[s[i-k+1]]==0) mp2.erase(s[i-k+1]);
               
            }
            
            if(mp[str]>mxCnt)
            {
                mxCnt = mp[str];
            }
        }
        
        return mxCnt;
    }
    
};