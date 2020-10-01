class Solution {
public:
    int countServers(vector<vector<int>>& v) {
        int n=v.size(),m=v[0].size(),s=0;
        vector<vector<bool>>visited(n,vector<bool>(m,false));
        for(int i=0;i<n;i++){
            int c=0;
            for(int j=0;j<m;j++){
                if(v[i][j])c++;
            }
            
            if(c>1){
                c=0;
                for(int j=0;j<m;j++){
                if(v[i][j] && !visited[i][j]){visited[i][j]=true;c++;}
            }
                s+=c;
            }
        }
        for(int j=0;j<m;j++){
            int c=0;
            for(int i=0;i<n;i++){
                if(v[i][j])c++;
            }
            if(c>1){
                c=0;
                for(int i=0;i<n;i++){
                if(v[i][j] && !visited[i][j]){visited[i][j]=true;c++;}
            }
                s+=c;
            }
        }
        return s;
    }
};