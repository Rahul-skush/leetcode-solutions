class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
      queue<string> q;
        set<string> st;
        q.push(beginWord); st.insert(beginWord);
        set<string> words(wordList.begin(), wordList.end());
        
        int ans =0;
        while(!q.empty())
        {
            int m  = q.size();
            ans++;
            while(m--)
            {
                string s = q.front(); q.pop();
                if(s==endWord) return ans;
                for(int i=0;i<s.size();i++)
                {
                    string t = s;
                    for(char c = 'a'; c<='z';c++)
                    {
                        t[i] = c;
                        if(t!=s && st.find(t)==st.end() && words.find(t)!=words.end())
                            {q.push(t); st.insert(t);}
                    }
                }
            }
            
        }
        
        return 0;
    }
};