class Solution {
public:
    bool isRobotBounded(string instructions) {
        string s = instructions;
        
        int i =0, j =0, dir = 0;
        
        for(int k =0;k<=6;k++)
        {
        for(auto x: s)
        {
            if(x == 'L')
                dir = (dir + 4 -1)%4;
            else if(x=='R')
                dir = (dir + 4 +1)%4;
            else {
                if(dir==0)
                    j += 1;
                else if(dir==1)
                    i +=1;
                else if(dir==2)
                    j-=1;
                else if(dir==3)
                    i-=1;
            }
        } 
         if(i==0 && j==0) return true;
    }
        
        return false;
    }
    
    
};