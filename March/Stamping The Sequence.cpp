class Solution {
public:
    vector<int> movesToStamp(string stamp, string target) {
       vector<int> res;
        int total_stamp = 0, turn_stamp = -1;
        while(turn_stamp)
        {
            turn_stamp = 0;
            for(int sz=stamp.size();sz>0;sz--)
            {
                for(int i=0;i<= stamp.size() - sz;i++)
                {
                    string new_stamp = string(i, '*') + stamp.substr(i, sz) + string(stamp.size() - i -sz, '*');
                    auto it = target.find(new_stamp);
                    while(it!=string :: npos)
                    {
                        res.push_back(it);
                        turn_stamp += sz;
                        fill(begin(target) + it, begin(target) + it + stamp.size(), '*');
                        it = target.find(new_stamp);
                    }
                   // cout<<new_stamp<<" ";
                }
               // cout<<endl;
            }
            
            total_stamp += turn_stamp;
        }
        
        reverse(res.begin(), res.end());
        return total_stamp == target.size() ? res : vector<int>();;
    }
};
