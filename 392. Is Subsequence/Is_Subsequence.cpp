class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;
        int j=0;
        string ans="";
        while(i<t.length() && j<s.length())
        {
            if(t[i]==s[j])
            {
                ans = ans+s[j];
                j++;
            }
            i++;
        }
        return s==ans;
    }
};