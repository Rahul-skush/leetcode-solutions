class Solution {
public:
    void gameOfLife(vector<vector<int>>& A) {
    int m= size(A), n=size(A[0]);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int res= count(A,i,j,m,n); //count live neighbours
            //original alive
            if(A[i][j]==1){
                if(res<2 or res>3) A[i][j]=-A[i][j];   
            }
            else{
                A[i][j]=2;  //make it 2 for identifying it as a dead cell
                if(res!=3) A[i][j]=-A[i][j]; //make -2 if still dead
            }
        }
    }
    //convert all -ve to 0 and +ve to 1
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++) A[i][j]= A[i][j]<0? 0 : 1;
}

//indices of neighbours in 8 direction
int dis[8][2]={{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};

//function for counting the live neighbours of current cell
int count(vector<vector<int>>& A,int i,int j,int m,int n){
    int cnt=0;
    for(int k=0;k<8;k++){
        int x= i+dis[k][0];
        int y= j+dis[k][1];
        if(x>=0 and y>=0 and x<m and y<n and abs(A[x][y])==1) cnt++;
    }
    return cnt;
}
};