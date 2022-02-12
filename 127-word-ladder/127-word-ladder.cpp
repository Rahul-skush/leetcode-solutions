class Solution {
public:
    int ladderLength(string bw, string ew, vector<string>& wl) {
        
        unordered_set<string> toVisit(wl.begin(), wl.end());
        queue<string> q;
        findNeighbour(bw, q, toVisit);
        int cnt =2;
        while(!q.empty())
        {
            int n = q.size();
           
            for(int i =0;i<n;i++)
            {
                string s = q.front();
                q.pop();
                if(s==ew) return cnt;
                findNeighbour(s, q, toVisit);
            }
             cnt++;
        }
        return 0;
        
    }
    
    void findNeighbour(string bw, queue<string> &q, unordered_set<string> &toVisit)
    {
        toVisit.erase(bw);
        
        for(int i=0;i<bw.length();i++)
        {
            char ltr = bw[i];
            for(int j =0;j<26;j++)
            {
                bw[i]= 'a' + j;
                if(toVisit.find(bw)!=toVisit.end())
                {
                    q.push(bw);
                    toVisit.erase(bw);
                }
            }
            bw[i] =ltr;
        }
    }
};