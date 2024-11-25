class Solution {
public:
    bool isSubsequence(string s, string t) {
        int a,b;
        a = 0;b=0;
        while(a<s.length() && b<t.length()){
            if(s[a] == t[b])
            {
                a++;b++;
            }
            else
            {
                b++;
            }
        }
        if(a == s.length())
        {
            return true;
        }
        return false;
    }
};