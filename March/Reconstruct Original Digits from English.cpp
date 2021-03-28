class Solution {
public:
    string originalDigits(string s) {
        if(s=="") return "";
        string res;
        int a[26] = {0};
        for(auto c : s)
            a[c - 'a']++;
        vector<int> nums = {0, 2, 4, 6, 8, 1, 3, 5,7, 9};
        vector<char> dist = {'z', 'w', 'u', 'x', 'g', 'o', 'r', 'f', 'v', 'i' };
        vector<string> word = {"zero", "two", "four", "six", "eight", "one", "three", "five", "seven", "nine" };
        for(int i = 0;i<10;i++)
        {
           int cnt = a[dist[i] - 'a'];
            
            for(int j =0;j<word[i].size();j++)
                a[word[i][j]-'a'] -= cnt;
            while(cnt--)
                res += to_string(nums[i]);
        }
        sort(res.begin(), res.end());
        return res;
    }
    

};
