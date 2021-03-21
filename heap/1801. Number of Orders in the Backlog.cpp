class Solution {
public:
    int mod = 1e9+7;
    int getNumberOfBacklogOrders(vector<vector<int>>& orders) {
        priority_queue<pair<int, int>>buy;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> sell;
        for(auto x : orders)
        {
            if(x[2]==1)
            {
                int cnt = x[1];
                while(!buy.empty())
                {
                    int f = buy.top().first;
                    if(cnt==0) break;
                    if(f>=x[0])
                    {
                        int s = buy.top().second;
                       int  mn = min(s, cnt);
                        s -= mn;
                        cnt -=mn; 
                        buy.pop();
                        if(s)
                            buy.push({f, s});
                    }else break;
                    
                }
                if(cnt)
                    sell.push({x[0], cnt});
            }
            else
            {
               int cnt = x[1];
                while(!sell.empty())
                {
                    int f = sell.top().first;
                    if(cnt==0) break;
                    if(f<=x[0])
                    {
                        int s = sell.top().second;
                       int  mn = min(s, cnt);
                        s -= mn;
                        cnt -=mn; 
                        sell.pop();
                        if(s)
                            sell.push({f, s});
                    }else break;
                    
                }
                if(cnt)
                    buy.push({x[0], cnt});
            }
        }
        
        cout<<endl;
        long long cnt = 0;
        while(!sell.empty())
        {
            int x = sell.top().second;
            cnt = (cnt + x)%mod;
            sell.pop();
        }
         while(!buy.empty())
        {
            int x = buy.top().second;
            cnt = (cnt + x)%mod;
             buy.pop();
        }
        return cnt%mod;
    }
};
