/*
Leetcode problem no .-  1306
problem name - Jump Game III
Difficulty - Medium

*/

class Solution {
public:
    bool fun(vector<int>& a,int start,char* memo){
        bool c=false,d=false;
        if(memo[start]=='G')
            return true;
        if(memo[start]=='B'){
                return false;
        }
        memo[start]='B';
        int left,right;
        left=start-a[start];
        right=start+a[start];
        if(left>=0){
            c=fun(a,left,memo);
        }
        if(right<a.size()){
            d=fun(a,right,memo);
        }
        
        return(c||d);
    }
    bool canReach(vector<int>& a, int start) {
        char memo[a.size()];
        for(int i=0;i<a.size();i++){
            if(a[i]==0){
                memo[i]='G';
            }
            else
                memo[i]='U';
        }
        return fun(a,start,memo);
        
    }
};
