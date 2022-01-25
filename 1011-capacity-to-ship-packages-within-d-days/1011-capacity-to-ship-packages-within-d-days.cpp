class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int l = 1, h = 1e8;
        while(l<h)
        {
            int m = l +(h-l)/2;
            int sum =0, cnt=0, f=0;
            for(int i:weights)
            {
                sum += i;
                if(i>m) {l = m+1; f=1; break;}
                if(sum>=m)
                {
                    cnt++; 
                    if(sum>m) sum=i;
                    else sum =0;
                }
            }
            if(f) continue;
            if(sum) cnt++;
           // cout<<m<<" ";
            if(cnt>days)
                l=m+1;
            else h =m;
        }
      //  cout<<endl;
        return l;
    }
};