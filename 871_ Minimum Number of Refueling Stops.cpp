/*
 Problem number =871
 problem name =  Minimum Number of Refueling Stops
 Difficulty =  hard
 
 Hope, given following solution would be helpful for you .
 			HAPPY CODING !
*/

class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
       int ans=0;
    priority_queue<long long >passed;
    int pos=0,i=0;
    int fuel=startFuel;
    while(fuel>0){
        pos+=fuel;
        fuel=0;
        if(pos>=target)
            break;
        
        while(i<stations.size() && stations[i][0]<=pos ){
            passed.push(stations[i][1]);
            ++i;
        } 
        
        if(!passed.empty()){
            fuel+=passed.top();
            passed.pop();
            ans++;
        }
        
    }
    
        return pos>=target?ans:-1;
        
    }
};
