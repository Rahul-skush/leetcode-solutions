class Solution {
public:
    int minFlipsMonoIncr(string S) {
        int counter_flip = 0, counter_one = 0;
        for(auto c :  S)
        {
            if(c=='1')
                counter_one++;
            else
                counter_flip++;
            counter_flip = min(counter_flip, counter_one);
        }
        return counter_flip;
    }
};
