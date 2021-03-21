class AuthenticationManager {
public:
    int tmToLv;
    map<string, int> mp;
    AuthenticationManager(int timeToLive) {
        tmToLv = timeToLive;
    }
    
    void generate(string tokenId, int currentTime) {
        mp[tokenId] = currentTime + tmToLv;
    }
    
    void renew(string tokenId, int currentTime) {
        if(mp.find(tokenId)==mp.end()) return ;
        if(mp[tokenId]>currentTime)
            mp[tokenId] = currentTime+tmToLv;
       else
           mp[tokenId] =-1;
    }
    
    int countUnexpiredTokens(int currentTime) {
        int cnt =0;
        for(auto x: mp)
        {
            if(x.second!=-1 && x.second>currentTime)
                cnt++;
        }
        return cnt;
    }
};

/**
 * Your AuthenticationManager object will be instantiated and called as such:
 * AuthenticationManager* obj = new AuthenticationManager(timeToLive);
 * obj->generate(tokenId,currentTime);
 * obj->renew(tokenId,currentTime);
 * int param_3 = obj->countUnexpiredTokens(currentTime);
 */
