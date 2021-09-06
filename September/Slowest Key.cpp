class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int pTime =0, maxDrn = 0;
        char c = 'a';
        
        for(int i=0;i<releaseTimes.size();i++)
        {
            if(releaseTimes[i]-pTime>maxDrn)
            {
                maxDrn = releaseTimes[i]-pTime;
                c = keysPressed[i];
            }else if(releaseTimes[i]-pTime==maxDrn)
            {
                c = max(c, keysPressed[i]);
            }
            pTime = releaseTimes[i];
        }
        return c;
    }
};
