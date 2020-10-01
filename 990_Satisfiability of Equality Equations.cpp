class Solution {
public:
    int parent[26];
    int find(int n){
        if(n==parent[n])return n;
        else return find(parent[n]);
    }
    bool equationsPossible(vector<string>& equations) {
        int x=1;
        bool res=true;
        for(int i=0;i<26;i++){
            parent[i]=i;
        }
        for(auto i:equations){
            char a=i[0];
            char b=i[1];
            char c=i[3];
            if(b=='='){
                int x=find(a-'a');
                int y=find(c-'a');
                if(x!=y){
                    parent[x]=y;
                }
            }  
        }
        for(auto i:equations){
            char a=i[0];
            char b=i[1];
            char c=i[3];
            if(b!='='){
                int x=find(a-'a');
                int y=find(c-'a');
                if(x==y){
                    return false;
                }
            }  
        }
        return true;
    }
};