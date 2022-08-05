class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int sum =0, cnt =0, cap = capacity;
        for(int i=0;i<plants.size();i++)
        {
            if(plants[i]>capacity) return -1;
            if(cap<plants[i])
            {
                sum += cnt;
                cnt+=1;
                    sum += cnt;
                cap = capacity;
                cap -= plants[i];
            }else{
            cap -= plants[i];
            sum += 1;
            cnt+=1;
            }
        }
        return sum;
    }
};