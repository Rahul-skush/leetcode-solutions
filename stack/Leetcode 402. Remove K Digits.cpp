// Problem Link : https://leetcode.com/problems/remove-k-digits/ 


class Solution {
public:
    string removeKdigits(string num, int k) {
        int i=0;
        string s;
        while(i<num.size()){
            while(!s.empty() && num[i]<s.back() && k){k--;s.pop_back();}
            s+=num[i++];
        }
        while(k){
            s.pop_back();k--;
        }
        i=0;
        while(i<s.size() && s[i]=='0')i++;
        if(i==s.size())return "0";
        return s.substr(i);
    }
};
