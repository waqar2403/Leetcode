class Solution {
public:
    int longestPalindrome(string s) {
        if(s.length() == 1)
        {
            return 1;
        }
        sort(s.begin(),s.end());
        stack<char> st;
        int count = 0;
        st.push(s[0]);
        for(int i=1;i<s.length();i++)
        {
            if(!st.empty() &&  st.top() == s[i])
            {
                count += 2;
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
        if(!st.empty())
        {
            count++;
        }
        return count;
    }
};