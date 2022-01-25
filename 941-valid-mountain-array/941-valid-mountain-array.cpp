class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int i =0, j = arr.size();
        if(j-i<=1) return 0;
        int prv = arr[0], f1=0, f2=0;
        i++;
        while(i<j)
        {
            if(arr[i]>prv)
                {prv = arr[i]; i++; f1=1;}
            else if(arr[i]==prv) return 0;
            else break; 
        }
        
        while(i<j)
        {
            if(arr[i]<prv) {prv = arr[i]; f2=1; i++;}
            else if(arr[i]==prv) return 0;
            else break;
        }
        //cout<<i<<" "<<j<<endl;
        return i==j && f1==1 && f2==1;
    }
};