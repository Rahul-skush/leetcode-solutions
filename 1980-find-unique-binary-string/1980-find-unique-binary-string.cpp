class Solution {
public:
    set<string> st;
    string findDifferentBinaryString(vector<string>& nums) {
        for(auto x : nums)
            st.insert(x);
        string s;
        for(int i=0;i<nums.size();i++)
            s += '0';
        return find(s, 0);
    }
    
    string find(string s, int i)
    {
        if(st.find(s)==st.end()) return s;
        if(i==s.size()) return "";
        
        string s1 = find(s, i+1);
        s[i] = '1';
        string s2 = find(s, i+1);
        
        if(s1.size()>0) return s1;
        if(s2.size()>0) return s2;
        return "";
    }
};