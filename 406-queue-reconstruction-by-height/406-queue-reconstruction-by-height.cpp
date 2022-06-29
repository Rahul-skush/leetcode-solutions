class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(), people.end(), [&](vector<int> &v1, vector<int> &v2){
           return v1[0]>v2[0] || (v1[0]==v2[0] && v1[1]<=v2[1]); 
        });
        
        for(int i=1;i<people.size();i++)
        {
            int cnt =people[i][1], j =0;
            for(;j<i;j++)
            {
                if(people[i][0]<=people[j][0])
                    cnt--;
                if(cnt==-1) break;
            }
            Shift(j, i, people);
        }
        return people;
    }
    
    void Shift(int s, int e, vector<vector<int>>& people)
    {
        vector<int> dummy = people[e];
        int i = e-1;
        while(i>=s)
        {
            swap(people[i], people[i+1]);
            i--;
        }
    }
};
